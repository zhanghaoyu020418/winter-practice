//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Person
//{
//protected:
//	char Name[10];
//	char Sex;
//	int Age;
//public:
//	void Register(char *name, int age, char sex);
//	virtual void ShowMe() = 0;
//};
//
//class Teacher: public Person
//{
//	char Dept[20];
//	int Salary;
//public:
//	Teacher(char* name, int age, char sex, char dept[20], int sal);
//	virtual void ShowMe();
//};
//
//class Student: public Person
//{
//	char ID[12];
//	char Class[20];
//public:
//	Student(char *name, int age, char sex, char *id, char *classid); 
//	virtual void ShowMe();
//};
//
//
//void Student::ShowMe() {
//	cout << "ѧ�� " << ID << endl;
//	cout << "���� " << Name << endl;
//	cout << "�Ա� ";
//	if (Sex == 'f')
//		cout << "Ů" << endl;
//	else
//		cout << "��" << endl;
//	cout << "���� " << Age << endl;
//	cout << "�༶ " << Class << endl;
//}
//
//void Teacher::ShowMe() {
//	
//	cout << "���� " << Name << endl;
//	if (Sex == 'm')
//		cout << "�Ա� ��" << endl;
//	else
//		cout << "�Ա� Ů" << endl;
//	cout << "���� " << Age << endl;
//	cout << "������λ " << Dept << endl;
//	cout << "��н " << Salary << endl;
//}
//
//Teacher::Teacher(char* name, int age, char sex, char* dept, int sal) {
//	Register(name, age, sex);
//	strcpy(Dept, dept);
//	Salary = sal;
//}
//
//
//void Person::Register(char *name, int age, char sex) {
//	strcpy(Name, name);
//	Age = age;
//	Sex = sex;
//}
//
//Student::Student(char *name, int age, char sex, char *id, char *classid) {
//	Register(name, age, sex);
//	strcpy(ID, id);
//	strcpy(Class, classid);
//}
//
//int main()
//{
//	char name1[20];
//	int age1;
//	char sex1;
//	char dept[20];
//	int sal;
//
//	char name2[20];
//	int age2;
//	char sex2;
//	char ID[12];
//	char Class[20];
//
//	cin >> name1 >> age1 >> sex1 >> dept >> sal;
//	cin >> name2 >> age2 >> sex2 >> ID >> Class;
//
//	Teacher t(name1, age1, sex1, dept, sal);
//	t.ShowMe();
//
//
//	
//	Student s(name2, age2, sex2, ID, Class);
//	s.ShowMe();
//
//	return 0;
//}