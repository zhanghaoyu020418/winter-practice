#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
	string str;
	cin >> str;
	for (auto& c : str)
		cout << atoi(c.c_str()) << ' ';

	return 0;
}