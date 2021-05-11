#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <time.h>
#include <stack>

using namespace std;

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		bool exchange = false;// �ж�ǰ��ε����Ƿ��Ѿ�����
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				exchange = true;
			}
		}
		if (!exchange)// ���û�н�����˵���Ѿ������ˣ����ԾͲ��ú���ıȽ���
			break;
	}
}

void QuickSort(int* a, int begin, int end)
{
	// �ȵ�������ѡһ��������key�������е����ֳ�������߶���keyС���ұ߶���key��
	// ����ÿ�ζ�����ȷ��һ��ֵ


	if (begin >= end) // �ݹ�Ҫ���˳�����������begin>=end��ʱ��ͷ���
		return;


	int left = begin, right = end;
	int keyi = left;// ����Ҫ������Ҫ�����鿪ͷ�ĵ㽻��	

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi]) // ���������ұ�keyֵ�����
			right--;
		while (left < right && a[left] <= a[keyi])  // ���������ұ�keyֵС����
			left++;
		swap(a[left], a[right]);
	}

	int meeti = left;
	swap(a[meeti], a[keyi]);

	// ����
	// ����������� + �Ұ���������
	QuickSort(a, begin, meeti - 1);
	QuickSort(a, meeti + 1, end);

}

// ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	// ����ȡ��

	int keyi = left;
	int prev = left, cur = left + 1; // prev,curһǰһ��

	//while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
	//{
	//	while (a[cur] < a[keyi] && ++prev != cur)
	//	{
	//		swap(a[cur], a[prev]);
	//	}
	//	cur++;
	//}
	//swap(a[prev], a[keyi]);

	while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
	{								 
		while (cur <= right && a[cur] >= a[keyi])    // cur��С
			cur++;					
		if (cur > right)
			break;
		swap(a[cur], a[++prev]);     // ����cur��prev
	}
	swap(a[prev], a[keyi]);

	return prev;
}

// �ڶ���
int PartSort2(int* a, int begin, int end)
{
	return 0;
}

// ����ָ�뷨
int PartSort1(int* a, int begin, int end)
{
	int left = begin, right = end;
	int keyi = left;// ����Ҫ������Ҫ�����鿪ͷ�ĵ㽻��	

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi]) // ���������ұ�keyֵ�����
			right--;
		while (left < right && a[left] <= a[keyi])  // ���������ұ�keyֵС����
			left++;
		swap(a[left], a[right]);
	}

	int meeti = left;
	swap(a[meeti], a[keyi]);
	return meeti;
}

void QuickSortNonR(int* a, int begin, int end)
{
	stack<int> sk;
	sk.push(begin);
	sk.push(end);
	while (!sk.empty())
	{
		int right = sk.top();
		sk.pop();
		int left = sk.top();
		sk.pop();
		int keyi = PartSort3(a, left, right);
		if (keyi - 1 > left)
		{
			sk.push(left);
			sk.push(keyi - 1);
		}
		if (keyi + 1 < right)
		{
			sk.push(keyi + 1);
			sk.push(right);
		}
	}
}

int main()
{
	int a[20] = { 5, 4, 2, 1, 3, 7, 8, 0, 6, 9 };

	// BubbleSort(a, 10);
	QuickSortNonR(a, 0, 9);

	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	return 0;
}