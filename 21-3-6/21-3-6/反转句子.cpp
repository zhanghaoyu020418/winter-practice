////#define _CRT_SECURE_NO_WARNINGS 1
//////#include <iostream>
//////#include <string>
//////
//////using namespace std;
//////
//////int main()
//////{
//////	string str1, str2;
//////	cin >> str1;
//////	while (cin >> str2)
//////	{
//////		str1.insert(0, " ");
//////		str1.insert(0, str2);
//////	}
//////	cout << str1 << endl;
//////	return 0;
//////}
////
//////#include <iostream>
//////#include <string>
//////#include <algorithm>
//////
//////using namespace std;
//////
//////int main()
//////{
//////	string str;
//////	getline(cin, str);//因为有空格所以要用getline()来读取字符串
//////
//////	//先将整个字符串反转
//////	reverse(str.begin(), str.end());
//////
//////	//再将每个由空格隔开的子字符串逐个反转
//////	//双指针，一个指向字符串的开头，一个指向字符串的结尾
//////
//////	for (int i = 0, j = 0; i < str.size() + 1; i++)
//////	{
//////		if (str[i] == ' ' || str[i] == '\0')
//////		{
//////			reverse(str.begin() + j, str.begin() + i);
//////			i++;
//////			j = i;
//////		}
//////	}
//////
//////	cout << str << endl;
//////	return 0;
//////}
////
////#include <cstdio>
////#include <cstring>
////#include <iostream>
////
////using namespace std;
////
//////逆序字符串的函数
////void reverse(char*left, char* right)
////{
////	while (left < right)
////	{
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////}
////
////int main()
////{
////	char arr[100] = { 0 };
////	//输入
////	gets(arr);//读取一行
////	//处理
////	//abc def ghi
////	int len = strlen(arr);
////	//1. 逆序整个字符串
////	reverse(arr, arr + len - 1);
////	//2. 逆序每一个单词
////	char* start = arr;
////	char *end = arr;
////	while (*start)
////	{
////		end = start;
////		while (*end != ' '  && *end != '\0')
////		{
////			end++;
////		}
////		//逆序一个单词
////		reverse(start, end - 1);
////		if (*end == ' ')
////			start = end + 1;
////		else
////			start = end;
////	}
////
////	//输出
////	printf("%s\n", arr);
////
////	return 0;
////}
//
////#include <iostream>
////#include <algorithm>
////#include <string>
////
////using namespace std;
////
////int main()
////{
////	string str;
////	getline(cin, str);
////	reverse(str.begin(), str.end());
////	for (int i = 0, j = 0; i <= str.size(); i++)
////	{
////		if (str[i] == ' ' || str[i] == '\0')
////		{
////			reverse(str.begin() + j, str.begin() + i);
////			i++;
////			j = i;
////		}
////	}
////	cout << str << endl;
////	return 0;
////}
//
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////int main()
////{
////	string str1, str2;
////	cin >> str1;
////	while (cin >> str2)
////	{
////		str1.insert(0, " ");
////		str1.insert(0, str2);
////	}
////	cout << str1 << endl;
////	return 0;
////}
//
//
//
////#include <cstdio>
////#include <cstring>
////#include <iostream>
////
////using namespace std;
////
////void _reverse(char* l, char* r)
////{
////	while (l < r)
////	{
////		char tmp = *l;
////		*l = *r;
////		*r = tmp;
////		l++;
////		r--;
////	}
////}
////
////int main()
////{
////	char arr[110] = "I Like Beijing.";
////	gets(arr);
////	cout << strlen(arr);
////	_reverse(arr, arr + strlen(arr) - 1);
////	char *start = arr;
////	char *end = arr;
////	while (*start)
////	{
////		while (*end != ' ' && *end != '\0')
////			end++;
////		_reverse(start, end - 1);
////		if (*end == ' ')
////			start = end + 1;
////		else if(*end == '\0')
////			start = end;
////		end++;
////	}
////	printf("%s\n", arr);
////	return 0;
////}
//
//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//
//void _reverse(char *l, char *r)
//{
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	char arr[100] = "zhang hao yu.";
//	_reverse(arr, arr + strlen(arr) - 1);
//	char * start = arr;
//	char * end = arr;
//	while (*start)
//	{
//		while (*end != ' ' && *end != '\0')
//			end++;
//		_reverse(start, end - 1);
//		if (*end == '\0')
//			start = end;
//		else if (*end == ' ')
//			start = end + 1;
//		end++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}