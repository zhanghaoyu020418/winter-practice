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
//		// 1.ö��������
//		for (int i = 2; i <= tmp / i; i++)
//		{
//			while (num % i == 0)
//			{
//				num /= i;
//				a[i] ++;
//			}
//		}
//
//		// 2.������һ������sqrt(num)��������
//		a[num] ++;
//
//		// 3.���������
//		for (int i = 2; i <= tmp; i++)
//			if (a[i])
//				cout << i << ' ' << a[i] << endl;
//
//		cout << endl;
//	}
//	return 0;
//}