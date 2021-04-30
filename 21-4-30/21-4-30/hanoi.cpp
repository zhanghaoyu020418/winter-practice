//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int num;
//
//void fun(int n, string from, string to, string other)
//{
//	if (n == 1)
//	{
//		num++;
//		cout << "move 1 from left to right" << endl;
//		return;
//	}
//	fun(n - 1, from, other, to);// 将n-1个盘子从from到other上
//	num++;
//	// 将第n个盘子从第left到right
//	cout << "move " << n << " from " << from << " to " << to << endl;
//	fun(n - 1, other, to, from);// 将n-1个盘子从other到to上
//}
//
//void hanoi(int n)
//{
//	if (n > 0)
//		fun(n, "left", "right", "mid");
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	hanoi(n);
//	cout << num << endl;
//	return 0;
//}