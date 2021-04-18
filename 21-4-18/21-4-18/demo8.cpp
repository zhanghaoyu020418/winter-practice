//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int N = 20000;
//int dp[N][N];
//
//int main()
//{
//	int res = 1;
//	dp[1][1] = 1;
//	int n;
//	cin >> n;
//	for (int i = 2; ; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			res++;
//			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
//			if (dp[i][j] == n)
//			{
//				cout << res << endl;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}