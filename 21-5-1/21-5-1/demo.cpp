//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int fun(int i)// 欧拉信封问题
//{
//	if (i == 1)
//		return 0;
//	if (i == 2)
//		return 1;
//	return (fun(i - 1) + fun(i - 2)) * (i - 1);
//}
//
//int main()
//{
//	cout << fun(3) << endl;
//	cout << fun(4) << endl;
//	cout << fun(10) << endl;
//	return 0;
//}