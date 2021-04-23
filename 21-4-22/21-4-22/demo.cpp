#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

#include <Windows.h>

using namespace std;

void AdjustDown(int* a, int n, int parent) // 向下调整法
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[parent] > a[child])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}

	}

}

int main()
{

	int a[] = { 1, 4, 2, 7, 3, 9, 5 };

	int n = sizeof(a) / sizeof(a[0]);

	for (int i = (n - 1 - 1) / 2; i >= 0; i--) // 建堆
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;// 排降序用小堆，每次将堆顶和末尾交换，
					// 这样就不会改变堆结构
					// 每次交换最大的元素，
					// 然后保留最大元素，这样最终就变成了降序排序了

	while (end > 0) // 堆排序
	{
		swap(a[0], a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
	
	//system("title 简易五子棋");//设置标题
	//system("mode con cols=58 lines=29");//设置窗口大小
	//system("color E0");//设置颜色

	return 0;
}