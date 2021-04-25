#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

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
	int n = sizeof a / sizeof (a[0]) ;
	int k = 5;
	PrintTopK(a, n, k);
}

int main()
{
	//TestHeap1();
	TestTopk();
	return 0;
}