#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

const int N = 100010;

int w[N];
int dp[1000];
int n;

const int INF = 100000;

void solve1()
{
	// 已知数组w[i]

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (w[i] > w[j])
				dp[i] = max(dp[i], dp[j] + 1);
		res = max(res, dp[i]);
	}
	cout << res << endl;
}

void solve2()
{
	// 已知数组w[i],dp[i]

	fill(dp, dp + 1000, INF);
	for (int i = 0; i < n; i++)
	{
		*lower_bound(dp, dp + n, w[i]) = w[i];
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
}

void solve3()
{
	// 已知数组w[i]

	vector<int> sk;
	sk.push_back(w[0]);
	for (int i = 1; i < n; i++)
	{
		if (w[i] > sk.back())
			sk.push_back(w[i]);
		else
			*lower_bound(sk.begin(), sk.end(), w[i]) = w[i];
	}
	cout << sk.size() << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> w[i];

	solve1();

	int begin1 = clock();
	//test1(n);
	cout << clock() - begin1 << endl;

	int beign2 = clock();
	//test2(n);
	cout << clock() - beign2 << endl;

	return 0;
}

