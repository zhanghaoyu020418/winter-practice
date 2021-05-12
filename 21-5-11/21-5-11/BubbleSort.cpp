//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <time.h>
//#include <stack>
//#include <stdlib.h>
//
//using namespace std;
//
//void BubbleSort(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		bool exchange = false;// 判断前半段的数是否已经有序
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//				exchange = true;
//			}
//		}
//		if (!exchange)// 如果没有交换，说明已经有序了，所以就不用后面的比较了
//			break;
//	}
//}
//
//
//
//
//
//
//
//
//
//// 左右指针法
//int PartSort1(int* a, int begin, int end)
//{
//	int left = begin, right = end;
//	int keyi = left;// 后面要相遇点要和数组开头的点交换	
//
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[keyi]) // 从右往左找比key值大的数
//			right--;
//		while (left < right && a[left] <= a[keyi])  // 从左往右找比key值小的数
//			left++;
//		swap(a[left], a[right]);
//	}
//
//	int meeti = left;
//	swap(a[meeti], a[keyi]);
//	return meeti;
//}
//
//int GetMid(int* a, int left, int right)
//{
//	int mid = (left + right) >> 1;
//
//	int MaxVal = max(max(a[left], a[right]), a[mid]);
//	int MinVal = min(min(a[left], a[right]), a[mid]);
//
//	int MidVal = a[left] + a[right] + a[mid] - MaxVal - MinVal;
//
//	return a[left] == MidVal ? left : a[right] == MidVal ? right : mid;
//}
//
//
//// 前后指针法
//int PartSort3_(int* a, int left, int right)
//{
//	// 三数取中
//
//	int keyi = left;
//	int prev = left, cur = left + 1; // prev,cur一前一后
//
//	while (cur <= right)             // 当cur没有走到头的时候继续
//	{
//		while (cur <= right && a[cur] >= a[keyi])    // cur找小
//			cur++;
//		if (cur > right)
//			break;
//		swap(a[cur++], a[++prev]);     // 交换cur和prev
//	}
//	swap(a[prev], a[keyi]);
//
//	return prev;
//}
//
//// 前后指针法
//int PartSort3(int* a, int left, int right)
//{
//	// 三数取中
//
//	int keyi = left;
//	int prev = left, cur = left + 1; // prev,cur一前一后
//
//	while (cur <= right)             // 当cur没有走到头的时候继续
//	{
//		while (a[cur] < a[keyi] && ++prev != cur) // 在cur右边找比keyi对应的小的值，然后交换
//		{
//			swap(a[cur], a[prev]);
//		}
//		cur++; // 如果没有找到比cur小的值，就让cur往后走
//	}
//	swap(a[prev], a[keyi]);// 交换keyi上的值和交汇点上的值
//
//	return prev;
//}
//
//// 挖洞法
//int PartSort2(int* a, int left, int right)
//{
//	int key = a[left];
//	while (left < right)
//	{
//		while (left < right && a[right] >= key)
//			right--;
//		a[left] = a[right];
//
//		while (left < right && a[left] <= key)
//			left++;
//		a[right] = a[left];
//
//	}
//	a[left] = key;
//	return left;
//}
//
//
//// 快排
//void QuickSort(int* a, int begin, int end)
//{
//	// 先单趟排序，选一个数当做key，将所有的数分成两组左边都比key小，右边都比key大
//	// 这样每次都可以确定一个值
//
//
//	if (begin >= end) // 递归要有退出的条件，当begin>=end的时候就返回
//		return;
//
//
//	int left = begin, right = end;
//	int keyi = left;// 后面要相遇点要和数组开头的点交换	
//
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[keyi]) // 从右往左找比key值大的数
//			right--;
//		while (left < right && a[left] <= a[keyi])  // 从左往右找比key值小的数
//			left++;
//		swap(a[left], a[right]);
//	}
//
//	int meeti = left;
//	swap(a[meeti], a[keyi]);
//
//	// 分治
//	// 左半数组排序 + 右半数组排序
//	QuickSort(a, begin, meeti - 1);
//	QuickSort(a, meeti + 1, end);
//
//}
//
//
//// 非递归快排
//void QuickSortNonR(int* a, int begin, int end)
//{
//	stack<int> sk;
//	sk.push(begin);
//	sk.push(end);
//	while (!sk.empty())
//	{
//		int right = sk.top();
//		sk.pop();
//		int left = sk.top();
//		sk.pop();
//		int keyi = PartSort2(a, left, right);
//		if (keyi - 1 > left)
//		{
//			sk.push(left);
//			sk.push(keyi - 1);
//		}
//		if (keyi + 1 < right)
//		{
//			sk.push(keyi + 1);
//			sk.push(right);
//		}
//	}
//}
//
//
//
//
//
//
//
//
//
//
//// 归并排序
//void _MergeSort(int* a, int begin, int end, int* tmp)
//{
//	// 如果区间中只有一个或者没有数，就直接返回
//	if (begin >= end)
//		return;
//
//	// 将左边和右边都排序
//	int mid = (begin + end) >> 1;
//	_MergeSort(a, begin, mid, tmp);
//	_MergeSort(a, mid + 1, end, tmp);
//
//	// 归并两个有序数组
//	int begin1 = begin, end1 = mid;
//	int begin2 = mid + 1, end2 = end;
//	int index = begin1;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//			tmp[index++] = a[begin1++];
//		else
//			tmp[index++] = a[begin2++];
//	}
//
//	while (begin1 <= end1)
//		tmp[index++] = a[begin1++];
//	while (begin2 <= end2)
//		tmp[index++] = a[begin2++];
//	
//	// 将数组中的数字拷贝到原数组中
//	for (int i = begin; i <= end; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//
//
//// 归并排序
//void MergeSort(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		cout << "malloc failed" << endl;
//		exit(-1);
//	}
//	_MergeSort(a, 0, n - 1, tmp);
//	free(tmp);
//}
//
//int main()
//{
//	int a[10] = { 5, 4, 2, 1, 3, 7, 8, 0, 6, 9 };
//
//	// BubbleSort(a, 10);
//
//	// MergeSort(a, 10);
//
//	QuickSortNonR(a, 0, 9);
//
//	for (int i = 0; i < 10; i++)
//		cout << a[i] << ' ';
//	return 0;
//}