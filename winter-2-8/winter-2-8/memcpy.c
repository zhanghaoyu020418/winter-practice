//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memcpy(void *dest, const void *src, int count)
//{
//	assert(dest && src);
//	void * start = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}
//
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memcpy(arr1 + 2, arr1, sizeof(int)* 5);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	puts(" ");
//	return 0;
//}
//
