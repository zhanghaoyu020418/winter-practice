//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int cmp(const void *e1, const void *e2)
//{
//	return *(int *)e1 - *(int *)e2;
//}
//
//void swap_elem(char *e1, char *e2, int width)//传参时，将元素的字节大小也传过来，然后将元素的每个字节都交换，则元素就完成交换
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(e1+i);
//		*(e1+i) = *(e2 + i);
//		*(e2+i) = tmp;
//	}
//}
//
//
//void Bubble_sort(void *base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//arr[j] arr[j + 1]
//			if (cmp((char *)base + j * width, (char *)base + (j + 1)*width) > 0)
//				swap_elem((char *)base + j * width, (char *)base + (j + 1)*width, width);
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,1,9,5,3,6,7,8,4,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}
//
