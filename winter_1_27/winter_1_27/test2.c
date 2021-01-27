#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
思路：该题比较简单，请参考代码
*/
void Reverse(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
}


int main()
{
	char str[] = "hello bit";
	//在这里完成下面函数，参数自己设计，要求：使用指针
	Reverse(str);
	return 0;
}


// 注意：如果是在线OJ时，必须要考虑循环输入，因为每个算法可能有多组测试用例进行验证，参考以下main函数写法，
int main()
{
	char str[101] = { 0 };
	while (gets(str))
	{
		Reverse(str);
		printf("%s\n", str);
		memset(str, 0, sizeof(str) / sizeof(str[0]));
	}
	return 0;
}
////int main()
////{
////	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
////	//int * p = arr;
////
////	//int i = 0;
////	//for (i = 0; i < 10; i++)
////	//{
////	//	printf("%d ", *(p + i));
////	//}
////	return 0;
////}
//
////char* solve(char* str) {
////	int len = strlen(str);
////	char * p = str;
////	int  i = 0;
////
////	for (i = 0; i < len / 2; i++)
////	{
////		char tmp = p[i];
////		p[i] = p[len - i - 1];
////		p[len - i - 1] = tmp;
////	}
////	return str;
////}
//



//2+22+222+2222
/*
思路：
通过观察可以发现，该表达式的第i项中有i个a数字，因此：
假设第i项为temp，则第i+1项为temp*10+a
具体参考以下代码
*/
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}
////int fun(int n, int num)
////{
////	if (num == 0)
////		return n;
////
////	return (fun(n, num - 1) * 10) + n;
////}
////
////
////int main()
////{
////	int a = 0;
////
////	scanf("%d", &a);
////
////	int ans = fun(a, 1) + fun(a, 2) + fun(a, 3) + fun(a, 4) + fun(a, 5);
////
////	printf("%d\n", ans);
////
////	int i = 0;
////	int num = 0;
////
////
////	for (i = 0; i < 5; i++)
////	{
////		num = num * 10 + a;
////	}
////
////	printf("%d\n", num);
////
////	return 0;
////}
//





//水仙花数
int main()
//{
//
//	int i = 0;
//
//	for (i = 0; i <= 100000; i++)
//	{
//		if (0 < i < 10)
//		{
//			int a = i % 10;
//			if (a == i)
//				printf("%d ", i);
//		}
//
//		if (10 <= i < 100)
//		{
//			int a = i % 10;
//			int b = i / 10;
//			if (a * a + b * b == i)
//			{
//				printf("%d ", i);
//			}
//		}
//
//		if (100 <= i < 1000)
//		{
//			int a = i % 10;
//			int b = i / 10 % 10;
//			int c = i / 100;
//			if (a*a*a + b * b*b + c * c*c == i)
//			{
//				printf("%d ", i);
//			}
//		}
//
//		if (1000 <= i < 10000)
//		{
//			int a = i % 10;
//			int b = i / 10 % 10;
//			int c = i / 100 % 10;
//			int d = i / 1000;
//
//			if (a*a*a*a + b * b*b*b + c * c*c*c + d * d*d*d == i)
//			{
//				printf("%d ", i);
//			}
//		}
//
//		if (10000 <= i < 100000)
//		{
//			int a = i % 10;
//			int b = i / 10 % 10;
//			int c = i / 100 % 10;
//			int d = i / 1000 % 10;
//			int e = i / 10000;
//			if (a*a*a*a*a + b * b*b*b*b + c * c*c*c*c + d * d*d*d*d + e * e*e*e*e == i)
//			{
//				printf("%d ", i);
//			}
//		}
//
//
//
//	}
//
//
//	return 0;
//}
/*
思路：
此题的关键在于只要知道判断一个数据是否为水仙花数的方式，问题就迎刃而解。假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行立方求和
3. 对data中每个位上的数据立方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
具体实现参考以下代码。
*/
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1. 求判断数字的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. 计算每一位的次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. 判断
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}

//-------------打印图形
int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 7 - i; j >= 1; j--)
//		{
//			printf(" ");
//		}
//
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 6; i >= 1; i--)
//	{
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 2 * i - 1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//喝汽水
int main()
{
	int m = 0;
	int sum = 0;  //总数
	int surplus = 0;  //剩余数

	scanf("%d", &m);

	//sum = m;
	//surplus = m;

	//while (surplus > 1)
	//{
	//	sum += surplus / 2;
	//	surplus = surplus / 2 + surplus % 2;
	//}

	if (m < 0)
	{
		sum = 0;
	}
	else
	{
		sum = m * 2 - 1;
	}


	printf("%d\n", sum);

	return 0;
}