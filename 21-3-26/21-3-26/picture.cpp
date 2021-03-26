#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


int main()
{
	int line = 4;
	for (int i = 1; i <= line; i++)
	{
		for (int j = 0; j < 2 * (i - 1); j++)
			printf(" ");
		for (int j = 0; j < 8; j++)
			printf("*");
		printf("\n");
	}

	printf("-------------------------\n");

	int cnt = 7; //中间那行的*的数量

	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			int cx = cnt / 2;
			int cy = cnt / 2;
			if (abs(cy - i) + abs(cx - j) <= cnt / 2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("----------------------\n");

	for (int i = 0; i < cnt / 2 + 1; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			int cx = cnt / 2;
			int cy = cnt / 2;
			if (abs(cy - i) + abs(cx - j) <= cnt / 2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}