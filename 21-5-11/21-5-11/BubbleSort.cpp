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
//		bool exchange = false;// �ж�ǰ��ε����Ƿ��Ѿ�����
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//				exchange = true;
//			}
//		}
//		if (!exchange)// ���û�н�����˵���Ѿ������ˣ����ԾͲ��ú���ıȽ���
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
//// ����ָ�뷨
//int PartSort1(int* a, int begin, int end)
//{
//	int left = begin, right = end;
//	int keyi = left;// ����Ҫ������Ҫ�����鿪ͷ�ĵ㽻��	
//
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[keyi]) // ���������ұ�keyֵ�����
//			right--;
//		while (left < right && a[left] <= a[keyi])  // ���������ұ�keyֵС����
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
//// ǰ��ָ�뷨
//int PartSort3_(int* a, int left, int right)
//{
//	// ����ȡ��
//
//	int keyi = left;
//	int prev = left, cur = left + 1; // prev,curһǰһ��
//
//	while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
//	{
//		while (cur <= right && a[cur] >= a[keyi])    // cur��С
//			cur++;
//		if (cur > right)
//			break;
//		swap(a[cur++], a[++prev]);     // ����cur��prev
//	}
//	swap(a[prev], a[keyi]);
//
//	return prev;
//}
//
//// ǰ��ָ�뷨
//int PartSort3(int* a, int left, int right)
//{
//	// ����ȡ��
//
//	int keyi = left;
//	int prev = left, cur = left + 1; // prev,curһǰһ��
//
//	while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
//	{
//		while (a[cur] < a[keyi] && ++prev != cur) // ��cur�ұ��ұ�keyi��Ӧ��С��ֵ��Ȼ�󽻻�
//		{
//			swap(a[cur], a[prev]);
//		}
//		cur++; // ���û���ҵ���curС��ֵ������cur������
//	}
//	swap(a[prev], a[keyi]);// ����keyi�ϵ�ֵ�ͽ�����ϵ�ֵ
//
//	return prev;
//}
//
//// �ڶ���
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
//// ����
//void QuickSort(int* a, int begin, int end)
//{
//	// �ȵ�������ѡһ��������key�������е����ֳ�������߶���keyС���ұ߶���key��
//	// ����ÿ�ζ�����ȷ��һ��ֵ
//
//
//	if (begin >= end) // �ݹ�Ҫ���˳�����������begin>=end��ʱ��ͷ���
//		return;
//
//
//	int left = begin, right = end;
//	int keyi = left;// ����Ҫ������Ҫ�����鿪ͷ�ĵ㽻��	
//
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[keyi]) // ���������ұ�keyֵ�����
//			right--;
//		while (left < right && a[left] <= a[keyi])  // ���������ұ�keyֵС����
//			left++;
//		swap(a[left], a[right]);
//	}
//
//	int meeti = left;
//	swap(a[meeti], a[keyi]);
//
//	// ����
//	// ����������� + �Ұ���������
//	QuickSort(a, begin, meeti - 1);
//	QuickSort(a, meeti + 1, end);
//
//}
//
//
//// �ǵݹ����
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
//// �鲢����
//void _MergeSort(int* a, int begin, int end, int* tmp)
//{
//	// ���������ֻ��һ������û��������ֱ�ӷ���
//	if (begin >= end)
//		return;
//
//	// ����ߺ��ұ߶�����
//	int mid = (begin + end) >> 1;
//	_MergeSort(a, begin, mid, tmp);
//	_MergeSort(a, mid + 1, end, tmp);
//
//	// �鲢������������
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
//	// �������е����ֿ�����ԭ������
//	for (int i = begin; i <= end; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//
//
//// �鲢����
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