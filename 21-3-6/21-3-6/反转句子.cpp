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
//////	getline(cin, str);//��Ϊ�пո�����Ҫ��getline()����ȡ�ַ���
//////
//////	//�Ƚ������ַ�����ת
//////	reverse(str.begin(), str.end());
//////
//////	//�ٽ�ÿ���ɿո���������ַ��������ת
//////	//˫ָ�룬һ��ָ���ַ����Ŀ�ͷ��һ��ָ���ַ����Ľ�β
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
//////�����ַ����ĺ���
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
////	//����
////	gets(arr);//��ȡһ��
////	//����
////	//abc def ghi
////	int len = strlen(arr);
////	//1. ���������ַ���
////	reverse(arr, arr + len - 1);
////	//2. ����ÿһ������
////	char* start = arr;
////	char *end = arr;
////	while (*start)
////	{
////		end = start;
////		while (*end != ' '  && *end != '\0')
////		{
////			end++;
////		}
////		//����һ������
////		reverse(start, end - 1);
////		if (*end == ' ')
////			start = end + 1;
////		else
////			start = end;
////	}
////
////	//���
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