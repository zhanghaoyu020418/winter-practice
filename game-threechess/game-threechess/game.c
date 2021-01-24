#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ�������е�����
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

//��ӡ����
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


//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�ֵ����������壺\n");
	printf("�������ӵ�λ�ã�> ");




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
			printf("��λ���Ѿ������ӣ�����������\n");
			continue;
		}
			
	}
	
		
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�ֵ�������������:\n");


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



//�ж�ʤ��
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
1.����Ӯ�� ����'#'
2.���Ӯ�� ����'*'
3.ƽ �� ����'Q'
4.�� �� ����'C'
*/

