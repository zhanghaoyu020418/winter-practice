//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void test1(char *str1, int k)
//{
//	//��ķ��������ǽ�k��Ԫ��һ��һ�������ƶ�
//
//	int i = 0, j = 0;
//	int len = strlen(str1);
//
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str1;
//		for (j = 1; j < len; j++)
//		{
//			*(str1 + j - 1) = *(str1 + j);
//		}
//		*(str1 + len - 1) = tmp;
//	}
//
//}
//
//
//void reverse(char *str1, int start, int end)
//{
//	while (start < end)
//	{
//		char tmp = str1[start];
//		str1[start] = str1[end];
//		str1[end] = tmp;
//		end--;
//		start++;
//	}
//}
//
////�ڶ��ַ������ǽ������ַ��������ã�Ȼ��ǰlen - k��Ԫ�����ã���k��Ԫ������
//void test2(char *str1, int k)
//{
//	int len = strlen(str1);
//	reverse(str1, 0,  len - 1);
//	reverse(str1, 0, len - k - 1);
//	reverse(str1, len - k, len - 1);
//}
//
//
//
//int main()
//{
//	char str1[] = "ABCD";
//
//	int k;
//	scanf("%d", &k);
//
//	test1(str1, k);
//
//	//test2(str1, k);
//	printf("%s\n", str1);
//
//	return 0;
//}
//
