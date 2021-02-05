//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//
//
//char * my_strstr(const char* fatherstr, const char* sonstr)
//{
//	assert(fatherstr && sonstr);
//	const char* prev = fatherstr;
//	while (*prev)
//	{
//		const char* fp = prev;
//		const char* sp = sonstr;
//		while (*fp == *sp && *fp && *sp)
//		{
//			fp++;
//			sp++;
//		}
//		if (*sp == '\0')
//			return prev;
//		prev++;
//	}
//	return NULL;
//}
//
//
//
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bcdads";
//	if (my_strstr(arr1, arr2) != NULL)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//
