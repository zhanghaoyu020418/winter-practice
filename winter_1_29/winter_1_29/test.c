#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//判断n 是不是 2^m
//思路:如果n是2^m，那么n的二进制数中一定只有1个1，其余位数都是0
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n & (n - 1)) == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//
//	return 0;
//}