#define _CRT_SECURE_NO_WARNINGS

// 剩余小问题（不影响运行）
// snake.c 中 HideCursor() 函数定义但从未调用（ ConsoleInit 已隐藏光标），是死代码
// SqList.h 和 SqList.cpp 文件未发现问题，代码结构清晰、实现正确

/*
 * snake.c - 贪吃蛇游戏
 * 功能：基于顺序表(SqList)实现的控制台贪吃蛇小游戏
 * 依赖：SqList.h（蛇身坐标管理）、windows.h（控制台操作）
 * 操作：WASD 控制方向，ESC 退出游戏
 */

#include "SqList.h"
#include <windows.h>
#include <time.h>

/* ========== 地图常量 ========== */
#define MAP_WIDTH  30   // 地图宽度（不含左右边框）
#define MAP_HEIGHT 20   // 地图高度（不含上下边框）

/* ========== 方向常量 ========== */
#define DIR_UP    0     // 向上
#define DIR_DOWN  1     // 向下
#define DIR_LEFT  2     // 向左
#define DIR_RIGHT 3     // 向右

/*
 * 坐标打包/解包宏
 * 将二维坐标 (x, y) 打包为一个整数：val = x * MAP_WIDTH + y
 * 用于在 SqList 中以单个 int 存储一个坐标点
 */
#define PACK(x, y) ((x) * MAP_WIDTH + (y))     // 打包：二维 -> 一维
#define UNPACK_X(val) ((val) / MAP_WIDTH)       // 解包：还原行号 x
#define UNPACK_Y(val) ((val) % MAP_WIDTH)       // 解包：还原列号 y

/* ========== 全局游戏状态 ========== */
static SqList snake;            // 蛇身坐标列表（顺序表存储）
static int foodX, foodY;        // 食物坐标
static int score = 0;           // 当前得分
static int direction = DIR_RIGHT;  // 蛇的当前移动方向（初始向右）
static int gameOver = 0;        // 游戏结束标志：0=进行中，1=已结束

/* ========== 控制台辅助函数 ========== */
static HANDLE hConsole;  // 控制台输出句柄

/*
 * 初始化控制台
 * - 获取标准输出句柄
 * - 隐藏光标闪烁
 * - 设置窗口标题
 */
static void ConsoleInit() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ci = { 1, FALSE };  // 光标大小1%，不可见
	SetConsoleCursorInfo(hConsole, &ci);
	SetConsoleTitleA("Snake Game - WASD to move, ESC to quit");
}

/*
 * 移动光标到指定位置 (x, y)
 * x = 行号（从上到下），y = 列号（从左到右）
 */
static void Gotoxy(int x, int y) {
	COORD pos = { (SHORT)y, (SHORT)x };  // COORD 的 X 是列，Y 是行
	SetConsoleCursorPosition(hConsole, pos);
}

/*
 * 隐藏光标（防止光标闪烁影响游戏画面）
 */
static void HideCursor() {
	CONSOLE_CURSOR_INFO ci = { 1, FALSE };
	SetConsoleCursorInfo(hConsole, &ci);
}

/* ========== 地图绘制 ========== */

/*
 * 绘制游戏地图边框
 * - 先清屏
 * - 绘制上边框（MAP_WIDTH+2 个 '#'）
 * - 绘制左右边框和内部空白区域
 * - 绘制下边框
 * - 显示分数和操作提示
 */
static void DrawMap() {
	system("cls");
	// 上边框
	for (int i = 0; i <= MAP_WIDTH + 1; i++) printf("#");
	printf("\n");
	// 中间行（左右各一个 '#'，中间为空白）
	for (int i = 0; i < MAP_HEIGHT; i++) {
		printf("#");
		for (int j = 0; j < MAP_WIDTH; j++) printf(" ");
		printf("#\n");
	}
	// 下边框
	for (int i = 0; i <= MAP_WIDTH + 1; i++) printf("#");
	printf("\n");
	// 显示分数和操作提示
	printf("Score: %d    WASD:Move  ESC:Quit\n", score);
}

