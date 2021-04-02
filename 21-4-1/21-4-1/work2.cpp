#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

/*
1������һ����ʦ��Teacher�������3��˽�����ݳ�Ա��num(����)��name(����)��sex(�Ա�)��
����2�����г�Ա���������ι��캯�������ڶ��������ݳ�Ա���г�ʼ������display������������ݳ�Ա����

2������һ��������BirthDate�������3��˽�����ݳ�Ա��year(��)��month(��)��day(��)��
����3�����г�Ա���������ι��캯�������ڶ��������ݳ�Ա���г�ʼ������display������������ݳ�Ա����
change�������޸��������ݣ�����3�����ݳ�Ա��ֵ��Ϊchange��������ָ����ֵ����

3������һ��������Professor������Teacher��Ĺ��������࣬
��Teacher��Ļ�����������˽������������Ϣbirthday��birthday��BirthDate��Ķ��󣩣�
��������Ա�������������ι��캯�����������ĺͼ̳е����ݳ�Ա��ʼ������display����������������ݳ�Ա����
changebirth���������޸�������Ϣ�޸�Ϊ��������ָ�����ڣ���

4��main�����еĲ����������£�

l  ����Professor��Ķ���prof1��������Professor  prof1(1001,"Wangli",'f',1973,5,10);

l  �������prof1������������Ϣ

l  �޸�prof1��������Ϣ

l  �������prof1������������Ϣ
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