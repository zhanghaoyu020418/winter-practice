#define _CRT_SECURE_NO_WARNINGS 1
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 1e4;
void COLOR_PRINT(const char* s, ll color)//color 
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
signed main()
{
	COLOR_PRINT("AcWing\n", 0);//��ɫ 
	COLOR_PRINT("AcWing\n", 1);//��ɫ 
	COLOR_PRINT("AcWing\n", 2);//��ɫ 
	COLOR_PRINT("AcWing\n", 3);//ǳ��ɫ 
	COLOR_PRINT("AcWing\n", 4);//��ɫ 
	COLOR_PRINT("AcWing\n", 5);//��ɫ 
	COLOR_PRINT("AcWing\n", 6);//��ɫ 
	COLOR_PRINT("AcWing\n", 7);//��ɫ 
	COLOR_PRINT("AcWing\n", 8);//��ɫ 
	COLOR_PRINT("AcWing\n", 9);//����ɫ 
	COLOR_PRINT("AcWing\n", 10);//����ɫ 
	COLOR_PRINT("AcWing\n", 11);//��ǳ��ɫ 
	COLOR_PRINT("AcWing\n", 12);//����ɫ 
	COLOR_PRINT("AcWing\n", 13);//����ɫ 
	COLOR_PRINT("AcWing\n", 14);//����ɫ 
	COLOR_PRINT("AcWing\n", 15);//����ɫ 
	return 0;
}
