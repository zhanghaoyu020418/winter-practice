//#define _CRT_SECURE_NO_WARNINGS 1
////////#include <iostream>
////////#include <string>
////////
////////using namespace std;
////////
////////int main()
////////{
////////	string str;
////////	getline(cin, str);
////////	int maxn = 0;
////////	int maxi = 0;
////////	int i = 0, j = 0;
////////	for(;i < str.size(); i ++)
////////	{
////////		int cnt = 0;
////////		while (str[i] != ' ' && str[i] != '.')
////////		{
////////			cnt++;
////////			i++;
////////		}
////////		if (cnt > maxn)
////////		{
////////			maxn = cnt;
////////			maxi = j;
////////		}
////////		j = i + 1;
////////	}
////////
////////	while (str[maxi] != ' ' && str[maxi] != '.')
////////	{
////////		cout << str[maxi];
////////		maxi++;
////////	}
////////	return 0;
////////}
//////
//////#include <iostream>
//////#include <string>
//////#include <algorithm>
//////
//////using namespace std;
//////
//////int main()
//////{
//////	string str;
//////	getline(cin, str);
//////	reverse(str.begin(), str.end());
//////
//////	for (int i = 0; i < str.size(); i++)
//////	{
//////		int j = i;
//////		while (str[j] != ' ' && str[j] != '\0') j++;
//////		reverse(str.begin() + i, str.begin() + j);
//////		i = j;
//////	}
//////	cout << str << endl;
//////	return 0;
//////}
////
//////#include <iostream>
//////#include <string>
//////
//////using namespace std;
//////
//////int res;
//////
//////void turn(char* c)
//////{
//////	if (*c == '*') *c = 'o';
//////	else *c = '*';
//////}
//////
//////int main()
//////{
//////	/*string str1, str2;
//////	cin >> str1 >> str2;
//////	for (int i = 0; i < str1.size() - 1; i++)
//////	{
//////		if (str1[i] != str2[i])
//////		{
//////			res++;
//////			turn(&str1[i]);
//////			turn(&str1[i + 1]);
//////		}
//////	}
//////	cout << res << endl;*/
//////	char a[6][6];
//////	for (int i = 0; i < 5; i++) cin >> a[i];
//////	for (int i = 0; i < 5; i++)
//////		for (int j = 0; j < 5; j++)
//////			cout << a[i][j] << ' ';
//////	return 0;
//////}
////
////
////#include <iostream>
////#include <algorithm>
////
////
////using namespace std;
////
//////int main()
//////{
//////	int a[10] = { 1, 7, 3,3,5, 6, 7, 4, 9, 1 };
//////	int sz = sizeof(a) / sizeof(a[0]);
//////	//冒泡排序
//////	for (int i = 0; i < sz - 1; i++)
//////		for (int j = 0; j < sz - 1 - i; j++)
//////			if (a[j] > a[j + 1])
//////				swap(a[j], a[j + 1]);
//////	//忘了这是啥排序了
//////	for (int i = 0; i < sz; i++)
//////		for (int j = 0; j < i; j++)
//////			if (a[i] > a[j])
//////				swap(a[i], a[j]);
//////
//////	for (int i = 0; i < 10; i++)
//////			cout << a[i] << ' ';
//////	return 0;
//////}
////
////int main()
////{
////	int a[10] = { 1,3,5,7,9,2,4,6,8,10 };
////	int sz = sizeof(a) / sizeof(a[0]);
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = 0; j < sz - 1 - i; j++)
////			if (a[j] > a[j + 1])
////				swap(a[j], a[j + 1]);
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] < a[j])
////				swap(a[i], a[j]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = 0; j < sz - 1 - i; j++)
////			if (a[j] > a[j + 1])
////				swap(a[j], a[j + 1]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = 0; j < sz - 1 - i; j++)
////			if (a[j] > a[j + 1])
////				swap(a[j], a[j + 1]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i], a[j])
////				swap(a[i], a[j]);
////
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = i + 1; j < sz; j++)
////			if (a[i] > a[j])
////				swap(a[i], a[j]);
////
////	for (int i = 0; i < sz - 1; i++)
////		for (int j = 0; j < sz - 1 - i; i++)
////			if (a[j] > a[j + 1])
////				swap(a[j], a[j + 1]);
////
////
////	int l = 0, r = 1e9;
////	while (l < r)
////	{
////		int mid = l + r >> 1;
////		if (check(mid)) r = mid;
////		else l = mid + 1;
////	}
////
////	int l = 0, r = 1e9;
////	while (l < r)
////	{
////		int mid = l + r + 1 >> 1;
////		if (check(mid)) l = mid;
////		else r = mid - 1;
////	}
////
////	int left = 0, right = 0;
////	while (left < right)
////	{
////		int mid = left + (right - left) / 2;
////		if (a[mid] == val) return mid;
////		if (a[mid] > val) right = mid;
////		else if (a[mid] < val) left = mid;
////	}
////	return 0;
////}
//
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////#include <string>
////
////using namespace std;
////
////string s, s1, s2;
////
////int main()
////{
////	
////	//getchar();
////
////	//int len = s.size();
////	//int l = 300, r = -300;
////	//for (int i = 0, j = len - 1, k = 0; i < j; i++, j--, k++)
////	//{
////	//	if (s[k] == s1[i]) l = min(l, k);
////	//	if (s[k] == s2[i]) r = max(r, k);
////	//}
////	//cout << r - l - 2 << endl;
////	string s[20];
////	cin >> s[1];
////	cout << s[1] << endl;
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1.size() < s2.size()) swap(s1, s2);//因为不知道哪个是子串，哪个是主串，所以串长的就是主串
//
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1 = s1.substr(1) + s1[0];
//		cout << s1 << endl;
//		for (int j = 0; j + s2.size() <= s1.size(); j++)//枚举子串的起始位置
//		{
//			int k = 0;
//			for (; k < s2.size(); k++)
//				if (s1[j + k] != s2[k])
//					break;
//			if (k == s2.size())
//			{
//				cout << "true" << endl;
//				return 0;
//			}
//		}
//	}
//	cout << "false" << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cstring>
//#include <sstream>
//
//using namespace std;
//
//int main()
//{
//	
//	//while (cin >> str, str != ".")
//	//{
//	//	int len = str.size();
//	//	for (int n = len; n >= 0; n--)
//	//		//if (len % n == 0)
//	//		{
//	//			int m = len / n;
//	//			string s = str.substr(0, m);
//	//			string res;
//	//			for (int i = 0; i < n; i++) res += s;
//	//			if (res == str)
//	//			{
//	//				cout << n << endl;
//	//				break;
//	//			}
//	//		}
//	//}
//	//string str2;
//	//cin >> str1 >> str2;
//	//int t = str2.find(str1);
//	//cout << t << endl;
//	string str1;
//	getline(cin, str1);
//	stringstream ssin(str1);
//	int a;
//	string str;
//	double b;
//	ssin >> a >> str >> b;
//	cout << a << ' ' << str << ' ' << b << endl;
//
//	return 0;
//}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s, s1, s2;

	char c;
	while (cin >> c, c != ',') s += c;
	while (cin >> c, c != ',') s1 += c;
	while (cin >> c) s2 += c;

	if (s.size() < s1.size() || s.size() < s2.size()) cout << "-1" << endl;

	int l = 0;
	while (l + s1.size() <= s.size())
	{
		int k = 0;
		while (k < s1.size())
		{
			if (s[k + l] != s1[k]) break;
			k++;
		}
		if (k == s1.size()) break;
		l++;
	}

	int r = s.size() - s2.size();
	while (r >= 0)
	{
		int k = 0;
		while (k < s2.size())
		{
			if (s[k + r] != s[k]) break;
			k++;
		}
		if (k == s2.size()) break;
		r--;
	}

	l += s1.size() - 1;
	if (l >= r) cout << "-1" << endl;

	cout << r - l - 1 << endl;

	return 0;
}