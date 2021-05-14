//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int N = 101;
//
//vector<int> a, b;
//
//bool InsertSort(vector<int> arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)// 假设前i个数是有序的
//	{
//		int end = i + 1;// 结尾的数字
//		int tmp = arr[end];
//		while (end >= 0)// 找到第一个比结尾数小的数
//		{
//			if (arr[end] < arr[i])
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//				break;
//		}
//		arr[end + 1] = tmp;
//
//		// 确认b数组中的数是不是a数组排序过后的数组
//		bool flag = true;
//		for (int i = 0; i < n; i++)
//			if (arr[i] != b[i])
//				flag = false;
//		if (flag)
//			return true;
//	}
//}
//
//bool MergeSort(vector<int> arr, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//		exit(-1);
//
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + gap * 2 - 1;
//			if (begin2 >= n)
//				break;
//			if (end2 >= n)
//				end2 = n - 1;
//			int l = begin1, r = end2;
//
//			int index = begin1;
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (arr[begin1] < a[begin2])
//					tmp[index++] = arr[begin1++];
//				else
//					tmp[index++] = arr[begin2++];
//			}
//			while (begin1 <= end1)
//				tmp[index++] = arr[begin1++];
//			while (begin2 <= end2)
//				tmp[index++] = arr[begin2++];
//
//			for (int i = l; i <= r; i++)
//				arr[i] = tmp[i];
//		}
//		gap *= 2;
//	}
//	free(tmp);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int t1[100], t2[100];
//	for (int i = 0; i < n; i++)
//		cin >> t1[i];
//	for (int i = 0; i < n; i++)
//		cin >> t2[i];
//	for (int i = 0; i < n; i++)
//	{
//		a.push_back(t1[i]);
//		b.push_back(t2[i]);
//	}
//	if (InsertSort(a, n))
//		cout << "Insertion Sort" << endl;
//	else
//		cout << "Merge Sort" << endl;
//	return 0;
//}