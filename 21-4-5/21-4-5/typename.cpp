#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;


template <typename T1, typename T2>
void fun(T1 a, T2 b)
{
	cout << "����ģ��" << endl;
}

template <typename T>
void fun(T a, T b)
{
	cout << "ģ��" << endl;
}



int main()
{
	fun<int>(1, 'a');
	return 0;
}