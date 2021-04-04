//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//int dp[N], f[N];
//int n;
//
//int main() 
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &f[i]);
//
//	int res = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			if (f[i] > f[j])
//				dp[i] = max(dp[i], dp[j] + 1);
//		}
//		res = max(res, dp[i]);
//	}
//	
//	cout << res << endl;
//	return 0;
//}