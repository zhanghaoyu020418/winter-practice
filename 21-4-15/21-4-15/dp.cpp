#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 12000, M = 2010;

int dp[M];
int v[N], w[N];


int main()
{
	int n, m;
	cin >> n >> m;
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		int tv, tw, s;
		cin >> tv >> tw >> s;
		for (int k = 1; k <= s; k *= 2)
		{
			idx++;
			v[idx] = tv * k;
			w[idx] = tw * k;
		}
		if (s > 0)
		{
			idx++;
			v[idx] = tv * s;
			w[idx] = tw * s;
		}
	}

	for (int i = 1; i <= n; i++)
		for (int j = m; j >= v[i]; j--)
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
	cout << dp[m] << endl;
	return 0;
}