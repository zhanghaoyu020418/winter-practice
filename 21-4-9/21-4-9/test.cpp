#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

class Teacher
{
protected:
	int num;
	string name;
	char sex;
public:
	Teacher(int n, string na, char s) :num(n), name(na), sex(s) {}
	virtual void display();
};

class BirthDate
{
public:
	BirthDate(int y, int m, int d) :year(y), month(m), day(d) {}
	void display();
	void change(int y, int m, int d);
protected:
	int year;
	int month;
	int day;
};

class Professor: public Teacher
{
	BirthDate birthdate;
public:
	Professor(int num, string name, char sex, int year, int month, int day) :
		Teacher(num, name, sex), birthdate(year, month, day) {}
	void display();
	void changebirth(int y, int m, int d);
};

void Professor::changebirth(int y, int m, int d)
{
	birthdate.change(y, m, d);
}

void Professor::display()
{
	Teacher::display();
	birthdate.display();
}

void BirthDate::change(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void BirthDate::display()
{
	cout << "birthday: ";
	printf("%d/%d/%d\n", year, month, day);
}

void Teacher::display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}



int main()
{
	Professor  prof1(1001, "Wangli", 'f', 1973, 5, 10);
	prof1.display();
	prof1.changebirth(1975, 10, 12);
	cout << endl << endl;
	prof1.display();
	return 0;
}