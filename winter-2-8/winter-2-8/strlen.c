//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen1(const char *str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//size_t my_strlen2(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	while (*str++);
//	str--;
//	return str - start;
//}
//
//int my_strlen3(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen3(str + 1);
//}
//
//int main()
//{
//	char arr[] = "zhanghaoyu";
//	printf("%d\n", my_strlen3(arr));
//	return 0;
//}
//
