#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;


//����ָ�������й�ָ��
class stu
{
public:

	stu(int i, const char * n) :i(i)
	{
		this->name = new char[strlen(n) + 1];
		strcpy(this->name, n);
	}

	int i;
	char * name;
	void fun()
	{
		cout << "stu�еĺ���" << endl;
	}
};

class smartpointer
{
	stu* ps;
public:
	smartpointer(stu* wps)
	{
		this->ps = wps;
	}
	~smartpointer()
	{
		cout << "����ָ���ͷ�" << endl;
		if (ps != NULL)
		{
			delete[] ps;
			ps = NULL;
		}
	}
	stu* operator-> ()//ͨ������ָ��������stu��ָ������
	{
		return ps;
	}
	stu& operator* ();
};

stu& smartpointer::operator*()
{
	return *ps;
}

int main()
{
	{
		smartpointer psp(new stu(1, "zhy"));
		cout << psp->i << ' ' << psp->name << endl;
		cout << (*psp).i << ' ' << (*psp).name << endl;
	}
	return 0;
}