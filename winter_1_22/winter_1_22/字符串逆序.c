//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//void reverse_string(char * string)
//{
//	if (0 != *string)
//	{
//		reverse_string(string + 1);
//	}
//
//	printf("%c", *string);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//
//	return 0;
//}

/*
思路：
逆置字符串，循环的方式实现非常简单
1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
2. 交换两个指针位置上的字符
3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
* /
void reverse_string(char* arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;


	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;


		left++;
		right--;
	}
}


/*
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}