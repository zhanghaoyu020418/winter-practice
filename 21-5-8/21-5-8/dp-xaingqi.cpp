//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//// ����������һ������ֻ�����գ���������������(0, 0)��������Ҫ����K��(��K��һ��Ҫ����)��
//// �ʣ���(x, y)ĳ��λ�õķ�����Ϊ����
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
//					// ��֤dp�����д�ŵ�ֵ�ͷ��ʵ�ֵ��Ҫ�ڿ��Է��ʵķ�Χ��
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