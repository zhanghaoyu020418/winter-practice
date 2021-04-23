#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (a[child + 1] < a[child])
			child++;

		if (a[child] > a[parent])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

int main()
{

	return 0;
}