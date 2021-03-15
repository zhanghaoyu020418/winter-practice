//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Student.h"
//
//void Student::baseketball()
//{
//	cout << "我会打篮球" << endl;
//}
//
//void Student::dance()
//{
//	cout << "我会跳舞" << endl;
//}
//
//void Student::rap()
//{
//	cout << "我会rap" << endl;
//}
//
//void Student::sing()
//{
//	cout << "我会唱歌" << endl;
//}
//
//Student::Student(int id, int age, const char*name) :id(id), age(age)
//{
//	this->name = new char[strlen(name) + 1];
//	strcpy(this->name, name);
//}
//
//Student::Student(const Student& Stu)
//{
//	this->age = Stu.age;
//	this->id = Stu.id;
//	this->name = new char[strlen(Stu.name) + 1];//记得要申请空间
//	strcpy(this->name, Stu.name);
//}
//
//Student::~Student()
//{
//	if (name != NULL)
//	{
//		delete[]name;
//		name = NULL;
//	}
//	else
//	{
//		cout << "name为空" << endl;
//	}
//}
//
//
//void Student::show()
//{
//	cout << id << ' ' << age << ' ' << name << endl;
//}