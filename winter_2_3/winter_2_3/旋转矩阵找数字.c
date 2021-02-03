//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int FindNum(int(*arr)[4], int row, int col, int num)
//{
//	int i = 0, j = 0;
//	int cnt = row + col;
//	row = 0;
//	while (cnt--)
//	{
//		if (arr[row][col - 1] > num)
//		{
//			col--;
//		}
//		else if (arr[row][col - 1] < num)
//		{
//			row++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a[4][4] = {
//		1,2,8,9,
//		2,4,9,12,
//		4,7,10,13,
//		6,8,11,15
//	};
//	int num;	
//	scanf("%d", &num);
//	if (FindNum(a, 4, 4, num))
//	{
//		printf("找到%d了", num);
//	}
//	else
//	{
//		printf("没有找到%d", num);
//
//	}
//	return 0;
//}
//
