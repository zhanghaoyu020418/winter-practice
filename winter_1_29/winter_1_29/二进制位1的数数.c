//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////%2/2����������size_t���ܲ����������Ķ����Ʋ���ͳ��
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
////>>��&
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
////����6�ķ���
//int number_one_bit3(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);//���ʽ�ӵ�������:ÿ�μ���n������λ��һ��1
//		count++;
//	}
//	return count;
//}
//
////�������������1�ĸ���
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int num = number_one_bit3(n);
//	printf("%d\n", num);
//	return 0;
//}