#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>

using namespace std;

//int main()
//{
//	int a = 0;
//	const int b = 0;
//	a = b;// Ȩ�޵���С
//	b = a;// Ȩ�޵ķŴ󣬴���
//
//	int t = 0;
//	int *a = &t;
//	const int* b = &t;
//	a = b;// Ȩ�޵���С
//	b = a;// Ȩ�޵ķŴ󣬴���
//
//	return 0;
//}

class A
{
public:
	A(int b = 1):_b(b)
	{
		cout << "A()���캯��" << endl;
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