//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////����ʾ��
////int find(int *arr, int num)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			if (arr[i][j] == num)
////			{
////				return 1;
////			}
////		}
////	}
////	return 0;
////}
//
//void find(int *arr, int row, int col, int num)//��һ��һά������ա����㣺��һ��һά�����ʾ��ά����
//{
//	if (NULL != arr && row > 0 && col > 0)
//	{
//		int tmprow = row - 1;
//		int tmpcol = 0;
//
//		while (tmprow >= 0 || tmpcol <= col)
//		{
//			if (arr[tmprow * col + tmpcol] == num)
//			{
//				printf("%d���±��� :> %d\n", arr[tmprow * col + tmpcol], tmprow * col + tmpcol);
//				break;
//			}
//			else if (arr[tmprow * col + tmpcol] < num)
//			{
//				tmpcol++;
//			}
//			else
//			{
//				tmprow--;
//			}
//		}
//		
//		if(tmprow < 0 || tmpcol > col)
//			printf("û�ҵ������֣�\n");
//	}
//}
//
//int main()
//{
//	int arr[4][4] = {
//		1,2,8,9,
//		2,4,9,12,
//		4,7,10,13,
//		6,8,11,15
//	};
//	
//	int num;
//	scanf("%d", &num);
//
//	find((int *)arr, 4, 4, num);//arr�Ƕ�ά���飬ʵ����һ������ָ�룬����ȥ�������һ�е�Ԫ��ָ��
//
//	return 0;
//}