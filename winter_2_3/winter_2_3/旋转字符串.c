//#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
//#include <stdio.h>
//
////��Ϊ��ת���ַ���һ����ԭ�����ַ���ƴ�������еõ���ֻҪ��str1+str1����str2�Ҽ���
//int spinstring2(char* str1, char *str2)
//{
//	char tmp[1000] = { 0 };
//	strcpy(tmp, str1);         
//	strcat(tmp, str1);
//	return strstr(tmp, str2);
//}
//
//
////������forѭ����һ�ν����������ƶ�
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
//		printf("����ת�ַ�����\n");
//	}
//	else
//	{
//		printf("������ת�ַ�����\n");
//	}
//	return 0;
//}
//
