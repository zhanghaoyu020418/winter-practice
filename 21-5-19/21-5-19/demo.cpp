#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <iostream>
#include <tuple>
#include <complex>

using namespace std;

int main()
{
	//string str = "4234";
	//str += 1;
	//cout << str << endl;
	tuple<int, float, string> t(1, 2.2, "zhy");
	cout << get<1>(t) << endl;
	int a;
	float b;
	string c;
	tie(a, b, c) = t;
	cout << a << ' ' << b << ' ' <<  c << endl;
	auto t2 = make_tuple(1, 1);
	return 0;
}