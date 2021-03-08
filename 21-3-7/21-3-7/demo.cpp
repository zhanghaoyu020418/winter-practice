#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits.h>

using namespace std;

const int N = 100010;
bool st[N];
int prime[N];

int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (!st[i])
		{
			prime[cnt++] = i;
			for (int j = i + i; j <= n; j += i)
				st[j] = true;
		}
	}
	for (int i = 0; i < cnt; i++)
		cout << prime[i] << ' ';
	return 0;
}