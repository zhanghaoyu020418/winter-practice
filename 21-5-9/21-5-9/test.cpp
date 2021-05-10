#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"
#include <cstdlib>
#include <time.h>

const int N = 100000;

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

void TestSortPerformance()
{
	srand((unsigned)time(NULL));
	int *a1 = (int*)malloc(sizeof(int) * N);
	int *a2 = (int*)malloc(sizeof(int) * N);
	int *a3 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	SelectSort(a2, N);
	int end3 = clock();

	cout << "InsertSort :> " << end1 - begin1 << endl;
	cout << "ShellSort :> " << end2 - begin2 << endl;
	cout << "SelectSort :> " << end3 - begin3 << endl;

	free(a1);
	free(a2);
	free(a3);
}

int main()
{
	TestSortPerformance();
	return 0;
}