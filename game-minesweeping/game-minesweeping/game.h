#pragma once

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9

#define EASY 10;
#define MID 40;
#define DIFFCULT 80;


//��ʼ������
void Board_init(char board[ROWS][COLS], int rows, int cols, char set);

//��ʾ����
void Board_display(char board[ROWS][COLS], int rows, int cols);

//������
void setmine(char board[ROWS][COLS], int row, int col, int cnt);

//����
void findmine(char show[ROWS][COLS], char board[ROWS][COLS], int row, int col, int cnt);



