//#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
//#include <stdio.h>
//
////因为旋转的字符串一定在原来的字符串拼接两次中得到，只要在str1+str1中找str2找即可
//int spinstring2(char* str1, char *str2)
//{
//	char tmp[1000] = { 0 };
//	strcpy(tmp, str1);         
//	strcat(tmp, str1);
//	return strstr(tmp, str2);
//}
//
//
////用两个for循环，一次将整个数组移动
//int spinstring1(char *str1, char *str2)
//{
//	int i = 0, j = 0;
//	int len = strlen(str1);
//
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;
//		for (j = 1; j < len; j++)
//		{
//			*(str1 + j - 1) = *(str1 + j);
//		}
//		*(str1 + len - 1) = tmp;             
//		if (strcmp(str1, str2) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char str1[] = "AABCD";
//	char str2[] = "CDAAB";
//	if (spinstring2(str1, str2))
//	{
//		printf("是旋转字符串！\n");
//	}
//	else
//	{
//		printf("不是旋转字符串！\n");
//	}
//	return 0;
//}
//
