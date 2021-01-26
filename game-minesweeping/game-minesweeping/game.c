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
void Board_display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= col ; i++)
		printf("%d ", i);
	printf("\n");

	for (i = 1; i <= row ; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col ; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//设置雷
void setmine(char board[ROWS][COLS], int row, int col,int cnt)
{
	while (cnt)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			cnt--;
		}
			

	}
}


int minenumber(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;

	int sum = 0;

	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			sum += (board[i][j] - '0');
		}
	}

	return sum;

}




//排雷
void findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int cnt)
{


	int Win = 0;

	while (Win < row * col - cnt)
	{
		printf("请输入雷的坐标:>");
		int x, y;
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，游戏失败！\n");
				Board_display(mine, row, col);
				break;
			}

			else if (mine[x][y] == '0')
			{
				int cnt = minenumber(mine, x, y);
				show[x][y] = cnt + '0';
				Board_display(show, row, col);
				Win++;
			}
		}

		else
		{
			printf("坐标错误，请重新输入:>\n");
		}	
	}
	if(Win == row * col - cnt)
		printf("恭喜您胜利了\n");

	printf("\n\n");
	
}
