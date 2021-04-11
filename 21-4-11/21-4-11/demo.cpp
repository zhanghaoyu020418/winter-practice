#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

int month[2][13] = { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					 {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

bool isleapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}

int main()
{
	// 这个算法计算从某个日期开始后的n天后是xx年xx月xx日，不算当天
	int y = 1777, m = 4, d = 30;
	int n = 8113;
	while (n)
	{
		d++;
		n--;
		if (d == month[isleapyear(y)][m] + 1)
		{
			d = 1;
			m++;
		}
		if (m == 13)
		{
			m = 1;
			y++;
		}
	}
	printf("%d-%02d-%02d\n", y, m, d);
	return 0;
}

int calweek(int y, int m, int d) {
	if (m == 1 || m == 2) {
		m += 12;
		y--;
	}
	return (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1;
}