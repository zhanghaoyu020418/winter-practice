//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//// 在象棋中有一个马，它只能走日，现在想让这个马从(0, 0)出发并且要求走K步(这K不一定要走完)，
//// 问：到(x, y)某个位置的方法数为多少
//
//int way1(int x, int y, int k)
//{
//	if (k == 0)
//		return x == 0 && y == 0 ? 1 : 0;
//	if (x < 0 || x > 9 || y < 0 || y > 8)
//		return 0;
//	return
//		way1(x - 2, y - 1, k - 1) +
//		way1(x - 2, y + 1, k - 1) +
//		way1(x + 2, y - 1, k - 1) +
//		way1(x + 2, y + 1, k - 1) +
//		way1(x - 1, y - 2, k - 1) +
//		way1(x - 1, y + 2, k - 1) +
//		way1(x + 1, y - 2, k - 1) +
//		way1(x + 1, y + 2, k - 1);
//}
//
//int dp[10][10][100];
//
//int get(int x, int y, int k)
//{
//	if (x < 0 || x > 9 || y < 0 || y > 8)
//		return 0;
//	return dp[x][y][k];
//}
//
//int way2(int x, int y, int k)
//{
//	dp[0][0][0] = 1;
//	for (int l = 1; l <= k; l++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				dp[i][j][l] =
//					// 保证dp数组中存放的值和访问的值都要在可以访问的范围内
//					get(i - 2, j - 1, l - 1) +
//					get(i - 2, j + 1, l - 1) +
//					get(i + 2, j - 1, l - 1) +
//					get(i + 2, j + 1, l - 1) +
//					get(i - 1, j - 2, l - 1) +
//					get(i - 1, j + 2, l - 1) +
//					get(i + 1, j - 2, l - 1) +
//					get(i + 1, j + 2, l - 1);
//			}
//		}
//	}
//	return dp[x][y][k];
//}
//
//int main()
//{
//	cout << way1(2, 3, 3) << endl;
//	cout << way2(2, 3, 3) << endl;
//	return 0;
//}