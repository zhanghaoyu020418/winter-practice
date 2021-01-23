//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////错误示范
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
//void find(int *arr, int row, int col, int num)//用一个一维数组接收。考点：用一个一维数组表示二维数组
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
//				printf("%d的下标是 :> %d\n", arr[tmprow * col + tmpcol], tmprow * col + tmpcol);
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
//			printf("没找到该数字！\n");
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
//	find((int *)arr, 4, 4, num);//arr是二维数组，实参是一个数组指针，传过去是数组第一行的元素指针
//
//	return 0;
//}