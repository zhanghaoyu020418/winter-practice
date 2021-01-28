#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);

	while (*dest++ = *src++);

	return dest;

}


int main()
{
	char str1[20];

	char str[] = "zhang hao yu";

	my_strcpy(str1, str);

	return 0;
}

void fun()
{

	int  i = 0;
	int a[3];

	for (i = 0; i <= 5; i++)
	{
		a[i] = 0;
		printf("%d\n", i);
	}
}
