#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

// 打印函数
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}


// 选择排序
void SelectSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++) // 将tmp插入到前i个数中(前i个数已经是有序的了)
	{
		int end = i;
		int tmp = a[i + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
				a[end + 1] = a[end];
			else
				break;
		}
		a[end + 1] = tmp;
	}
}