/*
 * 在指定位置绘制一个字符
 * x, y 为地图内的逻辑坐标（不含边框偏移）
 */
static void DrawCell(int x, int y, const char* ch) {
	Gotoxy(x + 1, y + 1);  // +1 偏移边框
	printf("%s", ch);
}

/*
 * 绘制食物（用 '*' 表示）
 */
static void DrawFood() {
	DrawCell(foodX, foodY, "*");
}

/* ========== 蛇身操作 ========== */

/*
 * 获取蛇身第 index 节的坐标值（打包后的整数）
 * index 0 = 蛇尾，index (size-1) = 蛇头
 */
static int SnakeAt(int index) {
	return GetElem(&snake, index);
}

/*
 * 获取蛇身当前长度
 */
static int SnakeSize() {
	return SqListSize(&snake);
}

/*
 * 在蛇头位置添加新节点（尾插法）
 * 使用 SqListPushBack，新节点成为 index size-1（蛇头位置）
 */
static void SnakeAddHead(int x, int y) {
	SqListPushBack(&snake, PACK(x, y));
}

/*
 * 移除蛇尾节点（头删法）
 * 使用 SqListPopFront，删除 index 0 的元素（蛇尾位置）
 */
static void SnakeRemoveTail() {
	SqListPopFront(&snake);
}

/*
 * 获取蛇头的行坐标（x）
 * 蛇头在列表最后一个位置（index = size - 1）
 */
static int SnakeHeadX() { return UNPACK_X(SnakeAt(SnakeSize() - 1)); }

/*
 * 获取蛇头的列坐标（y）
 */
static int SnakeHeadY() { return UNPACK_Y(SnakeAt(SnakeSize() - 1)); }

/*
 * 检查坐标 (x, y) 是否被蛇身占据
 * 遍历整个蛇身进行判断
 * 返回：1=占据，0=未占据
 */
static int IsOnSnake(int x, int y) {
	int val = PACK(x, y);
	for (int i = 0; i < SnakeSize(); i++) {
		if (SnakeAt(i) == val) return 1;
	}
	return 0;
}

/* ========== 食物生成 ========== */

/*
 * 随机放置食物
 * 在地图范围内随机生成坐标，确保不与蛇身重叠
 */
static void PlaceFood() {
	do {
		foodX = rand() % MAP_HEIGHT;  // 随机行号 [0, MAP_HEIGHT)
		foodY = rand() % MAP_WIDTH;   // 随机列号 [0, MAP_WIDTH)
	} while (IsOnSnake(foodX, foodY));  // 重叠则重新生成
	DrawFood();  // 在新位置绘制食物
}

/* ========== 输入处理 ========== */

/*
 * 读取键盘输入（非阻塞）
 * - ESC：退出游戏
 * - W/S/A/D：改变方向（不允许180度掉头）
 */
static void ReadInput() {
	if (GetAsyncKeyState(VK_ESCAPE)) { gameOver = 1; return; }
	// 防止反向移动（如正在向上走时不能直接向下）
	if (GetAsyncKeyState('W') && direction != DIR_DOWN)  direction = DIR_UP;
	if (GetAsyncKeyState('S') && direction != DIR_UP)    direction = DIR_DOWN;
	if (GetAsyncKeyState('A') && direction != DIR_RIGHT) direction = DIR_LEFT;
	if (GetAsyncKeyState('D') && direction != DIR_LEFT)  direction = DIR_RIGHT;
}

/* ========== 游戏核心逻辑 ========== */

/*
 * 蛇移动一步
 * 逻辑：
 *   1. 根据当前方向计算新蛇头坐标
 *   2. 检测撞墙 → 游戏结束
 *   3. 检测撞自身 → 游戏结束
 *   4. 如果新位置是食物 → 蛇变长（只加头不删尾）
 *   5. 否则正常移动（加头 + 删尾）
 */
