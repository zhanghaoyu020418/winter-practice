#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

void Exit(char choic)
{
	if (choic != 'Y')
	{
		cout << "谢谢使用!" << endl;
		exit(-1);
	}
}

void Menu()
{
	cout << "\t欢迎来到欢乐三子棋!" << endl;
	cout << "  -----------------------------" << endl;
	cout << "  ---    请选择你要的操作   ---" << endl;
	cout << "  ---    1.start game(Y)    ---" << endl;
	cout << "  ---    2.exit(N)          ---" << endl;
	cout << "  -----------------------------" << endl;
}

CGoBang p1('o');
CGoBang p2('x');

void playgame()
{
	CGoBang::PrintBoard();

	while (1)
	{
		p1.PlayTurn();
		CGoBang::PrintBoard();
		if (p1.Judge())
		{
			CGoBang::PrintBoard();
			p1.isWin();
			p2.isLose();
			return;
		}
		p2.PlayTurn();
		if (p2.Judge())
		{
			CGoBang::PrintBoard();
			p2.isWin();
			p1.isLose();
			return;
		}
		if (p1.GetFull())
		{
			CGoBang::PrintBoard();
			Draw++;
			return;
		}
		CGoBang::PrintBoard();
	}
}

void Test1()
{
	Menu();	
	char choic;
	cout << "请选择(Y/N)" << endl;
	cin >> choic;
	Exit(choic);

	cout << "注意先手是o,后手是x" << endl;
	cout << "开始游戏吧!" << endl;
	do
	{
		CGoBang::InitBoard();
		playgame();
		cout << "是否要在来一局(Y/N)" << endl;
		cin >> choic;
		system("cls");
	} while (choic == 'Y');
	p1.PrintInfo();
	p2.PrintInfo();
	cout << "Draw: > " << Draw << endl;
	Sleep(3000);
	Exit(choic);
}

int main()
{
	system("title 欢乐三子棋");//设置标题
	system("mode con cols=40 lines=29");//设置窗口大小
	system("color E0");//设置颜色
	Test1();
	return 0;
}