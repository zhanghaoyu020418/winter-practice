//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <limits.h>
//
//using namespace std;
//
//int main()
//{
//	//cout << "INT_MIN " << INT_MIN << endl;
//	//cout << "INT_MAX " << INT_MAX << endl;
//	//int l = INT_MIN, r = INT_MAX;
//	//int mid = l + (r - l) / 2;
//	//cout << mid << endl;
//
//	return 0;
//}
#include <iostream>
#include <cstdio>

using namespace std;

typedef long long LL;

LL d;

int main()
{
	LL a = 1, b = 1, c = 1;
	int cnt = 3;
	while (cnt != 20190324)
	{
		d = (a + b + c) % 10000;
		a = b ;
		b = c ;
		c = d;
		cnt++;
	}
	LL res = d % 10000;
	cout << res << endl;
	return 0;
}