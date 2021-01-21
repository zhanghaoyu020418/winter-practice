#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <cmath>
//
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
////试除法
//void fun1()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)  //两处优化：1.sqrt()开平方 2.在筛选的时候直接去掉偶数
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
////筛选法
//void fun2()
//{
//	int i, j, a[100];
//
//	for (i = 0; i < 100; i++)   //0 - 100 是整个要查找数组的宽度（即要找素数的范围）
//		a[i] = i + 100;
//
//	for (i = 0; i < 100; i++)
//	{
//		j = i + 6;              //空出0，1，2
//		while (j > 1)
//		{
//			if (0 == a[i] % j)
//				a[i] = 0;
//			j = j - 1;
//		}
//	}
//
//	for (j = 1; j < 100; j++)   //如果数组中的数不为0，则输出
//	{
//		if (a[j] != 0)
//		{
//			printf("%2d ", a[j]);
//		}
//	}
//
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[100];
//	int j = 0;
//
//	for (i = 0; i < 100; i++)   //0 - 100 (100个数)是整个要查找数组的宽度（即要找素数的范围）
//	{
//		arr[i] = i + 100;       //将100-200的数字放到数组中
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		j = i - 1;              //从至少比自己小1的数字开始筛选
//		while (j > 1)
//		{
//			if (0 == arr[i] % j)//将能够被整除的数字置零
//				arr[i] = 0;
//			j -= 1;
//		}
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);//如果数字没有被置零，则说明该数字为素数，并将其输出
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("是闰年\n");
//		}
//		else
//			printf("不是闰年\n");
//
//	}
//	return 0;
//}


void swap(int * p, int * q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}


int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("Before:> %d %d \n", num1, num2);

	swap(&num1, &num2);
	printf("After:> %d %d \n", num1, num2);
}