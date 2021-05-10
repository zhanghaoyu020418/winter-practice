#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

// ��ӡ����
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}


// ѡ������
void SelectSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++) // ��tmp���뵽ǰi������(ǰi�����Ѿ����������)
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
