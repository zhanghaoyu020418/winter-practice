#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		char a;
		cin >> a;
		str += a;
	}

	string res;
	int l = 0, r = str.size() - 1;
	while (l <= r)
	{
		if (str[l] < str[r])
		{
			res = res + str[l];
			l++;
		}
		else if (str[l] > str[r])
		{
			res = res + str[r];
			r--;
		}
		else
		{
			int i = l;
			int j = r;
			while (str[i] == str[j] && i <= j)
				i++, j--;
			if (str[i] < str[j])
				res = res + str[l], l ++;
			else
				res = res + str[r], r --;
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i];
		if (i == 80)
		{
			i = 0;
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}

//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 2000
//using namespace std;
//
//char cow[MAX];
//
//void solve() {
//	int n, l, r, line = 0;
//	bool left;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> cow[i];
//	}
//	l = 0; r = n - 1;
//	while (l <= r) {
//		left = true;
//		for (int i = 0; l + i <= r; i++) {
//			if (cow[l + i] < cow[r - i])break;
//			else if (cow[l + i] > cow[r - i]) { left = false; break; }
//		}
//		if (left)putchar(cow[l++]);
//		else putchar(cow[r--]);
//		line++;
//		if (line == 80) { line = 0; putchar('\n'); }
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	solve();
//	//system("pause");
//	return 0;
//}