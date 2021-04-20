#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

#define ROW 5
#define COL 5

class CGoBang
{
public:
	CGoBang(char chsort);        // 五子棋的棋子类别
	void PlayTurn();             // 下棋
	bool Judge();                // 判断棋子的合法性
	static void Draw();          // 平局的输出
	static void PrintInfo();     // 打印当前的对战情况
	static void PrintBoard();    // 打印当前的棋盘的状况
	static bool GetFull();       // 判断棋盘是否已满
	static void InitBoard();     // 初始化棋盘
private:
	char chsort;                 // 棋子的类别
	int nWin;                    // 该选手赢的次数
	int Lose;                    // 该选手输的次数
	static int nDraw;            // 平局的次数
	static char Board[ROW][COL]; // 棋盘
};
