//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//
//
//
//
//
//int binary_search(int arr[], int n, int sz)
//{
//	//�����ú������������β���������Ԫ�صĸ�������Ϊ�����βδ����������������Ԫ�صĵ�ַ��������������ĵ�ַ
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}