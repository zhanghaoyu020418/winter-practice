#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
三子棋
1.初始化棋盘中的数据，将其初始化为空格
2.打印棋盘
3.玩家下棋
4.电脑下棋
5.判断输赢
*/

#define ROW 3
#define COL 3



//初始化棋盘中的数据
void board_init();

//打印棋盘
void board_display();

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断胜负
char CheckWin(char board[ROW][COL], int row, int col);





