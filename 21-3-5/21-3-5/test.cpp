#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ַ����ĺ���
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
	//����
	gets(arr);//��ȡһ��
	//����
	//abc def ghi
	int len = strlen(arr);
	//1. ���������ַ���
	reverse(arr, arr + len - 1);
	//2. ����ÿһ������
	char* start = arr;
	char *end = arr;
	while (*start)
	{
		end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//����һ������
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	//���
	printf("%s\n", arr);

	return 0;
}