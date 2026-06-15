#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

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

void Displayboard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Setmine(char board[ROW][COL],int r,int c)
{
	int count = 10;
	while (count) //循环次数大于等于 10
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')
		{
			board[x][y] == '1';
			count--;
		}
	}
}

size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入排查坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] != '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					Displayboard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
				}
			}
			else
			{
				printf("该坐标已经被排查过，不用重复排查");
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
}



