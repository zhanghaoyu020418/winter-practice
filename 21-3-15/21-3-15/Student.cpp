//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Student.h"
//
//void Student::baseketball()
//{
//	cout << "�һ������" << endl;
//}
//
//void Student::dance()
//{
//	cout << "�һ�����" << endl;
//}
//
//void Student::rap()
//{
//	cout << "�һ�rap" << endl;
//}
//
//void Student::sing()
//{
//	cout << "�һᳪ��" << endl;
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
//	this->name = new char[strlen(Stu.name) + 1];//�ǵ�Ҫ����ռ�
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
//		cout << "nameΪ��" << endl;
//	}
//}
//
//
//void Student::show()
//{
//	cout << id << ' ' << age << ' ' << name << endl;
//}