//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 10010;
//int dp[N][N];
//
//int way1(int N, int cur, int rest, int dest)
//{
//	if (rest == 0)
//		return cur == dest ? 1 : 0;
//	if (cur == 1)
//		way1(N, cur + 1, rest - 1, dest);
//	if (cur == N)
//		way1(N, cur - 1, rest - 1, dest);
//	return way1(N, cur + 1, rest - 1, dest) + way1(N, cur - 1, rest - 1, dest);
//}
//
//int way2(int N, int cur, int rest, int dest)
//{
//	if (rest == 0)
//	{
//		dp[cur][rest] = cur == dest ? 1 : 0;
//		return dp[cur][rest];
//	}
//	if (cur == 1)
//	{
//		dp[cur][rest] = way2(N, cur + 1, rest - 1, dest);
//		return dp[cur][rest];
//	}
//		
//	if (cur == N)
//	{
//		dp[cur][rest] = way2(N, cur - 1, rest - 1, dest);
//		return dp[cur][rest];
//	}
//		
//	dp[cur][rest] = way1(N, cur + 1, rest - 1, dest) + way1(N, cur - 1, rest - 1, dest);
//	return dp[cur][rest];
//}
//
//void res(int N, int cur, int rest, int dest)
//{
//	dp[0][dest] = 1;
//	for (int i = 1; i <= rest; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			dp[i][j] = dp[i - 1][j + 1] + dp[i - 1][j - 1];
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << dp[rest][cur] << endl;
//}
//
//int main()
//{
//	int N = 7;
//	int P = 3;
//	res(N, 2, 5, P);
//	cout << way2(N, 2, 5, P) << endl;
//
//	cout << way1(N, 2, 5, P) << endl;
//	
//	return 0;
//}