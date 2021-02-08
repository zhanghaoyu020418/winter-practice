//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char* fatherstr, const char* sonstr)
//{
//	assert(fatherstr && sonstr);
//	const char* sonstr_start = sonstr;
//	const char* prev = fatherstr;
//	while (*prev)
//	{
//		const char* fp = prev;
//		const char* sp = sonstr;
//		while (*fp == *sp)
//		{
//			fp++;
//			sp++;
//		}
//		if (*sp == '\0')
//			return sonstr_start;
//		prev++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abcddefgh";
//	char arr2[] = "def";
//	if (my_strstr(arr1, arr2))
//	{
//		printf("子串为：%s\n", my_strstr(arr1, arr2));
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
