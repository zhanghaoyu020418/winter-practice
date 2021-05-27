#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	//if (i > 0)
	//	cout << 1 << endl, i--;
	//using zhy = int;
	//for (zhy i = 0; i < 9; i++)
	//	cout << i << endl;
	//decltype((i)) a = i;
	//a += 10;
	//cout << i << endl;

	// 可以权限缩小
	// 但是不能权限放大

	int a = 10;
	const int b = 20;
	a = b;
	b = a;   // const int ! int 权限缩小

	int a = 1;
	int b = 1;
	int* t1 = &a;
	const int* t2 = &b;
	t1 = t2; // int* ! const int* 权限放大
	t2 = t1;
	return 0;
}

//Date tmp(*this);
//tmp -= day;
//return tmp;