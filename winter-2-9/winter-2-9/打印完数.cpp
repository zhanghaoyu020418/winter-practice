#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


int main()
{

	for (int num = 1; num <= 9999; num++)
	{
		int sum = 0;
		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
				sum += i;
		}
		if (sum == num)
			cout << sum << endl;
	}

	return 0;
}

