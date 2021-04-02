#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

/*
1）建立一个教师类Teacher，其包含3个私有数据成员：num(工号)、name(姓名)、sex(性别)，
包含2个公有成员函数：带参构造函数（用于对三个数据成员进行初始化），display函数（输出数据成员）。

2）建立一个生日类BirthDate，其包含3个私有数据成员：year(年)、month(月)、day(日)，
包含3个公有成员函数：带参构造函数（用于对三个数据成员进行初始化），display函数（输出数据成员），
change函数（修改生日数据，即将3个数据成员的值改为change函数参数指定的值）。

3）建立一个教授类Professor，它是Teacher类的公有派生类，
在Teacher类的基础上增加了私有数据生日信息birthday（birthday是BirthDate类的对象），
其新增成员函数包含：带参构造函数（对新增的和继承的数据成员初始化），display函数（输出所有数据成员），
changebirth函数（将修改生日信息修改为函数参数指定日期）。

4）main函数中的操作步骤如下：

l  定义Professor类的对象prof1————Professor  prof1(1001,"Wangli",'f',1973,5,10);

l  输出对象prof1的所有数据信息

l  修改prof1的生日信息

l  输出对象prof1的所有数据信息
*/

class Teacher
{
public:
	explicit Teacher(int num, string name, char sex) :num(num), name(name), sex(sex) {}
	void display();

private:
	int num;
	string name;
	char sex;
};

void Teacher::display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

class BirthDate
{
public:
	explicit BirthDate(int y, int m, int d) :year(y), month(m), day(d) {}
	void display();
	void change(int y, int m, int d);
private:
	int year;
	int month;
	int day;
};

void BirthDate::change(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void BirthDate::display()
{
	printf("birthday: %d/%d/%d\n", year, month, day);
}

class Professor:public Teacher
{
public:
	Professor(int num, string name, char sex, int y, int m, int d):
		Teacher(num, name, sex), birthday(y, m, d) {}
	void display();
	void change(int y, int m, int d);
private:
	BirthDate birthday;
};

void Professor::change(int y, int m, int d)
{
	birthday.change(y, m, d);
}

void Professor::display()
{
	Teacher::display();
	birthday.display();
}

int main()
{
	Professor pr(1001, "Wangli", 'f', 1973, 5, 10);
	pr.display();
	cout << endl << endl;
	pr.change(1975, 10, 12);
	pr.display();
	return 0;
}