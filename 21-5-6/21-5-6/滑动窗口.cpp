//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//const int N = 100010;
//
//int res[N];
//
//int main()
//{
//	int a[] = { 1, 3, -1, -3, 5, 3, 6, 7 };
//	deque<int> dmax;
//	int sz = sizeof(a) / sizeof(a[0]);
//	int w = 3;
//
//
//	int index = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		while (!dmax.empty() && a[dmax.back()] <= a[i])
//			dmax.pop_back();
//		dmax.push_back(i);
//		if (dmax.front() == i - w)
//			dmax.pop_front();
//		if (i >= w - 1)
//			res[index++] = a[dmax.front()];
//	}
//	for (int i = 0; i < index; i++)
//		cout << res[i] << ' ';
//	cout << endl;
//	return 0;
//}