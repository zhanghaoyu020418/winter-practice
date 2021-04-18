//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//
//int lcm(int a, int b)
//{
//	return a * b / gcd(a, b);
//}
//
//int res = 0;
//int num[100010] = { 0 };
//
//int main()
//{
//	//for (int i = 1; i <= 2021; i++)
//	//	for (int j = i; j <= i + 22; j++)
//	//		if (abs(j - i) <= 21 && j != i)
//	//			res = min(res, lcm(i, j));
//	for (int i = 1; i <= 2021; i += 21)
//	{
//		for (int j = i; j <= i + 21; j++)
//		{
//			num[i] = min(num[i], lcm(j, i));
//		}
//		res += num[i];
//	}
//	cout << res << endl;
//	return 0;
//}