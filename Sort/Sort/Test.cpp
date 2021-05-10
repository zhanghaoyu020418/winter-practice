#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

void TestSelectSort()
{
	int a[] = { 2, 4, 6, 7, 4, 9, 6, 2, 6, 8};
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	PrintArray(a, sz);
}

int main()
{
	TestSelectSort();
	return 0;
}