#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void _MergeSort(int* a, int left, int right, int* tmp) 
{
	if (left >= right)
		return;

	int mid = (left + right) >> 1;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;// 每次从归并的区间的left开始
	while (begin1 <= end1 && begin2 <= end2) 
	{
		if (a[begin1] < a[begin2]) 
			tmp[index++] = a[begin1++];
		else 
			tmp[index++] = a[begin2++];
	}

	while (begin1 <= end1)
		tmp[index++] = a[begin1++];

	while (begin2 <= end2)
		tmp[index++] = a[begin2++];
	
	for (int i = left; i <= right; i++)
		a[i] = tmp[i];
}

void MergeSort_NonR(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
		exit(-1);

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;
			if (begin2 >= n)
				break;
			if (end2 >= n)
				end2 = n - 1;
			int l = begin1, r = end2;

			int index = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] < arr[begin2])
					tmp[index++] = arr[begin1++];
				else
					tmp[index++] = arr[begin2++];
			}
			while (begin1 <= end1)
				tmp[index++] = arr[begin1++];
			while (begin2 <= end2)
				tmp[index++] = arr[begin2++];

			for (int i = l; i <= r; i++)
				arr[i] = tmp[i];
		}
		gap *= 2;
	}
}

void _MergeSortNonR(int* a, int left, int right, int* tmp)
{
	int gap = 1;// 归并的区间长度
	int n = right - left + 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)// 相当于一次递归
		{
			// 分为[i, i + gap - 1],[i + gap, i + 2 * gap - 1] 
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (begin2 >= n)// 如果第二个区间的开头超过n或者第一个区间的末尾没到n，都可以不用归并了，直接退出
				break;
			if (end2 >= n)// 如果第二个区间的只有一部分在n中，那就将第二个区间的末尾设置成n-1
				end2 = n - 1;

			int l = begin1, r = end2;

			// 完成一次归并
			int index = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
					tmp[index++] = a[begin1++];
				else
					tmp[index++] = a[begin2++];
			}
			while (begin1 <= end1)
				tmp[index++] = a[begin1++];
			while (begin2 <= end2)
				tmp[index++] = a[begin2++];

			for (int j = l; j <= r; j++)
				a[j] = tmp[j];

		}
		gap *= 2;
	}
}

void MergeSort(int* a, int n) {
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL) {
		cout << "malloc failed" << endl;
		exit(-1);
	}
	_MergeSortNonR(a, 0, n - 1, tmp);
	free(tmp);
}

void SortSimulationMergeSort(vector<int>& arr, int n)
{
	int gap = 1;
	while (gap < n * 2)
	{
		for (int i = 0; i < n / gap; i++)
			sort(arr.begin() + i * gap, arr.begin() + (i + 1) * gap);
		sort(arr.begin() + n / gap * gap, arr.begin() + n);
		gap *= 2;
	}
}

void TestMergeSort2()
{
	int a[] = { 9, 6, 3, 8, 1, 5, 2, 4, 7, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	vector<int> arr;
	for (int i = 0; i < sz; i++)
		arr.push_back(a[i]);
	
	SortSimulationMergeSort(arr, sz);
	for (int i = 0; i < sz; i++)
		cout << arr[i] << ' ';
}

void TestMergeSort()
{
	int a[] = { 9, 6, 3, 8, 1, 5, 2, 4, 7, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	//SortSimulationMergeSort(a, sz);
	for (int i = 0; i < sz; i++)
		cout << a[i] << ' ';
}

void CountSort(int* a, int n)
{


	// 找到最小值
	int minVal = a[0], maxVal = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < minVal)
			minVal = a[i];
		if (a[i] > maxVal)
			maxVal = a[i];
	}

	int range = maxVal - minVal;// 求出数组中数的范围，并开辟range大小的空间
	int* Count = (int*)malloc(sizeof(int) * range);
	if (Count == NULL)
	{
		cout << "malloc faiiled" << endl;
		exit(-1);
	}

	for (int i = 0; i < n; i++)
	{
		Count[a[i] - minVal] ++;// 统计数组中的数的个数
	}

	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (Count[i] --)
		{
			a[index++] = i + minVal;
		}
	}

	free(Count);
}

void TestCountSort()
{
	int a[] = { 9, 6, 3, 8, 1, 5, 2, 4, 7, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	CountSort(a, sz);
	for (int i = 0; i < sz; i++)
		cout << a[i] << ' ';
}

int main() 
{
	TestMergeSort2();
	return 0;
}