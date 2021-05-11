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
		bool exchange = false;// 判断前半段的数是否已经有序
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				exchange = true;
			}
		}
		if (!exchange)// 如果没有交换，说明已经有序了，所以就不用后面的比较了
			break;
	}
}

void QuickSort(int* a, int begin, int end)
{
	// 先单趟排序，选一个数当做key，将所有的数分成两组左边都比key小，右边都比key大
	// 这样每次都可以确定一个值


	if (begin >= end) // 递归要有退出的条件，当begin>=end的时候就返回
		return;


	int left = begin, right = end;
	int keyi = left;// 后面要相遇点要和数组开头的点交换	

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi]) // 从右往左找比key值大的数
			right--;
		while (left < right && a[left] <= a[keyi])  // 从左往右找比key值小的数
			left++;
		swap(a[left], a[right]);
	}

	int meeti = left;
	swap(a[meeti], a[keyi]);

	// 分治
	// 左半数组排序 + 右半数组排序
	QuickSort(a, begin, meeti - 1);
	QuickSort(a, meeti + 1, end);

}

// 前后指针法
int PartSort3(int* a, int left, int right)
{
	// 三数取中

	int keyi = left;
	int prev = left, cur = left + 1; // prev,cur一前一后

	//while (cur <= right)             // 当cur没有走到头的时候继续
	//{
	//	while (a[cur] < a[keyi] && ++prev != cur)
	//	{
	//		swap(a[cur], a[prev]);
	//	}
	//	cur++;
	//}
	//swap(a[prev], a[keyi]);

	while (cur <= right)             // 当cur没有走到头的时候继续
	{								 
		while (cur <= right && a[cur] >= a[keyi])    // cur找小
			cur++;					
		if (cur > right)
			break;
		swap(a[cur], a[++prev]);     // 交换cur和prev
	}
	swap(a[prev], a[keyi]);

	return prev;
}

// 挖洞法
int PartSort2(int* a, int begin, int end)
{
	return 0;
}

// 左右指针法
int PartSort1(int* a, int begin, int end)
{
	int left = begin, right = end;
	int keyi = left;// 后面要相遇点要和数组开头的点交换	

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi]) // 从右往左找比key值大的数
			right--;
		while (left < right && a[left] <= a[keyi])  // 从左往右找比key值小的数
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