#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

CGoBang::CGoBang(char chsort)        // ��������������
{
	this->chsort = chsort;
}

void CGoBang::PlayTurn()             // ����
{

}

bool CGoBang::Judge()                // �ж����ӵĺϷ���
{
	return false;
}

void CGoBang::Draw()          // ƽ�ֵ����
{

}
void CGoBang::PrintInfo()     // ��ӡ��ǰ�Ķ�ս���
{

}
void CGoBang::PrintBoard()    // ��ӡ��ǰ�����̵�״��
{
	cout << " ";
	for (int fRow = 1; fRow <= ROW; fRow++) // ��ӡ��һ�еı��
		cout << fRow << ' ';
	cout << endl;
	cout << " __ __ __ __ __ __" << endl;
	for (int i = 1; i < ROW; i++)
	{
		cout << i;
		
		for (int j = 1; j < COL; j++)
			cout << "|" << Board[i][j];
		cout << "|" << endl;
	}
	cout << " __ __ __ __ __ __" << endl;

}

bool CGoBang::GetFull()       // �ж������Ƿ�����
{
	for (int i = 1; i < ROW; i++)
		for (int j = 1; j < COL; j++)
			if (Board[i][j] != ' ')
				return false;
	return true;
}


void CGoBang::InitBoard()     // ��ʼ������
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			Board[i][j] = ' ';
}