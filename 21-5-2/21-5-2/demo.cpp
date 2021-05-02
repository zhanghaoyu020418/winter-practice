#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 51;

int w[N][N];
int dp[N * 2][N][N];
int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> w[i][j];

	for (int k = 2; k <= n + m; k++)
		for (int i1 = max(1, k - m); i1 <= min(k - 1, n); i1++)
			for (int i2 = max(1, k - m); i2 <= min(k - 1, n); i2++)
			{
				int j1 = k - i1, j2 = k - i2;
				int t = w[i1][j1];
				if (i1 != i2)
					t += w[i2][j2];
				int &x = dp[k][i1][i2];
				x = max(x, t + dp[k - 1][i1 - 1][i2]);
				x = max(x, t + dp[k - 1][i1][i2 - 1]);
				x = max(x, t + dp[k - 1][i1][i2]);
				x = max(x, t + dp[k - 1][i1 - 1][i2 - 1]);
			}
	cout << dp[n + m][n][n] << endl;
	return 0;
}