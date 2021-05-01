#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>																  

using namespace std;

const int N = 10010;
int dp[N][N];

int fun1(int coin[], int index, int rest, int n)
{
	if (index == n)
		return rest == 0 ? 1 : 0;
	int res = 0;
	for (int cnt = 0; cnt * coin[index] <= rest; cnt++)
	{
		res += fun1(coin, index + 1, rest - cnt * coin[index], n);
	}
	return res;
}

int fun2(int coin[], int index, int rest, int n)
{
	if (dp[index][rest] != -1)
		return dp[index][rest];
	if (index == n)
	{
		dp[index][rest] = rest == 0 ? 1 : 0;;
		return dp[index][rest];
	}
	int res = 0;
	for (int cnt = 0; cnt * coin[index] <= rest; cnt++)
	{
		res += fun1(coin, index + 1, rest - cnt * coin[index], n);
	}
	dp[index][rest] = res;
	return res;
}

// 暴力解法
int CoinWay1(int coin[], int aim, int n)
{
	return fun1(coin, 0, aim, n);
}

// 记忆化搜索
int CoinWay2(int coin[], int aim, int n)
{
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= aim; j++)
			dp[i][j] = -1;
	return fun2(coin, 0, aim, n);
}

int CoinWay3(int coin[], int aim, int n)
{
	dp[n][0] = 1;
	int res = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j <= aim; j++)
		{
			for (int cnt = 0; cnt * coin[i] <= j; cnt++)// 枚举行为
			{
				dp[i][j] += dp[i + 1][j - cnt * coin[i]];
			}
		}
	}
	return dp[0][aim];
}


int CoinWay4(int coin[], int aim, int n)
{
	dp[n][0] = 1;
	int res = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j <= aim; j++)
		{
			dp[i][j] = dp[i + 1][j];
			if (j >= coin[i])
				dp[i][j] += dp[i][j - coin[i]];
		}
	}
	return dp[0][aim];
}

int main()
{
	int coin[] = { 10, 20, 50, 100 };
	int aim = 100;
	int n = sizeof(coin) / sizeof(coin[0]);
	cout << CoinWay4(coin, aim, n) << endl;
	return 0;
}