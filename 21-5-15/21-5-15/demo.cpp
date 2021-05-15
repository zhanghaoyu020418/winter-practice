#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010;

int prime[N];
bool st[N];

void getPrimes()
{
	int index = 1;
	for (int i = 2; i <= N; i++)
	{
		if (!st[i])
		{
			prime[index++] = i;
			for (int j = i + i; j <= N; j += i)
				st[j] = true;
		}
	}
}

int main()
{
	int l, r;
	cin >> l >> r;
	getPrimes();// 获取素数表

	int n = r - l;
	for (int i = 0; i <= n; i++)
	{
		if (i % 10)
			cout << ' ';
		else if (i && i % 10 == 0)
			cout << endl;
		cout << prime[l];
		l++;
		if (l == r + 1)
			break;
	}
	cout << endl;
	return 0;
}