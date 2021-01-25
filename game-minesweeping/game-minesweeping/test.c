#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Menu()
{
	printf("*****************************\n");
	printf("*****  欢迎来到扫雷游戏  *****\n");
	printf("***** 1.play     0.exit *****\n");
	printf("*****************************\n");
}


void playgame()
{
	char mine[ROWS][COLS] = { 0 };
	char display[ROWS][COLS] = { 0 };

	Board_init(mine, ROWS, COLS, '0');
	Board_init(display, ROWS, COLS, '*');

	printf("\n");
	printf("扫雷版面\n");
	Board_display(mine, ROWS, COLS);
	printf("\n");
	printf("设置雷的版面\n");
	Board_display(display, ROW, COL);

	setmine(mine, ROW, COL);



	findmine(display, mine, ROW, COL);

	getchar();
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;

	do
	{
		Menu();
		printf("请输入你的选择(1/0):>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			playgame();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}

	} while (input);

	return 0;
}