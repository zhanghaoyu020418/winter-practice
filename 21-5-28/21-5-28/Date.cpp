
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
//		cout << "������ʾ" << endl;
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
//	// �����޲����Ĺ��캯��
//	Complex c1;
//	// �����в����Ĺ��캯��
//	//Complex c2(1, 2);
//	//// ���᷵��һ�����󣬱��������������һ������������
//	//// ��Complex����Ϊ����ֵ��һ����c3�ĺ����ĺ�������
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

	~Complex()// ��������
	{

	}
private:
	int _real; // ʵ��
	int _image;// �鲿
};


class String
{
public:
	String(const char* str = 0)
	{
		if (str)
		{
			_data = new char[strlen(str) + 1];// ����һ��λ�ø�'\0'
			strcpy(_data, str);
		}
		else// ���strΪ���ַ�����Ĭ����'\0'
		{
			_data = new char[1];
			*_data = '\0';
		}
	}

	~String()// ���������ǵ�Ҫ�ͷ��ڴ�
	{
		delete[]_data;
	}
private:
	char* _data;
};

class A
{
private:
	String _str;// �Զ�������Ĭ�ϵ����Լ�����������
	int _a;
	double _b;
	Complex _c;
};

int main()
{
	A a;//
	return 0;
}

