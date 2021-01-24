//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//
////void Bubble_sort1(int arr[9], int sz)
////{
////	int i = 0;
////	int j = 0;
////
////	for (i = 0; i < sz - 1; i++)
////	{
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////
////
////}
//
//
////优化后的冒泡排序
////比而不换，即为有序
///*因为冒泡排序每次都会将一个最大的数字排序完成，
//如果一次排序中，没有元素的交换的话，那么数组中的元素就是有序的无需再排序了*/
//void Bubble_sort(int arr[9], int sz)
//{
//	int flag = 1;
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//}
//
//
//
//
//
//int main()
//{
//	int i = 0;
//	int  j = 0;
//	//int arr[3][3];
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		scanf("%d", &arr[i][j]);
//	//	}
//	//}
//
//	int arr[9];
//	//1.用指针替换二维数组输入数据
//	int *p = &arr;
//
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", p + i);
//	}
//
//	//2.数组要作为实参，传过去的是数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubble_sort(arr, sz);
//
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}