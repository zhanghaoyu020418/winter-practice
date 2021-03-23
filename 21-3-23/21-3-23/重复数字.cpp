#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int arr[] = { 1, 2, 3, 4, 5, 1, 2 ,3, 4, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
	//int tmp = num & -num;
	int tmp = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((num >> i) & 1)
		{
			tmp = (num >> i) & 1;
		}
	}

	
	int num1 = 0, num2 = 0;
	for (int i = 0; i < sz; i++)
	{
		if (tmp & arr[i])
			num1 ^= arr[i];
		//else
		//	num2 ^= arr[i];
	}


	num2 = num ^ num1;
	cout << num1 << ' ' << num2 << endl;

	return 0;
}