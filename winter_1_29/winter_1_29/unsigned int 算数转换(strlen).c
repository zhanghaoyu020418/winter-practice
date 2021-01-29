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
////	//因为i是整型，
////	//但是sizeo()返回的是unsigned int(无符号整型)所以会强制算数转换
////	//而-1的补码要是直接当成原码转换11111111111111111111111111111111
////	//就会是非常大的正整数，所以结果就是 >
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
////	//因为strlen的返回值是size_t（unsigned int）类型两个无符号整型相减只能是无符号的数字
////	//所以就算是相减是负数也被强制类型转换成为超级大的正整数
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
//#include <assert.h>//断言头文件
////计数器计数
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
////指针相减法
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
//	//或者
//	//while(*str++ != '\0');
//	//return str - start - 1;
//
//}
//
////递归实现
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
