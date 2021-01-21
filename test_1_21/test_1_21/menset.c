#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "zhanghaoyu";

	memset(arr + 2, '*', 5);

	printf("%s\n", arr);

	return 0;

}