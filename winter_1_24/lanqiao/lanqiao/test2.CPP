#define _CRT_SECURE_NO_WARNINGS 1

//
//int main()
//{
//	int i;
//	for (i = 100; i < 1000; i++)
//	{
//		int a = i % 10;
//		int b = i / 10 % 10;
//		int c = i / 100;
//
//		if (a * a * a + b * b * b + c * c * c == i)
//			cout << i << endl;
//	}
//	return 0;
//}

#include <iostream>

using namespace std;
//
//
//int main()
//{
//	int i;
//	for (i = 1000; i < 10000; i++)
//	{
//		int num = i % 10 * 10 + i / 10 % 10;
//		if (num == i / 100)
//			cout << i << endl;
//	}
//	return 0;
//}


//int main()
//{
//	int n;
//	cin >> n;
//	int i, j;
//	int flag = 1;
//	int arr[200];
//
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//
//	return 0;
//}