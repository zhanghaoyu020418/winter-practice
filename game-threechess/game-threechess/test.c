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
	system("cls");                  //�����Ļǰ�����ʾ
	char board[ROW][COL];
	board_init(board, ROW, COL);    //��ʼ������
	board_display(board, ROW, COL); //��ʾ����
	char ret ;



	while (1)                       //ѭ������
	{

		//��ҿ�ʼ����
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printf("\n");
		board_display(board, ROW, COL);


		//���Կ�ʼ����
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printf("\n");
		board_display(board, ROW, COL);


		printf("(���س�����)\n");
		getchar();
		getchar();
		system("cls");
	}
	
	if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == 'Q')
		printf("˫���ƾ����У�ƽ��\n");


}



int main()
{
	srand((unsigned int)time(NULL));
	int input;

	do 
	{
		Menu();
		printf("��������Ҫ�Ĳ�����> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			playgame();
			//system("cls");
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			system("cls");
			break;
		default:
			printf("����������������룡\n");
			system("cls");
			break;
		}

	} while (input);
	return 0;
}