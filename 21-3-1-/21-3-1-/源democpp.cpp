#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

//int str_find()
//{
//	string src = "abcde";
//	string dest = "abc";
//	return (src + src).find(dest) != string::npos;
//}
//
//int main()
//{
//	//string str = src + src;
//	/*if (str.find(dest) != string::npos)
//		cout << 1 << endl;
//	else
//		cout << 0 << endl;*/
//	int a = str_find();
//	cout << a << endl;
//	return 0;
//}

//int main()
//{
//	string str = "abcde";
//	string str_r = "cdeab";
//	for (int i = 0; i < str.size(); i++)
//	{
//		str.push_back(str[0]);
//		str.erase(str.begin());
//		if (str_r == str)
//			cout << "ÕÒµ½ÁË" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string str1 = "abcdef";
//	//ÓÒÒÆ
//	reverse(str1.begin(), str1.end());
//	reverse(str1.begin(), str1.begin() + 2);
//	reverse(str1.begin() + 2, str1.end());
//	cout << "ÓÒÒÆ£º> " << str1 << endl;
//
//	string str2 = "abcdef";
//	reverse(str2.begin() + 2, str2.end());
//	reverse(str2.begin(), str2.begin() + 2);
//	reverse(str2.begin(), str2.end());
//	cout << "×óÒÆ£º> " << str2 << endl;
//	return 0;
//}

int main()
{
	string str = "hello world !";
	int l = 0, r = str.size() - 1;
	while (l < r)
	{
		swap(str[l], str[r]);
		l++;
		r--;
	}
	cout << str << endl;
	return 0;
}