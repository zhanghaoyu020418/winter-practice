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
//	int(*pArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//����ָ�������ź���ָ��
//
//	int input;
//	do
//	{
//		menu();
//		printf("��������Ҫ�Ĳ�����>");
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			int num1, num2;
//			scanf("%d%d", &num1, &num2);
//			int ret = pArr[input](num1, num2); //����ָ�������еĺ���ָ���ڵ��ú���
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
//
