//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
////
////int i;
////
////int main()
////{
////	i--;
////	if (i > sizeof(i)) 
////	//��Ϊi�����ͣ�
////	//����sizeo()���ص���unsigned int(�޷�������)���Ի�ǿ������ת��
////	//��-1�Ĳ���Ҫ��ֱ�ӵ���ԭ��ת��11111111111111111111111111111111
////	//�ͻ��Ƿǳ���������������Խ������ >
////	{
////		printf(">\n");
////	}
////	else
////	{
////		printf("<\n");
////	}
////
////	return 0;
////}
////
//////
////int main()
////{
////	//��Ϊstrlen�ķ���ֵ��size_t��unsigned int�����������޷����������ֻ�����޷��ŵ�����
////	//���Ծ���������Ǹ���Ҳ��ǿ������ת����Ϊ�������������
////	if (strlen("abc") - strlen("abcdef") > 0)
////	{
////		printf(">\n");
////	}
////	else
////	{
////		printf("<=\n");
////	}
////
////	return 0;
////}
//
//#include <stdio.h>
//#include <assert.h>//����ͷ�ļ�
////����������
//int my_strlen1(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	 }
//	return count;
//}
//
////ָ�������
//int my_strlen2(const char* str)
//{
//	assert(str);
//	const char *start = str;
//	while (*str != '\0');
//	{
//		str++;
//	}
//
//	return str - start;
//
//	//����
//	//while(*str++ != '\0');
//	//return str - start - 1;
//
//}
//
////�ݹ�ʵ��
//int my_strlen3(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen3(str + 1);
//}
//
//int main ()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen3(arr);
//
//	printf("%d\n", len);
//	return 0;
//}
