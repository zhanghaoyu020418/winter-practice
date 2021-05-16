#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int res = a + b;
	if (res < 0)// 如果结果是负数就直接直接添加一个负号，然后将数字变成正数
	{
		cout << '-';
		res = res * -1;
	}

	// 转换成字符串然后，每三个字符就添加一个逗号
	string str = to_string(res);    // 因为字符串要首先满足，从后往前的三位数字，添加负号，
	reverse(str.begin(), str.end());// 但是那样遍历太复杂，所以就先将整个字符串反转一遍
	int len = str.length();// 求出str的长度
	int index = 1;
	for (int i = 1; i <= len; i++)
	{
		if (i % 3 == 0 && i != len)
		{
			str.insert(index, ",");// 在3的整数倍都添加逗号
			index++;
		}
		index++;
	}
	reverse(str.rbegin(), str.rend());
	cout << str << endl;

	return 0;
}