static void MoveSnake() {
	int hx = SnakeHeadX(), hy = SnakeHeadY();  // 当前蛇头位置
	int nx = hx, ny = hy;                       // 新蛇头位置（初始等于当前）

	// 根据方向计算新蛇头坐标
	switch (direction) {
	case DIR_UP:    nx--; break;  // 向上：行号减1
	case DIR_DOWN:  nx++; break;  // 向下：行号加1
	case DIR_LEFT:  ny--; break;  // 向左：列号减1
	case DIR_RIGHT: ny++; break;  // 向右：列号加1
	}

	// 撞墙检测：新坐标超出地图范围则游戏结束
	if (nx < 0 || nx >= MAP_HEIGHT || ny < 0 || ny >= MAP_WIDTH) {
		gameOver = 1;
		return;
	}

	// 撞自身检测：新坐标在蛇身上则游戏结束
	// 注意：排除蛇尾，因为蛇尾在移动后会离开原位
	int tailVal = SnakeAt(0);       // 蛇尾的值
	int newHeadVal = PACK(nx, ny);  // 新蛇头的值
	if (IsOnSnake(nx, ny) && newHeadVal != tailVal) {
		gameOver = 1;
		return;
	}

	// 吃食物：新蛇头位置正好是食物
	if (nx == foodX && ny == foodY) {
		SnakeAddHead(nx, ny);           // 蛇头前移（蛇变长，不删尾）
		DrawCell(nx, ny, "@");          // 绘制新蛇头
		score += 10;                    // 加分
		Gotoxy(MAP_HEIGHT + 2, 7);      // 移动光标到分数位置
		printf("%d", score);            // 更新分数显示
		PlaceFood();                    // 生成新食物
	}
	else {
		// 正常移动：加头 + 删尾
		SnakeAddHead(nx, ny);           // 新蛇头加入列表
		DrawCell(nx, ny, "@");          // 绘制新蛇头
		int tx = UNPACK_X(tailVal), ty = UNPACK_Y(tailVal);
		DrawCell(tx, ty, " ");          // 清除旧蛇尾的显示
		SnakeRemoveTail();              // 从列表中移除蛇尾
	}
}

/*
 * 初始化蛇
 * - 初始化顺序表
 * - 在地图中央生成 3 节蛇身
 * - 蛇头在最右侧（index size-1），向右排列
 */
static void InitSnake() {
	SqListInit(&snake);
	int cx = MAP_HEIGHT / 2, cy = MAP_WIDTH / 2;  // 地图中心点
	// 依次添加 3 节蛇身：从尾到头（蛇尾先加，蛇头最后加）
	SnakeAddHead(cx, cy - 2);   // 蛇尾（最左侧）
	SnakeAddHead(cx, cy - 1);   // 身体
	SnakeAddHead(cx, cy);       // 蛇头（最右侧）
	// 绘制初始蛇身
	for (int i = 0; i < SnakeSize(); i++) {
		DrawCell(UNPACK_X(SnakeAt(i)), UNPACK_Y(SnakeAt(i)), "@");
	}
}

/* ========== 主函数 ========== */

int main() {
	srand((unsigned)time(NULL));  // 用当前时间作为随机种子
	ConsoleInit();                // 初始化控制台
	DrawMap();                    // 绘制地图边框
	InitSnake();                  // 初始化蛇
	PlaceFood();                  // 放置第一个食物

	// 游戏主循环：每 100ms 执行一帧
	while (!gameOver) {
		ReadInput();    // 读取键盘输入
		MoveSnake();    // 蛇移动一步
		Sleep(100);     // 控制游戏速度（100ms/帧）
	}

	// 游戏结束，显示最终得分
	Gotoxy(MAP_HEIGHT + 2, 0);
	printf("Game Over! Final Score: %d\n", score);
	SqListDestroy(&snake);  // 释放蛇身内存
	return 0;
}
