#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


void HeapSort(int* a, int n)
{
	int end = n - 1;

	for (int i = (n - 2) / 2; i >= 0; i--)
		AdjustDown(a, n, i);

	while (end > 0)
	{
		swap(a[0], a[end]);
		AdjustDown(a, end, 0); // 这里的end既是最后一个数的坐标，也是剩下的数组中的个数
		end--;
	}

}

void TestHeap1()
{
	int a[] = { 1, 4, 6, 8, 2, 9, 3, 5, 7, 10 };
	int n = sizeof(a) / sizeof(a[0]);

	Heap hp;
	HeapCreate(&hp, a, n);

	HeapPrint(hp);

	HeapPush(&hp, 30);
	HeapPush(&hp, 3);
	HeapPush(&hp, 5);
	HeapPush(&hp, 24);
	HeapPrint(hp);

	HeapPop(&hp);
	HeapPop(&hp);
	HeapPop(&hp);
	HeapPrint(hp);

	if (!HeapEmpty(&hp))
	{
		cout << "HeapTop :> " << HeapTop(&hp) << endl;
		cout << "HeapSize:> " << HeapSize(&hp) << endl;
	}

	HeapDestory(&hp);
}

void TestTopk()
{
	int a[] = { 1, 6, 4234, 643,64, 47, 943,354, 24, 543 };
	int n = sizeof a / sizeof(a[0]);
	int k = 5;
	PrintTopK(a, n, k);
}

void TestHeapSort()
{
	int a[] = { 1, 4, 6, 8, 2, 9, 3, 5, 7, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	HeapSort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}

int main()
{
	//TestHeap1();
	//TestTopk();
	TestHeapSort();

	return 0;
}