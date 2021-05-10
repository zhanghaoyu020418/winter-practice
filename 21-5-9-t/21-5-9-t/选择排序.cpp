#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <time.h>
#include <cstdlib>

using namespace std;

const int N = 10;

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

int main()
{
	srand((unsigned)time(NULL));
	//int *a1 = (int*)malloc(sizeof(int) * N);

	//for (int i = 0; i < N; i++)
	//{
	//	a1[i] = rand();
	//}
	int a1[] = { 1, 5, 2, 6, 3, 8, 9 };
	int sz = sizeof(a1) / sizeof(a1[0]);
	SelectSort(a1, sz);
	for (int i = 0; i < sz; i++)
		cout << a1[i] << ' ';
	cout << endl;

	free(a1);
	return 0;
}