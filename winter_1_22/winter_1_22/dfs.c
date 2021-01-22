#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
////int arr[5] = { 0 };
////int i = 0;
////while (num)
////{
////	arr[i] = num % 10;
////	num /= 10;
////	i++;
////}
//
////显然不用递归会很麻烦，而且要规定数组的大小，否则会栈溢出
//
//void fun1()
//{
//	//将1234，打印出来1 2 3 4
//	int num;
//	scanf("%d", &num);
//	print(num);
//}
//
//int main()
//{
//	fun1();
//	return 0;
//}

////*****************************************************
//
//第一种，利用临时变量计数
//int my_strlen1(char *arr)
//{
//	int cnt = 0;
//	while (0 != *arr)
//	{
//		cnt++;
//		arr++;
//	}
//	return cnt;
//}
//
////可不可以不用临时变量？？？
//
////第二种，递归
//int my_strlen2(char* arr)
//{
//	if (0 != *arr)
//		return my_strlen2(arr + 1) + 1;
//	else
//		return 0;
//}
//
//void fun2()
//{
//	//strlen的实现过程
//	char arr[] = "zhanghaoyu";
//	int ret = my_strlen1(arr);
//
//	printf("%d", ret);
//}

//
//int Fac(int num)
//{
//	if (num <= 1)
//		return 1;
//	else
//		return num * Fac(num - 1);
//}
//
//void fun3()
//{
//	//n的阶乘
//	int n;
//	while (scanf("%d", &n))
//	{
//		long long t = Fac(n);
//		printf("%d\n", t);
//	}
//
//}

//
//
//用递归写斐波那契数列有明显的劣势，每次都要大量的重复计算，效率很低
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//void fun4()
//{
//	int num;
//	while (scanf("%d", &num))
//	{
//		int t = Fib(num);
//		printf("%d\n", t);
//
//	}
//}
//
//void fun5()
//{
//	int num;
//	while (scanf("%d", &num))
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//
//		while (num - 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			num--;
//		}
//		printf("%d\n", c);
//	}
//}

//
//int main()
//{
//
//	return 0;
//}