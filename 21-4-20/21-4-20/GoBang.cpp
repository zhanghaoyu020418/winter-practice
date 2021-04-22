#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

void CGoBang::InitBoard()     // ��ʼ������
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			Board[i][j] = ' ';
}


bool CGoBang::GetFull()       // �ж������Ƿ�����
{
	for (int i = 1; i < ROW; i++)
		for (int j = 1; j < COL; j++)
			if (Board[i][j] == ' ')
				return false;
	return true;
}

CGoBang::CGoBang(char chsort)        // ��������������
{
	this->chsort = chsort;
	Win = 0;
	Lose = 0;
}

void CGoBang::PrintBoard()    // ��ӡ��ǰ�����̵�״��
{
	cout << " ";
	for (int fRow = 1; fRow < ROW; fRow++) // ��ӡ��һ�еı��
		cout << "  " << fRow << " ";
	cout << endl;
	cout << " |---|---|---|---|" << endl;
	for (int i = 1; i < ROW; i++)
	{
		cout << i;

		for (int j = 1; j < COL; j++)
			cout << "| " << Board[i][j] << " ";
		cout << "|" << endl;
	}
	cout << " |---|---|---|---|" << endl;
}

void CGoBang::PlayTurn()             // ����
{
	int flag = 1;
	while (flag)
	{
		cout << "����������(x, y):>";
		int x, y;
		cin >> x >> y;
		if (x >= 1 && x < ROW && y >= 1 && y < COL && Board[x][y] == ' ')
		{
			Board[x][y] = chsort;
			flag = 0;
		}
		else
		{
			cout << "���겻�Ϸ�,��������������!" << endl;
		}
	}
}

void CGoBang::PrintInfo()            // ��ӡ��ǰ�Ķ�ս���
{
	cout << chsort << " player:" << "    Win:>" << Win << "    Lose:>" << Lose << endl;
}

bool CGoBang::Judge()                // �ж�ʤ��
{
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 1; i < ROW; i++)
	{
		for (int j = 1; j < COL; j++)
		{
			if (Board[i][j] == chsort && Board[i][j] == Board[i][j - 1])
				cnt1++;
			if (cnt1 == 2)
				return true;
		}
	}
	for (int i = 1; i < ROW; i++)
		for (int j = 1; j < COL; j++)
		{
			if (Board[j][i] == chsort && Board[j][i] == Board[j - 1][i])
				cnt2++;
			if (cnt2 == 2)
				return true;
		}

	for (int i = 1; i < ROW; i++)
	{
		if (Board[i][i] == chsort && Board[i][i] == Board[i - 1][i - 1])
			cnt3++;
		if (cnt3 == 2)
			return true;
	}

	if (Board[2][3] == chsort && Board[1][2] == Board[2][3] && Board[2][3] == Board[3][4])
		return true;

	if (Board[3][2] == chsort && Board[2][1] == Board[3][2] && Board[3][2] == Board[4][3])
		return true;

	int cnt4 = 0;
	for (int i = 4; i >= 3; i--)
	{
		if (Board[i][5 - i] == chsort && Board[i][5 - i] == Board[i - 1][6 - i]
			&& Board[i - 1][6 - i] == Board[i - 2][7 - i])
			return true;
	}

	if (Board[2][2] == chsort && Board[1][3] == Board[2][2] && Board[2][2] == Board[3][1]) 
		return true;
	return false;
}

void CGoBang::isWin()
{
	cout << chsort << " is winning" << endl;
	Win++;
}
void CGoBang::isLose()
{
	cout << chsort << " is losing" << endl;
	Lose++;
}
void CGoBang::isDraw()
{
	cout << "Draw!!!" << endl;
	Draw++;
}




