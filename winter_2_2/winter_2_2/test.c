//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
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
//void calc(int (*p)(int, int ))//ͨ��calc�������Ե��������ĺ���������ǻص�����
//{
//	printf("please input two numbers:>");
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	int ret = p(num1, num2);
//	printf("ret = %d\n", ret);
//}
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��������Ҫ�Ĳ���:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//
//	} while (input);
//	return 0;
//}
//
//
//
//
//
//
