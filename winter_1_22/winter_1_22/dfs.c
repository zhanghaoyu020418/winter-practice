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
////��Ȼ���õݹ����鷳������Ҫ�涨����Ĵ�С�������ջ���
//
//void fun1()
//{
//	//��1234����ӡ����1 2 3 4
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
//��һ�֣�������ʱ��������
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
////�ɲ����Բ�����ʱ����������
//
////�ڶ��֣��ݹ�
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
//	//strlen��ʵ�ֹ���
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
//	//n�Ľ׳�
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
//�õݹ�д쳲��������������Ե����ƣ�ÿ�ζ�Ҫ�������ظ����㣬Ч�ʺܵ�
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