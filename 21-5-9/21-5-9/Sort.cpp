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

// ����ȡ��
int GetMid(int* a, int left, int right)
{
	int mid = (left + right) >> 1;

	int MaxVal = max(max(a[left], a[right]), a[mid]);
	int MinVal = min(min(a[left], a[right]), a[mid]);

	int MidVal = a[left] + a[right] + a[mid] - MaxVal - MinVal;

	return a[left] == MidVal ? left : a[right] == MidVal ? right : mid;
}


// ǰ��ָ�뷨
int PartSort3_(int* a, int left, int right)
{
	// ����ȡ��

	int keyi = left;
	int prev = left, cur = left + 1; // prev,curһǰһ��

	while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
	{
		while (cur <= right && a[cur] >= a[keyi])    // cur��С
			cur++;
		if (cur > right)
			break;
		swap(a[cur++], a[++prev]);     // ����cur��prev
	}
	swap(a[prev], a[keyi]);

	return prev;
}

// ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	// ����ȡ��

	int keyi = left;
	int prev = left, cur = left + 1; // prev,curһǰһ��

	while (cur <= right)             // ��curû���ߵ�ͷ��ʱ�����
	{
		while (a[cur] < a[keyi] && ++prev != cur) // ��cur�ұ��ұ�keyi��Ӧ��С��ֵ��Ȼ�󽻻�
		{
			swap(a[cur], a[prev]);
		}
		cur++; // ���û���ҵ���curС��ֵ������cur������
	}
	swap(a[prev], a[keyi]);// ����keyi�ϵ�ֵ�ͽ�����ϵ�ֵ

	return prev;
}

// �ڶ���
int PartSort2(int* a, int left, int right)
{
	int key = a[left];
	while (left < right)
	{
		while (left < right && a[right] >= key)
			right--;
		a[left] = a[right];

		while (left < right && a[left] <= key)
			left++;
		a[right] = a[left];

	}
	a[left] = key;
	return left;
}


// ����
void QuickSort(int* a, int begin, int end)
{
	// �ȵ�������ѡһ��������key�������е����ֳ�������߶���keyС���ұ߶���key��
	// ����ÿ�ζ�����ȷ��һ��ֵ


	if (begin >= end) // �ݹ�Ҫ���˳�����������begin>=end��ʱ��ͷ���
		return;

	int t = GetMid(a, begin, end);
	swap(a[t], a[begin]);

	int keyi = begin;// ����Ҫ������Ҫ�����鿪ͷ�ĵ㽻��
	int left = begin, right = end;
		
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

	if (begin - end > 10)
	{
		// ����
		// ����������� + �Ұ���������
		QuickSort(a, begin, meeti - 1);
		QuickSort(a, meeti + 1, end);
	}
	else
	{
		ShellSort(a + begin, end - begin + 1);
	}


}


// �ǵݹ����
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
		
		// ������[left, right]����һ������
		int lefti = left, righti = right;
		int keyi = left;
		while (lefti < righti)
		{
			while (lefti < righti && a[righti] >= a[keyi])
				righti--;
			while (lefti < righti && a[lefti] <= a[keyi])
				lefti++;
			swap(a[lefti], a[righti]);
		}
		swap(a[lefti], a[keyi]);

		// keyi�ǽ����
		keyi = lefti;
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










// �鲢����
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	// ���������ֻ��һ������û��������ֱ�ӷ���
	if (begin >= end)
		return;

	// ����ߺ��ұ߶�����
	int mid = (begin + end) >> 1;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	// �鲢������������
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
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

	// �������е����ֿ�����ԭ������
	for (int i = begin; i <= end; i++)
	{
		a[i] = tmp[i];
	}
}


// �鲢����
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		cout << "malloc failed" << endl;
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}