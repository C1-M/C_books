#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("----------------------\n");
	printf("-------扫雷游戏-------\n");
	printf("------1.进入游戏------\n");
	printf("------0.退出游戏------\n");
	printf("----------------------\n");
}

void game()
{
	char mine[ROWS][COLS];//存放的是雷的信息
	char show[ROWS][COLS];//存放的是排查出雷的信息
	// 初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	// 打印棋盘
	Displayboard(show, ROW, COL);
	//Displayboard(mine, ROW, COL);

	// 布置雷
	Setmine(mine, ROW, COL);

	// 排雷
	Findmine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择数字：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的数字（0-1）：\n");
			break;
		}
	} while (input);
	
	return 0;
}