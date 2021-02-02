//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("**** 1.Add  2.Sub ****\n");
//	printf("**** 3.Mul  4.Div ****\n");
//	printf("****    0.exit    *****\n");
//	printf("**********************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//
//int main()
//{
//	int(*pArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//函数指针数组存放函数指针
//
//	int input;
//	do
//	{
//		menu();
//		printf("请输入你要的操作：>");
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			int num1, num2;
//			scanf("%d%d", &num1, &num2);
//			int ret = pArr[input](num1, num2); //函数指针数组中的函数指针在调用函数
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
//
