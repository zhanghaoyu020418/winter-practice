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
	COLOR_PRINT("AcWing\n", 0);//黑色 
	COLOR_PRINT("AcWing\n", 1);//蓝色 
	COLOR_PRINT("AcWing\n", 2);//绿色 
	COLOR_PRINT("AcWing\n", 3);//浅绿色 
	COLOR_PRINT("AcWing\n", 4);//红色 
	COLOR_PRINT("AcWing\n", 5);//紫色 
	COLOR_PRINT("AcWing\n", 6);//黄色 
	COLOR_PRINT("AcWing\n", 7);//白色 
	COLOR_PRINT("AcWing\n", 8);//灰色 
	COLOR_PRINT("AcWing\n", 9);//淡蓝色 
	COLOR_PRINT("AcWing\n", 10);//淡绿色 
	COLOR_PRINT("AcWing\n", 11);//淡浅绿色 
	COLOR_PRINT("AcWing\n", 12);//淡红色 
	COLOR_PRINT("AcWing\n", 13);//淡紫色 
	COLOR_PRINT("AcWing\n", 14);//淡黄色 
	COLOR_PRINT("AcWing\n", 15);//亮白色 
	return 0;
}
