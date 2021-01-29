#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



void sort(int * arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
		{
			int tmp = arr[i];
			int j = 0;
			for (j = i; j < sz - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[sz - 1] = tmp;
		}
	}
}


int main()
{
	int arr[10];
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, 10);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}