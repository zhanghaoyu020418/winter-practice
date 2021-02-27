//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e8 + 10;
//int n;
//bool st[N];
//int cnt;
//int prime[N];
//
//int main()
//{
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])//如果没有被筛掉，说明该数字是质数
//			prime[cnt++] = i;//将筛出的质数放到一个数组中
//		for (int j = 0; prime[j] <= n * i; j++)
//		{
//			st[prime[j] * i] = true;//每次都用最小质因数筛掉所有的数
//			if (i % prime[j] == 0)
//				break;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}