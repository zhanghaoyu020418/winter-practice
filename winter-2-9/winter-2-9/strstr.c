//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int strStr(char * haystack, char * needle) {
//	if (*needle == '\0')
//		return NULL;
//
//	char* prev = haystack;
//	char* start = prev;
//	while (*prev)
//	{
//		char* hp = prev;
//		char* np = needle;
//		while (*hp == *np && *hp && *np)
//		{
//			hp++;
//			np++;
//		}
//		if (*np == '\0')//如果子串遍历完成就可以结束了
//		{
//			int ret = prev - start;
//			return ret;
//		}
//		prev++;
//	}
//	return -1;
//}
//
//int main()
//{
//	char arr1[] = "";
//	char arr2[] = "";
//	printf("%d\n", strStr(arr1, arr2));
//	return 0;
//}
//
