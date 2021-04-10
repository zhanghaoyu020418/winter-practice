#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int a[10][10];

int main()
{
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j] = k ++;
		}
		cout << a[i] << ' ';
	}
	return 0;
}