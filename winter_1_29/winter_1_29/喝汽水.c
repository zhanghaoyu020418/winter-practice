#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int money = 20;
	int total = money;
	int tempty = money;

	while (tempty > 1)
	{
		total += tempty / 2;
		tempty = tempty / 2 + tempty % 2;
	}

	printf("%d\n", total);
	return 0;
}

