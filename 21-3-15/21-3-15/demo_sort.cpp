//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int a[] = { 1, 5, 2, 8, 4, 0, 9, 4, 7 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	//for (int i = 1; i < sz; i++)
//	//	for (int j = i - 1; j >= 0; j--)
//	//		if (a[j] > a[j + 1])
//	//			swap(a[j], a[j + 1]);
//
//	//int jump = sz >> 1;
//	//int j = 0;
//	//for (int i = 1; i < sz; i++)
//	//{
//	//	int tmp = a[i];
//	//	j = i - 1;
//	//	while (j >= 0 && a[j] > tmp)
//	//	{
//	//		a[j + 1] = a[j];
//	//		j--;
//	//	}
//	//	a[j + 1] = tmp;
//	//}
//
//	//int jump = sz >> 1;
//	//while (jump)
//	//{
//	//	for (int i = jump; i < sz; i++)
//	//	{
//	//		int tmp = a[i];
//
//	//		int j = i - jump;
//	//		while (j >= 0 && a[j] > tmp)
//	//		{
//	//			a[j + jump] = a[j];
//	//			j -= jump;
//	//		}
//
//	//		a[j + jump] = tmp;
//	//	}
//	//	jump >>= 1;
//	//}
//	//int jump = sz >> 1;
//	//while (jump)
//	//{
//	//	for (int i = jump; i < sz; i++)
//	//	{
//	//		int tmp = a[i];
//	//		int j = i - jump;
//	//		while (j >= 0 && a[j] > tmp)
//	//		{
//	//			a[j + jump] = a[j];
//	//			j -= jump;
//	//		}
//	//		a[j + jump] = tmp;
//	//	}
//	//	jump >>= 1;
//	//}
//	int jump = sz >> 1;
//	while (jump)
//	{
//		for (int i = jump; i < sz; i++)
//		{
//			int tmp = a[i];
//			int j = i - jump;
//			while (j >= 0 && a[j] > tmp)
//			{
//				a[j + jump] = a[j];
//				j -= jump;
//			}
//			a[j + jump] = tmp;
//		}
//		jump >>= 1;
//	}
//
//	int low = 0;
//	int hight = sz - 1;
//
//	for (int i = 0; )
//	for (int i = 0; i < sz; i++)
//		cout << a[i] << ' ';
//	return 0;
//}