//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////%2/2法，必须用size_t接受参数否则负数的二进制不能统计
//int number_one_bit1(size_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//
//
////>>和&
//int number_one_bit2(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
////超级6的方法
//int number_one_bit3(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);//这个式子的作用是:每次减少n二进制位的一个1
//		count++;
//	}
//	return count;
//}
//
////计算二进制数中1的个数
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int num = number_one_bit3(n);
//	printf("%d\n", num);
//	return 0;
//}