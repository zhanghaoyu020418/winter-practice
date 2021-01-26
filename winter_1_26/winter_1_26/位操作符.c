#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////int main()
////{
////	//~是按位取反
////	//a = 1010101010101
////	//~a= 0101010101010
////
////	int n = 0;
////
////	while (scanf("%d", &n) != EOF)
////	{
////		//..........
////	}
////
////	//EOF 其实返回 -1 
////	//-1 的二进制位是 原码:10000000 00000000 00000000 00000001  
////	//               反码:11111111111111111111111111111111110
////	//               补码:11111111111111111111111111111111111
////	//~-1后是 将-1的补码取反就是
////	//                    00000000000000000000000000000000000
////	//所以~-1 就是0
////	//而0就可以结束循环
////
////	while (~scanf("%d", &n))
////	{
////		//..............
////	}
////
////
////	return 0;
////}
//
//一个整数在二进制中储存的1的个数

int main()
{
	
	int num = 0;
	int cnt = 0;
	scanf("%d", &num);

	//1./2%2法
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		cnt++;
	//	num /= 2;
	//}


	//2.右移按位与法
	//while (num)
	//{
	//	if (num & 1 == 1)
	//		cnt++;
	//	num >>= 1;
	//}

	//3.遍历法
	//int  i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if ((num >> i) & 1 == 1)
	//		cnt++;
	//}

	//4.很难想到
	while (num)
	{
		cnt++;
		num = num & (num - 1);
	}



	printf("%d\n", cnt);
	return 0;
}


//求两个数中二进制不同的bit个数
//int main()
//{
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	int ans = num1 ^ num2;
//	int cnt = 0;
//
//	while (ans)
//	{
//		cnt++;
//		ans = ans & (ans - 1);
//	}
//
//	printf("%d\n", cnt);
//
//	return 0;
//}

//求一个数的二进制奇数位和偶数位
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	int cnt1 = 0;
//	int cnt2 = 0;
//	int i = 0;
//	int a[16], b[16];
//
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a[cnt1] = (input >> i) & 1;
//			cnt1++;
//		}
//		else
//		{
//			b[cnt2] = (input >> i) & 1;
//			cnt2++;
//		}
//	}
//
//	printf("奇数位:>\n");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d", a[i]);
//	}
//
//	printf("\n");
//
//	printf("偶数位:>\n");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d", b[i]);
//	}
//
//	return 0;
//}

