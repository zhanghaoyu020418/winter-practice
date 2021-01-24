//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int i;
//	for (i = 10000; i < 100000; i++)
//	{
//		int num = i % 10 * 10 + i / 10 % 10;
//		int sum = 0;
//
//		while (i)
//		{
//			sum += i % 10;
//			i = i / 10;
//		}
//		if (i / 1000 == num && i == sum)
//			cout << i << endl;
//	}
//
//	for (i = 100000; i < 1000000; i++)
//	{
//		int num = i % 10 * 100 + i / 10 % 10 * 10 + i / 100 % 10;
//		int sum = 0;
//
//		while (i)
//		{
//			sum += i % 10;
//			i = i / 10;
//		}
//		if (num == i / 1000 && i == sum)
//			cout << i << endl;
//	}
//
//	return 0;
//}