
#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
//
//
//class Date
//{
//public:
//	void PrintDate()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Show()
//	{
//		cout << "日期显示" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date* p = nullptr;
//	p->PrintDate();
//	p->Show();
//}

//class A
//{
//public:
//	A()
//	{
//		_a = 10;
//	}
//private:
//	int _a;
//};



//int main()
//{
//	// 调用无参数的构造函数
//	Complex c1;
//	// 调用有参数的构造函数
//	//Complex c2(1, 2);
//	//// 不会返回一个对象，编译器会把它当做一个函数的声明
//	//// 以Complex对象为返回值的一个叫c3的函数的函数声明
//	//Complex c3();
//	return 0;
//}

//int main()
//{
//	Complex c;
//	return 0;
//}

class Complex
{
public:

	Complex(int real = 0, int image = 0)
	{
		_real = real;
		_image = image;
	}

	~Complex()// 析构函数
	{

	}
private:
	int _real; // 实部
	int _image;// 虚部
};


class String
{
public:
	String(const char* str = 0)
	{
		if (str)
		{
			_data = new char[strlen(str) + 1];// 留下一个位置给'\0'
			strcpy(_data, str);
		}
		else// 如果str为空字符串就默认是'\0'
		{
			_data = new char[1];
			*_data = '\0';
		}
	}

	~String()// 析构函数记得要释放内存
	{
		delete[]_data;
	}
private:
	char* _data;
};

class A
{
private:
	String _str;// 自定义数据默认调用自己的析构函数
	int _a;
	double _b;
	Complex _c;
};

int main()
{
	A a;//
	return 0;
}

