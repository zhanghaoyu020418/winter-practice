#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <assert.h>

using namespace std;

enum State
{
	INVALID,
	VALID
}state;

aoti模拟实现
int my_atoi(const char* str)
{
	state = INVALID;
	assert(str);
	if (*str == '\0')
		return 0;
	if (isspace(*str))
		str++;
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long num = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			num = num * 10 + flag * (*str - '0');
			if (num > INT_MAX)
				return INT_MAX;
			if (num < INT_MIN)
				return INT_MIN;
		}
		else
		{
			return 0;
		}
		str++;
	}
	state = VALID;
	return num;
}

int main()
{
	/*cout << isdigit('3') << endl;*/
	cout << atoi("-4723847298374829374293742983742342342342342342342345345353453445") << endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	cout << my_atoi("-89543545") << endl;
	int res = my_atoi("47ed3829");
	if (state == VALID)
	{
		cout << "合法" << endl;
		cout << res << endl;
	}
	else
	{
		cout << "不合法" << endl;
	}
	return 0;
}

enum State
{
	INVALID,
	VALID
};

enum State state = INVALID;
int my_atoi(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	while (isspace(*str))
		str++;
	int flag = 1;
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	if (flag == '+')
	{
		flag = 1;
		str++;
	}

	long long num = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			num = num * 10 + flag * (*str - '0');
			if (num > INT_MAX)
				return INT_MAX;
			if (num < INT_MIN)
				return INT_MIN;
		}
		else
		{
			return 0;
		}
		str++;
	}
	return num;

}

int my_atoi(const char * str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	while (isspace(*str))
		str++;
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long num = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			num = num * 10 + flag * (*str - '0');
			if (num > INT_MAX)
				return INT_MAX;
			if (num < INT_MIN)
				return INT_MIN;
		}
		else
		{
			return 0;
		}
		str++;
	}
	return num;
}

#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	int num = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}

	int tmp = num & -num;

	int num1 = 0, num2 = 0;

	for (int i = 0; i < sz; i++)
	{
		if (arr[i] & tmp)
			num1 ^= arr[i];
	}

	int pos = 0;
	for (int i = 0; i < 32; i++)
	{
		if (num >> i & 1)
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] >> pos & 1)
			num1 ^= arr[i];
	}
	num2 = num ^ num1;
	cout << num1 << ' ' << num2 << endl;
	return 0;
}

#define SWAP(X) (((X & 0x55555555) << 1) | ((X & 0xaaaaaaaa) >> 1))
#define OFFSETOF(sname, mname) (int)&(((sname *)0)->mname)

struct Stu
{
	int id;
	char name;
};

int main()
{
	cout << SWAP(4234) << endl;
	cout << OFFSETOF(Stu, name);
	return 0;
}