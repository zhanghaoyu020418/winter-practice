//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
////双指针向中间靠拢
//void reverse1(char* str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
////循环变量实现
//void reverse2(char *str)
//{
//	int i = 0;
//	for (i = 0; i <= strlen(str) / 2; i++)
//	{
//		char tmp = *(str + i);
//		*(str + i) = *(str + strlen(str) - i - 1);
//		*(str + strlen(str) - i - 1) = tmp;
//	}
//
//}
//
//void reverse3(char *str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//
//	if (strlen(str) >= 2)
//		reverse3(str + 1);
//
//	*(str + len - 1) = tmp;
//
//}
//
//void reverse(char *str)
//{
//	char tmp = *str;
//	*str = *(str + strlen(str) - 1);
//	*(str + strlen(str) - 1) = '\0';
//
//	if (strlen(str) >= 2)
//		reverse(str + 1);
//
//	*(str + strlen(str)) = tmp;
//
//}
//
//
//
////字符串逆序
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
