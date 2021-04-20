#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

void Exit(char choic)
{
	if (choic != 'Y')
	{
		cout << "ллʹ��!" << endl;
		exit(-1);
	}
}

void Menu()
{
	cout << "\t��ӭ��������������!" << endl;
	cout << "  -----------------------------" << endl;
	cout << "  ---    ��ѡ����Ҫ�Ĳ���   ---" << endl;
	cout << "  ---    1.start game(Y)    ---" << endl;
	cout << "  ---    2.exit(N)          ---" << endl;
	cout << "  -----------------------------" << endl;
}

void playgame()
{
	CGoBang::PrintBoard();
	CGoBang p1('o');
	CGoBang p2('x');
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
	cout << "��ѡ��(Y/N)" << endl;
	cin >> choic;
	Exit(choic);

	cout << "ע��������o,������x" << endl;
	cout << "��ʼ��Ϸ��!" << endl;
	do
	{
		CGoBang::InitBoard();
		playgame();
		cout << "�Ƿ�Ҫ����һ��(Y/N)" << endl;
		cin >> choic;
		system("cls");
	} while (choic == 'Y');
	Exit(choic);
}

int main()
{
	Test1();
	return 0;
}