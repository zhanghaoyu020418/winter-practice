//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int num = 0;//0 ^ 任何数 = 任何数
//	for (int i = 0; i < sz; i++)
//		num ^= a[i];
//
//	//int tmp = num & (-num);//找到二进制位中最后一个1
//	//int num1 = 0, num2 = 0;
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	if (tmp & a[i])
//	//		num1 ^= a[i];
//	//	else
//	//		num2 ^= a[i];
//	//}
//	//cout << num1 << ' ' << num2 << endl;
//
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (a[i] >> i & 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	int num1 = 0, num2 = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (a[i] >> pos & 1)
//			num1 ^= a[i];
//	}
//	num2 = num ^ num1;
//	cout << num1 << ' ' << num2 << endl;
//	return 0;
//}