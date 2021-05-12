#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// 非递归快排
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

		// 对区间[left, right]进行一次排序
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

		// keyi是交汇点
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

int main()
{
	int a[] = { 1,4,5,7,2,8,6,9,3,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSortNonR(a, 0, sz- 1);
	for (int i = 0; i < sz; i++)
		cout << a[i] << ' ';
	return 0;
}