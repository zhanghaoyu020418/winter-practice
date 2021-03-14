//#define _CRT_SECURE_NO_WARNINGS 1
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////	int a[10] = { 1, 2, 3, 3, 2, 4, 5, 4, 5 };
////	int res = 0;
////	int sz = sizeof(a) / sizeof(a[0]);
////	for (int i = 0; i < sz; i++)
////		res ^= a[i];
////	printf("%d\n", res);
////	return 0;
////}
//
//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <errno.h>
//#include <cstring>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//struct S
//{
//	char str[20];
//	int age;
//};
//
//int main()
//{
//	S s1 = { "zhy", 19 };
//	FILE * pf = fopen("data.txt", "r+");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//fprintf(stdout, "%s %d\n", s1.str, s1.age);
//	//fputc('z', pf);
//	//int ch = fgetc(stdin);
//	//cout << (char)ch << endl;
//	//fputs("hello world", stdout);
//	//char str[100];
//	//fgets(str, 100, stdin);
//	////cout << str << endl;
//	//stringstream ssin(str);
//	//string s;
//	//int i = 0;
//	//while (ssin >> s)
//	//	cout << s << endl;
//	char str[100];
//	fgets(str, 100, stdin);
//	//cout << str << endl;
//	stringstream ssin(str);
//	string s;
//	while (ssin >> s)
//		cout << s << endl;
//
//	//int t1;
//	//char t2[20];
//	//sscanf(str, "%d %s", &t1, t2);
//	//cout << t1 << ' ' << t2 << endl;
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}