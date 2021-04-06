//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Person
//{
//	char Name[20];
//	char Sex;
//	int Age;
//public:
//	void Register(char *name, int age, char sex);
//	void ShowMe();
//};
//
//class Student: public Person
//{
//	int Number;
//	char ClassName[20];
//public:
//	void RegisterStu(char *classname, int number, char *name, int age, char sex);
//	void ShowStu(); //显示数据成员信息，并使用基类的ShowMe
//};
//
//void Person::Register(char *name, int age, char sex) {
//	strcpy(Name, name);
//	Age = age;
//	Sex = sex;
//}
//
//void Student::RegisterStu(char *classname, int number, char *name, int age, char sex) {
//	Register(name, age, sex);
//	strcpy(ClassName, classname);
//	Number = number;
//}
//
//void Person::ShowMe() {
//	cout << Name << ' ' << Age << ' ' << Sex << endl;
//}
//
//void Student::ShowStu() {
//	cout << Number << ' ' << ClassName << ' ';
//	ShowMe();
//}
//
//int main()
//{
//	char classname[20];
//	int number;
//	char name[20];
//	int age;
//	char sex;
//	cin >> classname >> number >> name >> age >> sex;
//	Student s;
//	s.RegisterStu(classname, number, name, age, sex);
//	s.ShowStu();
//	s.ShowMe();
//	return 0;
//}