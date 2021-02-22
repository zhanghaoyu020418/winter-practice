#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	for (auto i : a)
	{
		cout << i << ' ';
	}
	return 0;
}