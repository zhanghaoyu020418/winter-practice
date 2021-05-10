#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

// ��ӡ����
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}


// ��������
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++) // ��tmp���뵽ǰi������(ǰi�����Ѿ����������)
	{
		int end = i;
		int tmp = a[i + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}

// ϣ������
void ShellSort(int* a, int n)
{	
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;

		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}

// ѡ������
void SelectSort(int* a, int n)
{

	int l = 0, r = n - 1;
	while (l < r)
	{
		int minIndex = l;
		int maxIndex = r;
		for (int i = l; i <= r; i++)
		{
			if (a[minIndex] > a[i])
				minIndex = i;
			if (a[maxIndex] < a[i])
				maxIndex = i;
		}
		swap(a[l], a[minIndex]);
		if (l == maxIndex)
			maxIndex = minIndex;
		swap(a[r], a[maxIndex]);
		l++;
		r--;
	}
}