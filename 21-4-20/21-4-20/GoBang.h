#pragma once
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

#define ROW 5
#define COL 5

class CGoBang
{
public:
	CGoBang(char chsort);        // 五子棋的棋子类别
	void PlayTurn();             // 下棋
	bool Judge();                // 判断胜负
	void PrintInfo();            // 打印当前的对战情况
	static void PrintBoard();    // 打印当前的棋盘的状况
	bool GetFull();              // 判断棋盘是否已满
	static void InitBoard();     // 初始化棋盘
	void isWin();
	void isLose();
	void isDraw();
private:
	char chsort;                 // 棋子的类别
	int Win;                    // 该选手赢的次数
	int Lose;                    // 该选手输的次数
};

static char Board[5][5];         // 棋盘
static int Draw;                // 平局的次数



