//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//�ֱ���Teacher(��ʦ)���Cadre(�ɲ�)�࣬���ö��ؼ̳з�ʽ��������������������Teacher_Cadre(��ʦ��ɲ�)��Ҫ��:
//
//�� �����������ж��������������䡢�Ա𡢵�ַ���绰�����ݳ�Ա��
//
//�� ��Teacher���л��������ݳ�Աtitle(ְ��)����Cadre���л��������ݳ�Աpost(ְ��)�� 
//��Teacher_Cadre���л��������ݳ�Աwages(����)��
//
//�� �����������е����������䡢�Ա𡢵�ַ���绰�����ݳ�Ա����ͬ�����֣���������Щ���ݳ�Աʱ��ָ��������
//
//�� ��������������Ա�����������ⶨ���Ա������
//
//�� ��������Teacher_Cadre�ĳ�Ա����show�е���Teacher���е�display������
//������������䡢�Ա�ְ�ơ���ַ���绰��Ȼ������cout������ְ���빤�ʡ�
//
//��main�ж���Teacher_Cadre te_ca
//("Wang-li",50,'f',"prof.","president","135 Beijing Road,Shanghai","(021)61234567",1534.5);
//
//*/
//
//class Teacher
//{
//public:
//	explicit Teacher(string n, int a, char s, string ad, string te, string ti):
//		name(n), age(a), sex(s), addr(ad),tele(te), title(ti) {}
//	void display();
//protected:
//	string name;
//	int age;
//	char sex;
//	string addr;
//	string tele;
//	string title;
//};
//
//class Cadre
//{
//public:
//	explicit Cadre(string n, int a, char s, string ad, string te, string p) :
//		name(n), age(a), sex(s), addr(ad), tele(te), post(p) {}
//protected:
//	string name;
//	int age;
//	char sex;
//	string addr;
//	string tele;
//	string post;
//};
//
//
//class Teacher_Cadre:public Teacher, public Cadre
//{
//public:
//	void show();
//	//("Wang-li",50,'f',"prof.","president","135 Beijing Road,Shanghai","(021)61234567",1534.5);
//	Teacher_Cadre(string name, int age, char sex, string title, string post, string addr, string tele, float wage) :
//		Teacher(name, age, sex, addr, tele, title), Cadre(name, age, sex, addr, tele, post), wage(wage) {}
//protected:
//	float wage;
//};
//
////���������䡢�Ա�ְ�ơ���ַ���绰��Ȼ������cout������ְ���빤�ʡ�
//
//void Teacher::display()
//{
//	cout << "name:" << name << endl;
//	cout << "age" << age << endl;
//	cout << "sex:" << sex << endl;
//	cout << "title:" << title << endl;
//	cout << "address:" << addr << endl;
//	cout << "tel:" << tele << endl;
//}
//
//
//void Teacher_Cadre::show()
//{
//	Teacher::display();
//	cout << "post:" << post << endl;
//	cout << "wages:" << wage << endl;
//}
//
//int main()
//{
//	Teacher_Cadre te_ca
//	("Wang-li", 50, 'f', "prof.", "president", "135 Beijing Road,Shanghai", "(021)61234567", 1534.5);
//	te_ca.show();
//	return 0;
//}