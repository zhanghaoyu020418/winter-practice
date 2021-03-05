#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//逆序字符串的函数
void reverse(char*left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	//输入
	gets(arr);//读取一行
	//处理
	//abc def ghi
	int len = strlen(arr);
	//1. 逆序整个字符串
	reverse(arr, arr + len - 1);
	//2. 逆序每一个单词
	char* start = arr;
	char *end = arr;
	while (*start)
	{
		end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//逆序一个单词
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	//输出
	printf("%s\n", arr);

	return 0;
}