#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
������
1.��ʼ�������е����ݣ������ʼ��Ϊ�ո�
2.��ӡ����
3.�������
4.��������
5.�ж���Ӯ
*/

#define ROW 3
#define COL 3



//��ʼ�������е�����
void board_init();

//��ӡ����
void board_display();

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж�ʤ��
char CheckWin(char board[ROW][COL], int row, int col);





