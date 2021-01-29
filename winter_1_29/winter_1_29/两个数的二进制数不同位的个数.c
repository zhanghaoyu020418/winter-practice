//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int number_dif_bit1(int n, int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i & 1) != (m >> i & 1))
//			count++;
//	}
//	return count;
//}
//
//int number_dif_bit2(int n, int m)
//{
//	int count = 0;
//
//	int x = n ^ m;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//
//	int num = number_dif_bit2(n, m);
//	printf("%d\n", num);
//	return 0;
//}