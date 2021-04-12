#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 19;
	string str = to_string(num);
	for (auto i : str)
		cout << i << ' ';
	return 0;
}