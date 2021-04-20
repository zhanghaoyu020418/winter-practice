#define _CRT_SECURE_NO_WARNINGS 1
#include "GoBang.h"

CGoBang::CGoBang(char chsort)        // 五子棋的棋子类别
{
	this->chsort = chsort;
}

void CGoBang::PlayTurn()             // 下棋
{

}

bool CGoBang::Judge()                // 判断棋子的合法性
{
	return false;
}

void CGoBang::Draw()          // 平局的输出
{

}
void CGoBang::PrintInfo()     // 打印当前的对战情况
{

}
void CGoBang::PrintBoard()    // 打印当前的棋盘的状况
{
	cout << " ";
	for (int fRow = 1; fRow <= ROW; fRow++) // 打印第一行的标号
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

bool CGoBang::GetFull()       // 判断棋盘是否已满
{
	for (int i = 1; i < ROW; i++)
		for (int j = 1; j < COL; j++)
			if (Board[i][j] != ' ')
				return false;
	return true;
}


void CGoBang::InitBoard()     // 初始化棋盘
{
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			Board[i][j] = ' ';
}