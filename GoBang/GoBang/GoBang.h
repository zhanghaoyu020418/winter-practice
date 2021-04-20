#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

#define ROW 5
#define COL 5

class CGoBang
{
public:
	CGoBang(char chsort);        // ��������������
	void PlayTurn();             // ����
	bool Judge();                // �ж����ӵĺϷ���
	static void Draw();          // ƽ�ֵ����
	static void PrintInfo();     // ��ӡ��ǰ�Ķ�ս���
	static void PrintBoard();    // ��ӡ��ǰ�����̵�״��
	static bool GetFull();       // �ж������Ƿ�����
	static void InitBoard();     // ��ʼ������
private:
	char chsort;                 // ���ӵ����
	int nWin;                    // ��ѡ��Ӯ�Ĵ���
	int Lose;                    // ��ѡ����Ĵ���
	static int nDraw;            // ƽ�ֵĴ���
	static char Board[ROW][COL]; // ����
};
