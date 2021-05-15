//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <list>
//#include <deque>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//		a[i] = i;
//	sort(a, a + 10, greater<>());
//	for (int i = 0; i < 10; i++)
//		cout << a[i] << endl;
//	cout << endl;
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	for (auto i : v)
//		cout << i << ' ';
//	deque<int> q;
//	for (int i = 10; i >= 0; i--)
//		q.push_back(i);
//	sort(q.begin(), q.end());
//	for (auto i : q)
//		cout << i << ' ';
//	list<int> l;
//	for (int i = 10; i >= 0; i--)
//		l.push_back(i);
//	for (auto i : l)
//		cout << i << ' ';
//	return 0;
//}