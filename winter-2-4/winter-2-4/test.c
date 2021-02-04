#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>

int main()
{
	char arr[20];
	gets(arr);

	int i = 0;

	while (arr[i])
	{
		if (isdigit(arr[i]))
		{
			printf("%c ", arr[i]);
		}
		else if (isalpha(arr[i]))
		{
			if (isupper(arr[i]))
			{
				arr[i] = tolower(arr[i]);
			}
			else if (islower(arr[i]))
			{
				arr[i] = toupper(arr[i]);
			}
			printf("%c ", arr[i]);
		}
		i++;
	}


	return 0;
}

