#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class stu
{
	int id;
	string name;
public:
	stu(int id, string name) :id(id), name(name) {};
	//stu operator+ (const stu& s)
	//{
	//	stu S(id + s.id, name + s.name);
	//	return S;
	//}
	//friend stu operator+ (stu& s1, stu& s2);//使用friend来使得类外可以使用private的数据成员
	//void fun()
	//{
	//	cout << id << ' ' << name << endl;
	//}
	int operator+ ( stu& s)
	{
		stu S(id + s.id, name + s.name);
		return S.id;
	}
};

//stu operator+ ( stu& s1,  stu& s2)
//{
//	stu s3(s1.id + s2.id, s1.name + s2.name);
//	return s3;
//}
//
//int main()
//{
//	stu s1(1, "zhy");
//	stu s2(2, "hhh");
//	stu s3(2, "hhh");
//	//stu s4 = s3.operator+(s1 + s3);//这样写会报错，因为int + stu是不能相加的
//	return 0;
//}

class A
{
	
public:
	int i;
	//前置++
	A& operator++()
	{
		this->i ++;
		return *this;
	}
	//后置++
	A operator++(int)//这是就不能用&了，因为tmp是局部变量，&的时候，tmp已经回收了
	{
		A tmp = *this;
		this->i ++;
		return tmp;
	}
	//重载=
	void  operator = ( const A & c)
	{
		this->i = c.i;
	}
	void fun()
	{
		cout << i << endl;
	}

	friend ostream& operator<< (ostream& out, A& a);
};

ostream& operator<< (ostream& out, A& a)
{
	out << a.i;
	return out;
}

istream & operator >> (istream& in, A& a)
{
	in >> a.i;
	return in;
}

int main()
{
	//A a1, a2;
	//a2 = (a1++);
	//cout << a2.i << endl;
	//cout << a1.i << endl;
	A a3;
	a3.i = 18;
	cin >> a3;
	cout << a3 << endl;

	return 0;
}

