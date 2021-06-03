#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>

using namespace std;

//int main()
//{
//	int a = 0;
//	const int b = 0;
//	a = b;// 权限的缩小
//	b = a;// 权限的放大，错误
//
//	int t = 0;
//	int *a = &t;
//	const int* b = &t;
//	a = b;// 权限的缩小
//	b = a;// 权限的放大，错误
//
//	return 0;
//}

class A
{
public:
	A(int b = 1):_b(b)
	{
		cout << "A()构造函数" << endl;
	}
private:
	int _a = 2;
	int _b;
};

int main()
{
	A* p = (A*)malloc(sizeof(A));
	new(p)A;
	free(p);
	return 0;
}