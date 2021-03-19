#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

class stu
{
	int id;
	char *name;
public:
	stu(int id, const char* na);
	friend ostream& operator << (ostream& out, stu& t);
	~stu();
	//����=
	stu& operator = (stu& s)
	{
		//��Ҫ�ж�name֪��Ϊ�գ����Ϊ����Ҫ�ͷ�ԭ�ȵ��ڴ�Ȼ�󿪱��µ��ڴ�
		if (this->name != NULL)
		{
			delete[] name;
			name = NULL;
		}
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
		return *this;
	}
};

stu::~stu()
{
	if (this->name != NULL)
	{
		delete[] this->name;
		this->name = NULL;
	}
}

stu::stu(int id, const char* na):id(id)
{
	this->name = new char[strlen(na) + 1];
	strcpy(name, na);
}

ostream& operator << (ostream& out, stu& t)
{
	out << t.id << ' ' << t.name;
	return out;
}


int main()
{
	stu s(1, "zhy");
	cout << s << endl;
	stu s1(2, "zhyzhy");
	s1 = s;
	cout << s1 << endl;

	return 0;
}

