#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
	char Name[10]; //姓名
	int Age; //年龄
public:
	Person(char* name, int age)
	{
		strcpy(Name, name);
		Age = age;
		cout << "constructor of person " << Name << endl;
		cout << endl;
	}
	~Person()
	{
		cout << "deconstructor of person " << Name << endl;
		cout << endl;
	};
};

class Student: public Person
{
	char ClassName[10]; //班级
	Person Monitor; //班长
public:
	Student(char *name, int age, char *classname, char *name1, int age1):Person(name1, age1), //Person是因为继承所以要构造
	Monitor(name, age)// Monitor是对象所以要构造
	{
		strcpy(ClassName, classname);
		cout << "constructor of Student" << endl;
		cout << endl;
	}
		//name1和age1是班长的信息
	~Student() {
		cout << "deconstructor of Student" << endl;
		cout << endl;
	}
};

int main()
{
	char name1[20], name2[20];
	char classname[20];
	int age1, age2;
	cin >> name1 >> age1 >> classname >> name2 >> age2;
	
	Student *s = new Student(name2, age2, classname, name1, age1);
	delete s;
	cout << "注意：person为小写，单词间有一个空格。";
	return 0;
}
