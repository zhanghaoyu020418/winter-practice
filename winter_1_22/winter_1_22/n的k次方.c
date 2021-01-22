#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int sum = 0;
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

int sum = 1;

int f(int n, int k)
{
	if (k != 1)
	{
		f(n, k - 1);
	}
	sum *= n;
	return sum;
}
///*
//思路：
//			n    n < 10
//DigiSum(n) =
//		   DibiSum(n/10)+n%10   // 前n-1位之和+第N位
//*/
//
//
//int DigitSum(int n)//1729
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}