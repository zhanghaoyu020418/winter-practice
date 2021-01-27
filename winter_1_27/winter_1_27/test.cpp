#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;


//void fun1 (int a)
//{}
//
//void fun1(int a, int b, int c)
//{}
//
//int fun2(int a, char b)
//{}
//
//int fun2(char a, int b)
//{}
//
//int fun(int a)
//{}
//
//int fun(float a)
//{}
//
//int fun(int a, int b =1, int c =10)
//{}


int Add(int x, int y = 1);

int main()
{

	int ret = Add(1);

	cout << ret << endl;

	return 0;
}

int Add(int x, int y)
{
	return x + y;
}


	//int a = 10;
	//int b = 20;

	//int ret = Add(a, b);

	//int studentnumber = 100;
	//int &sn = studentnumber;

	//cout << &studentnumber << endl;
	//cout << &sn << endl;



void fun(int &n)
{
	n = 300;
}












//bool arr = true;
	//arr = false;
	//arr = 1;
	//arr = 0;