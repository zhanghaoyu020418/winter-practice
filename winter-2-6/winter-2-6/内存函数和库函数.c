//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//char*  my_strstr(const char* fatherstr, const char * sonstr)
//{
//	assert(fatherstr, sonstr);
//	const char* sonstart = sonstr;
//	const char* prev = fatherstr;
//	while (prev)
//	{
//		const char * fp = prev;
//		const char * sp = sonstr;
//		while (*fp == *sp && *sp && *fp)
//		{
//			fp++;
//			sp++;
//		}
//		if (*sp == '\0')
//			return sonstart;
//		prev++;
//	}
//	return NULL;
//}
//
//void test_strstr()
//{
//	char arr1[] = "abcdefghijklmn";
//	char arr2[] = "def";
//	printf("%s\n", my_strstr(arr1, arr2));
//}
//
//
//void *my_memcpy(void *dest, const void *src, int count)
//{
//	assert(dest && src);
//	void * start = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		*++(char*)dest;
//		*++(char*)src;
//	}
//	return start;
//}
//
//void test_memcpy()
//{
//	float arr1[20] = { 1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.0 };
//	float arr2[20] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memcpy(arr2, arr1, sizeof(float)*sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//}
//
//void* my_memmove(void * dest, const void *src, int count)
//{
//	assert(dest && src);
//	void * deststart = dest;
//	if (src > dest)
//	{
//		while (count--)
//			*((char*)dest)++ = *((char*)src)++;
//	}
//	else if (src < dest)
//	{
//		while (count--)
//			*((char*)dest + count) = *((char*)src + count);
//	}
//	return deststart;
//}
//
//
//
//void test_memmove()
//{
//	float arr1[20] = { 1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memmove(arr1 + 3, arr1, sizeof(float)*5);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr1[i]);
//	}
//}
//lainbiao
//
//int main()
//{
//	/*test_strstr();*/
//	/*test_memcpy();*/
//	test_memmove();
//	return 0;
//}
//
