//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int my_strlen(char * str)
//{
//	char * start = str;
//	while (*str)
//	{
//		str++;
//	}
//	while (*str++);
//	str--;
//	return str - start;
//}
//
//int my_strlen(char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("string_length = %d\n", ret);
//	return 0;
//}
//
