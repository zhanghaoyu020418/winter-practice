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

	// ����Ȩ����С
	// ���ǲ���Ȩ�޷Ŵ�

	int a = 10;
	const int b = 20;
	a = b;
	b = a;   // const int ! int Ȩ����С

	int a = 1;
	int b = 1;
	int* t1 = &a;
	const int* t2 = &b;
	t1 = t2; // int* ! const int* Ȩ�޷Ŵ�
	t2 = t1;
	return 0;
}

//Date tmp(*this);
//tmp -= day;
//return tmp;