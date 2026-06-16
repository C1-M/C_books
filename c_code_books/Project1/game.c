//#define _CRT_SECURE_NO_WARNINGS
//#include"game.h"
//
//void Initboard(char board[ROWS][COLS], int r, int c, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void Displayboard(char board[ROWS][COLS], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= r; i++)
//	{
//		for (j = 1; j <= c; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void Setmine(char board[ROW][COL],int r,int c)
//{
//	int count = 10;
//	while (count) //循环次数大于等于 10
//	{
//		int x = rand() % r + 1;
//		int y = rand() % c + 1;
//		if (board[x][y] == '0')
//		{
//			//board[x][y] == '1';//错误 == 修改为 = 
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//
//static size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x - 1][y] + mine[x - 1][y - 1] +
//		mine[x][y - 1] + mine[x + 1][y - 1] +
//		mine[x + 1][y] + mine[x + 1][y + 1] +
//		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
//}
//
//void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win < r*c-10)
//	{
//		printf("请输入排查坐标：");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= r && y >= 1 && y <= c)
//		{
//			if (show[x][y] != '*')
//			{
//				if (mine[x][y] == '1')
//				{
//					printf("很遗憾，你被炸死了\n");
//					Displayboard(mine, ROW, COL);
//					break;
//				}
//				else
//				{
//					size_t count = GetMineCount(mine, x, y);
//					show[x][y] = (char)count + '0';
//					Displayboard(show, ROW, COL);
//					win++;
//				}
//			}
//			else
//			{
//				printf("该坐标已经被排查过，不用重复排查");
//			}
//		}
//		else
//		{
//			printf("输入的坐标非法，请重新输入\n");
//		}
//	}
//	if (win == r * c - 10)
//	{
//		printf("恭喜你，排雷成功\n");
//		Displayboard(show, ROW, COL);
//	}
//}


// 更改后

#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// 初始化棋盘
void Initboard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}

// 显示棋盘（优化：增加行号列号，提升用户体验）
void Displayboard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	int j = 0;
	// 打印列号
	printf("  ");
	for (j = 1; j <= c; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	// 打印棋盘内容+行号
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// 布置地雷（修正：赋值运算符错误）
void Setmine(char board[ROW][COL], int r, int c)
{
	int count = 10; // 10个地雷
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		// 修正：== 改为 =，否则无法设置地雷
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

// 获取周围地雷数量（修正：添加return返回值）
static size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	// 修正：添加return返回计算结果
	return mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

// 排查地雷（修正：逻辑颠倒+分支缩进）
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0; // 已排查非地雷的数量
	while (win < r * c - 10) // 总格子-地雷数=需要排查的数量
	{
		printf("请输入排查坐标：");
		scanf("%d%d", &x, &y);
		// 坐标合法性检查
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			// 修正：逻辑颠倒 → 检查是否已排查
			if (show[x][y] != '*')
			{
				printf("该位置已排查，请勿重复排查！\n");
			}
			else
			{
				// 未排查的位置，检查是否是地雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了！\n");
					Displayboard(mine, ROW, COL); // 显示地雷位置
					break;
				}
				else
				{
					// 计算周围地雷数并显示
					size_t count = GetMineCount(mine, x, y);
					show[x][y] = (char)count + '0';
					Displayboard(show, ROW, COL);
					win++; // 仅非地雷、未排查的位置计数
				}
			}
		}
		else
		{
			printf("坐标非法，请输入1-%d之间的数！\n", r);
		}
	}
	// 通关判断
	if (win == r * c - 10)
	{
		printf("恭喜你，排雷成功！\n");
		Displayboard(mine, ROW, COL); // 显示所有地雷位置
	}
}
