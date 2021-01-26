#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Menu()
{
	printf("*****************************\n");
	printf("*****  ��ӭ����ɨ����Ϸ  *****\n");
	printf("***** 1.play     0.exit *****\n");
	printf("*****************************\n");
}


void playgame()
{
	char mine[ROWS][COLS] = { 0 };
	char display[ROWS][COLS] = { 0 };

	Board_init(mine, ROWS, COLS, '0');     //��ʼ�����װ���
	Board_init(display, ROWS, COLS, '*');  //��ʼ����Ϸ����

/*	printf("\n");
	printf("ɨ�װ���\n");
	Board_display(mine, ROW, COL);   */    


	setmine(mine, ROW, COL, DIFFCULT);              //������

	printf("ɨ�װ���\n");
	Board_display(mine, ROW, COL);


	printf("\n");
	printf("�����׵İ���\n");
	Board_display(display, ROW, COL);  //չʾ��Ϸ����


	findmine(display, mine, ROW, COL, DIFFCULT);

	printf("���׷ֲ����:>\n");
	Board_display(mine, ROW, COL);

	printf("\n\n");


	getchar();
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;

	do
	{
		Menu();
		printf("���������ѡ��(1/0):>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			playgame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}

	} while (input);

	return 0;
}