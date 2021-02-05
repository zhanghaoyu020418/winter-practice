#define _CRT_SECURE_NO_WARNINGS 1

//
//void* my_memcpy(void * dest, const void* src, int count)
//{
//	assert(dest && src);
//	void* start = dest;
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}


//void * my_memcpy(void *dest, const void *src, int count)
//{
//	assert(dest && src);
//	void * start = dest;
//	while (count--)
//	{
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return start;
//}
//#include <stdio.h>
//#include <assert.h>
//
//void *my_memcpy(void *dest, const void *src, int count)
//{
//	assert(dest && src);
//	void *start = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}
//
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	my_memcpy(arr2, arr1, sizeof(arr1[0])*sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//
