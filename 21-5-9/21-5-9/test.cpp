#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"
#include <cstdlib>
#include <time.h>

const int N = 1000000;

void TestInsertSort()
{
	int a[] = { 1,4,5,7,2,8,6,9,3,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	InsertSort(a, sz);
	PrintArray(a, sz);
}

void TestShellSort()
{
	int a[] = { 1,4,5,7,2,8,6,9,3,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	ShellSort(a, sz);
	PrintArray(a, sz);
}

void TestSelectSort()
{
	int a[] = { 1,4,5,7,2,8,6,9,3,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	PrintArray(a, sz);
}

void TestQuickSort()
{
	srand(time(0));
	int a[10000];
	for (int i = 0; i < 10000; i++)
		a[i] = rand();
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, 10000 - 1);
	PrintArray(a, sz);
}

void TestQuickSortNonR()
{
	int a[] = { 1,4,5,7,2,8,6,9,3,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSortNonR(a, 0, 10000 - 1);
	PrintArray(a, sz);
}

void TestSortPerformance()
{
	srand((unsigned)time(NULL));
	int *a1 = (int*)malloc(sizeof(int) * N);
	int *a2 = (int*)malloc(sizeof(int) * N);
	int *a3 = (int*)malloc(sizeof(int) * N);
	int *a4 = (int*)malloc(sizeof(int) * N);
	int *a5 = (int*)malloc(sizeof(int) * N);
	int *a6 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	QuickSort(a4, 0, N - 1);
	int end4 = clock();

	int begin5 = clock();
	QuickSortNonR(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	MergeSort(a6, N);
	int end6 = clock();

	cout << "InsertSort :> " << end1 - begin1 << endl;
	cout << "ShellSort :> " << end2 - begin2 << endl;
	cout << "SelectSort :> " << end3 - begin3 << endl;
	cout << "QuickSort :> " << end4 - begin4 << endl;
	cout << "QuickSortNonR :> " << end5 - begin5 << endl;
	cout << "MergeSort :> " << end6 - begin6 << endl;

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
}

int main()
{
	TestSortPerformance();
	return 0;
}