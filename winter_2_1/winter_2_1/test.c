////#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
////
////int main()
////{
////	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int *p1 = arr1;
////	int(*p2)[10] = &arr1;
////
////	for (int i = 0; i < 10; i++)
////		printf("%d ", *(p1 + i));
////
////	printf("\n");
////
////	for (int i = 0; i < 10; i++)
////		printf("%d ", *((*p2) + i));
////
////	printf("\n");
////
////
////
	////二维数组的深度解析
	//int     (arr2[3])      [5];
	////二维数字的数组名为行指针
	////arr有三个元素 - 有三行
	////再往外看 - 每一行中又是一行一维数组 - 一维数组中有5个int类型的元素
////
////
//	void print(int(*p)[3], int r, int c);
//
//	int arr[3][3] = { {1,2,3}, {2,3,4,}, {3,4,5} };
//	print(arr, 3, 3);
//
//
//
//	return 0;
//}
//
//void print(int(*p)[3], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
////
////
//
//#include <stdio.h>
//
//int main()
//{
//
//	char ch = 'a';
//	char *p = &ch;
//
//	char *p1 = "hello world!";
//	const char *p2 = "hello world!";
//
//
//
//
//
//	char str1[] = "I like study";
//	char str2[] = "I like study";
//
//	char *str3 = "I like study";
//	char *str4 = "I like study";
//
//	if (str1 == str2)
//	{
//		printf("str1地址与str2地址相同。\n");
//	}
//	else
//	{
//		printf("str1地址与str2地址不相同。\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3地址与str4地址相同。\n");
//	}
//	else
//	{
//		printf("str3地址与str4地址不相同。\n");
//	}
//
//
//
//	return 0;
//}
//



#include <stdio.h>

int main()
{

	int  arr[5];            //一维数组
	int  *parr1[10];        //指针数组
	int  (*parr2) [10];     //数组指针
	int (* parr3[10] ) [10];//数组指针数组，一个存放数组指针的数组

	return 0;
}

