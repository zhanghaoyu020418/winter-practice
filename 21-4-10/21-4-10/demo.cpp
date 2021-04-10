//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 100;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int a[N];
//		memset(a, 0, sizeof(a));
//		int num;
//		cin >> num;
//
//		int tmp = num;
//		// 1.枚举质因子
//		for (int i = 2; i <= tmp / i; i++)
//		{
//			while (num % i == 0)
//			{
//				num /= i;
//				a[i] ++;
//			}
//		}
//
//		// 2.至多有一个大于sqrt(num)的质因子
//		a[num] ++;
//
//		// 3.输出质因子
//		for (int i = 2; i <= tmp; i++)
//			if (a[i])
//				cout << i << ' ' << a[i] << endl;
//
//		cout << endl;
//	}
//	return 0;
//}