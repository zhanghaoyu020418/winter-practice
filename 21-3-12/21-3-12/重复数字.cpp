#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a[] = { 1, 2, 2, 3, 4, 1, 4 };
//	int res = 0;
//	int len = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < len; i++)
//	{
//		res ^= a[i];
//	}
//	cout << res << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int check(string& str1, string& str2)
//{
//	for (int i = 0; i < str1.size() || i < str2.size(); i++)
//	{
//		if (str1[i] > 'a') str1[i] -= 32;
//		if (str2[i] > 'a') str2[i] -= 32;
//		if (str1[i] != str2[i] && str1[i] != str2[i] + 32 && str1[i] != str2[i] - 32)
//			return str1[i] - str2[i];
//	}
//	return 0;
//}
//
//int main()
//{
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	int st = check(str1, str2);
//	if (st > 0)
//		cout << ">" << endl;
//	else if (st < 0)
//		cout << "<" << endl;
//	else
//		cout << "=" << endl;
//	return 0;
//}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string str, maxc;
		cin >> str;
		int maxn = -1;
		for (int i = 0, j = 0; j < str.size(); )
		{
			int cnt = 0;
			while (str[i] == str[j] && i < str.size())//将j指针不动，i在后面走
				i++, cnt++;
			if (maxn < cnt) maxn = cnt, maxc = str[i - 1];
			j = i;
		}
		cout << maxc << ' ' << maxn << endl;
	}
	return 0;
}