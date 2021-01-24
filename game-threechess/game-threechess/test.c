#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void Menu()
{
	printf("********************\n");
	printf("****   1.play   ****\n");
	printf("****   0.exit   ****\n");
	printf("********************\n");
}

void playgame()
{
	system("cls");                  //清楚屏幕前面的提示
	char board[ROW][COL];
	board_init(board, ROW, COL);    //初始化棋盘
	board_display(board, ROW, COL); //显示棋盘
	char ret ;



	while (1)                       //循环下棋
	{

		//玩家开始下棋
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printf("\n");
		board_display(board, ROW, COL);


		//电脑开始下棋
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printf("\n");
		board_display(board, ROW, COL);


		printf("(按回车继续)\n");
		getchar();
		getchar();
		system("cls");
	}
	
	if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == 'Q')
		printf("双方势均力敌，平局\n");


}



int main()
{
	srand((unsigned int)time(NULL));
	int input;

	do 
	{
		Menu();
		printf("请输入你要的操作：> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			playgame();
			//system("cls");
			break;
		case 2:
			printf("退出游戏！\n");
			system("cls");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			system("cls");
			break;
		}

	} while (input);
	return 0;
}