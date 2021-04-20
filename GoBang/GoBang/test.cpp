#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

void Menu()
{
	cout << "\t\t欢迎来到欢乐五子棋!" << endl;
	cout << "-----------------------------" << endl;
	cout << "---    请选择你要的操作    ---" << endl;
	cout << "---    1.start game       ---" << endl;
	cout << "---    2.exit             ---" << endl;
	cout << "-----------------------------" << endl;
	int choic;
	cin >> choic;
	if (choic != 1)
		exit(-1);
	cout << "注意先手是o,后手是x" << endl;
	cout << "开始游戏吧!" << endl;
}

void Test1()
{
	Menu();
	CGoBang::PrintBoard();
}

int main()
{
	Test1();
	return 0;
}