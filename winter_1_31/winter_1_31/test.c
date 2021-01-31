#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x00000001;
//
//	char* p = (char*)&a;
//
//	printf("%d\n", *p);
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 0x11000000;
//	return  *(char*)&a;
//}
//
//int main()
//{
//
//	if (check_sys() == 0)
//	{
//		printf("小端\n");
//	}
//	else 
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//整型提升
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//
//	return 0;
//}

//
//int main()
//{
//	unsigned int i;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("我爱学习\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		int tmp = i;
//		//求出数字是几位数
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//算出数字对应的自幂数
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//将自幂数与数字本身比较
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line;
//	scanf("%d", &line);
//
//	for (i = 0; i < line; i++)
//	{
//		//空格
//		for (j = 0; j < line - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		for (j = 0; j <= i + 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*(line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

int a[1000][1000];

int main()
{
	int line;
	scanf("%d", &line);

	int i = 0;
	int j = 0;
	for (i = 0; i < line ; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}

	for (i = 0; i <= line - 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-2d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}