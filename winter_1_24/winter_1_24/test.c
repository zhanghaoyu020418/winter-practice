//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//
////void Bubble_sort1(int arr[9], int sz)
////{
////	int i = 0;
////	int j = 0;
////
////	for (i = 0; i < sz - 1; i++)
////	{
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////
////
////}
//
//
////�Ż����ð������
////�ȶ���������Ϊ����
///*��Ϊð������ÿ�ζ��Ὣһ����������������ɣ�
//���һ�������У�û��Ԫ�صĽ����Ļ�����ô�����е�Ԫ�ؾ��������������������*/
//void Bubble_sort(int arr[9], int sz)
//{
//	int flag = 1;
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//}
//
//
//
//
//
//int main()
//{
//	int i = 0;
//	int  j = 0;
//	//int arr[3][3];
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		scanf("%d", &arr[i][j]);
//	//	}
//	//}
//
//	int arr[9];
//	//1.��ָ���滻��ά������������
//	int *p = &arr;
//
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", p + i);
//	}
//
//	//2.����Ҫ��Ϊʵ�Σ�����ȥ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubble_sort(arr, sz);
//
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}