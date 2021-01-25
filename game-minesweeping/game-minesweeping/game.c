#define _CRT_SECURE_NO_WARNINGS 1
/*
扫雷小游戏
b1.实现循环玩游戏
2.初始化版面
3.可以显示版面
4.布置雷的位置
5.排雷
*/
#include "game.h"


//初始化版面
void Board_init(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i;
	int j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

//显示版面
void Board_display(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= cols - 2; i++)
		printf("%d ", i);
	printf("\n");

	for (i = 1; i <= rows - 2; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= cols - 2; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//设置雷
void setmine(char board[ROWS][COLS], int row, int col)
{
	int cnt = 10;
	while (cnt)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
			board[x][y] = '1';
		cnt--;
	}
}


//排雷
void findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	printf("请输入雷的坐标:>");
	int x, y;
	scanf("%d%d", &x, &y);
}
