#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int process(string& str, int i)
{
	if (i == str.size())
		return 1;
	if (str[i] == '0')
		return 0;
	if (str[i] == '1')
	{
		int res = process(str, i + 1);
		if (i + 1 < str.size())
			res += process(str, i + 2);
		return res;
	}
	if (str[i] == '2')
	{
		int res = process(str, i + 1);
		if ((i + 1 < str.size()) && str[i + 1] <= '6' && str[i + 1] >= '0')
			res += process(str, i + 2);
		return res;
	}
	return process(str, i + 1);
}

int main()
{
	string str = "01110";
	cout << process(str, 0);
	return 0;
}