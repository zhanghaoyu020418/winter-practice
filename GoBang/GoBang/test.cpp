#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

void Menu()
{
	cout << "\t\t��ӭ��������������!" << endl;
	cout << "-----------------------------" << endl;
	cout << "---    ��ѡ����Ҫ�Ĳ���    ---" << endl;
	cout << "---    1.start game       ---" << endl;
	cout << "---    2.exit             ---" << endl;
	cout << "-----------------------------" << endl;
	int choic;
	cin >> choic;
	if (choic != 1)
		exit(-1);
	cout << "ע��������o,������x" << endl;
	cout << "��ʼ��Ϸ��!" << endl;
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