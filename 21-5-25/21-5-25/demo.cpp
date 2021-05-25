#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector<vector<int> > ans;
	//vector<int> res;
	//for (int i = 1; i <= 10; i++)
	//	res.push_back(i * 10);
	//ans.push_back(res);
	const int a = 10;
	int b = 20;
	//a = b;// 权限的缩小
	b = a;// 权限的扩大
	vector<int> a(10);
	cout << a[10] << endl;
	cout << b << endl;
	b = 20;
	cout << b << endl;
	return 0;
}