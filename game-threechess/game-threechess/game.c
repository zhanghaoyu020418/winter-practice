#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘中的数据
void board_init(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void board_display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("轮到您落子下棋：\n");
	printf("输入棋子的位置：> ");




	while (1)
	{
		scanf("%d%d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("该位置已经有棋子，请重新输入\n");
			continue;
		}
			
	}
	
		
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("轮到电脑落子下棋:\n");


	while (1)
	{
		int x = rand() % 2;
		int y = rand() % 2;
		
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
	

}

int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int  j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}

	return 1;

}



//判断胜负
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][0];
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
			return board[0][i];
	}

	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') ||
		(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' '))
		return board[1][1];

	if (isfull(board, row, col))
	{
		return 'Q';
	}

	return 'C';
}

/*
1.电脑赢了 返回'#'
2.玩家赢了 返回'*'
3.平 局 返回'Q'
4.继 续 返回'C'
*/

