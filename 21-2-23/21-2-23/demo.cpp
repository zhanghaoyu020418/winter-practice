//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
////
////typedef struct Student
////{
////	int id;
////	char name[20];
////}S;
////
////int main()
////{
////	//S s1;
////	//s1 = { 11, "zhy" };
////	//cout << s1.id << " " << s1.name << endl;
////
////	vector <int> a;
////	string str;
////	a.push_back(123);
////	a.push_back(123);
////	a.push_back(123);
////	cin >> str;
////
////	cout << a.size() << endl;
////	cout << "str.size():> " << str.size() << ' ' << "str.length:> " << str.length() << endl;
////	return 0;
////}
//
////int main ()
////{
////	vector<int> a;
////	a = { 2,4,3,7,5,4 };
////
////	sort(a.begin(), a.end(), [](int a, int b)
////	{
////		return a > b;
////	});
////
////	for (int i = 0; i < a.size(); i++)
////	{
////		cout << a[i] << ' ';
////	}
////	return 0;
////}
//
//int main()
//{
//	vector<vector<int>> a;
//	a = { {1,3}, {2, 5}, {6, 4}, {0, 0} };
//	
//	sort(a.begin(), a.end(), [](auto &a, auto &b) {
//		return a[1] > b[1];
//	});
//
//	//二维vector的遍历，a.size()是行数，每列只有2个元素
//	for (int i = 0; i < a.size(); i++)
//	{
//		for (int j = 0; j < 2; j++)
//			cout << a[i][j] << ' ';
//		cout << endl;
//	}
//	return 0;
//}