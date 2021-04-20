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
	CGoBang(char chsort);        // ��������������
	void PlayTurn();             // ����
	bool Judge();                // �ж�ʤ��
	void PrintInfo();            // ��ӡ��ǰ�Ķ�ս���
	static void PrintBoard();    // ��ӡ��ǰ�����̵�״��
	bool GetFull();              // �ж������Ƿ�����
	static void InitBoard();     // ��ʼ������
	void isWin();
	void isLose();
	void isDraw();
private:
	char chsort;                 // ���ӵ����
	int Win;                    // ��ѡ��Ӯ�Ĵ���
	int Lose;                    // ��ѡ����Ĵ���
};

static char Board[5][5];         // ����
static int Draw;                // ƽ�ֵĴ���



