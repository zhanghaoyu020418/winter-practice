#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
	char Name[10]; //����
	int Age; //����
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
	char ClassName[10]; //�༶
	Person Monitor; //�೤
public:
	Student(char *name, int age, char *classname, char *name1, int age1):Person(name1, age1), //Person����Ϊ�̳�����Ҫ����
	Monitor(name, age)// Monitor�Ƕ�������Ҫ����
	{
		strcpy(ClassName, classname);
		cout << "constructor of Student" << endl;
		cout << endl;
	}
		//name1��age1�ǰ೤����Ϣ
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
	cout << "ע�⣺personΪСд�����ʼ���һ���ո�";
	return 0;
}
