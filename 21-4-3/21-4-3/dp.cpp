#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 10;
//int a[N][N], f[N][N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//			cin >> a[i][j];
//
//	// for (int i = 1; i <= n; i ++)
//	//     f[n - 1][i] = a[n - 1][i];
//
//	for (int i = n - 1; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			a[i][j] = max(a[i + 1][j], a[i + 1][j + 1]) + a[i][j];
//		}
//	}
//	cout << f[1][1] << endl;
//	return 0;
//}

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;
int dp[N], f[N];
int n;

int main()
{
	while (cin >> n, n)
	{
		for (int i = 1; i <= n; i++)
			scanf("%d", &f[i]);

		int s = 0, t = 0;

		for (int i = 1; i <= n; i++)
		{
			if (f[i] > dp[i - 1] + f[i])
			{
				dp[i] = f[i];

			}
		}
			dp[i] = max(f[i], );

		int maxval = -1;
		for (int i = 1; i <= n; i++)
			maxval = max(maxval, dp[i]);
		if (maxval <= 0)
			cout << 0 << ' ' << f[0] << ' ' << f[n] << endl;
		else
			cout << maxval << endl;
	}
	return 0;
}


//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &f[i]);
//		f[i] += f[i - 1];
//	}
//
//	int maxval = -1;
//	for (int i = 1; i <= n; i++)
//		for (int j = i; j <= n; j++)
//			maxval = max(maxval, f[j] - f[i]);
//	cout << maxval << endl;
//	return 0;
//}