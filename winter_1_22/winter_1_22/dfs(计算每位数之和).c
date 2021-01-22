#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int k;
	int n;
	printf("请依次输入n的k次方:>\n");
	while (scanf("%d", &n) && scanf("%d", &k))
	{
		int ret = f(n, k);
		printf("%d\n", ret);
	}
	
	return 0;
}
///*
//思路：
//		  1      K==0
//Pow(n,K) =
//		  Pow(n, K-1)*n
//
//*/
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n * Pow(n, k - 1);
//	}
//}

