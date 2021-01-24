#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//void arr_init(int *arr, int sz)
//{
//
//	int  i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void arr_print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//void arr_reserve(int *arr, int sz)
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz / 2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}

void fun()
{
	//int arr[10];

//int sz = sizeof(arr) / sizeof(arr[0]);
//
//arr_init(arr, sz);


//printf("Before:> ");
//arr_print(arr, sz);

//printf("\n");
//arr_reserve(arr, sz);

//printf("After:> ");
//arr_print(arr, sz);
}




void swap_array(int *a, int *b, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };

	int sz = sizeof(a) / sizeof(a[0]);

	swap_array(a, b, sz);

	int  i;

	printf("a :>\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b :>\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}