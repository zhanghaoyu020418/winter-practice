#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 310;

int dp[N][N];
int s[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
		s[i] += s[i - 1]; // ����ǰ׺��
	}

	// ����DPģ��,��ö�����䳤��,Ȼ��ö���������˵�,�Ҷ˵���Ը������䳤�Ⱥ���˵������
	for (int len = 2; len <= n; len++)
		for (int i = 1; i + len - 1 <= n; i++)
		{
			int j = i + len - 1;
			dp[i][j] = 1e9;
			for (int k = i; k <= j - 1; k++) // ��kö������[i,j]���ٻ������һ���ϲ��Ľ��
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + s[j] - s[i - 1]);
		}

	cout << dp[1][n] << endl;
	return 0;
}