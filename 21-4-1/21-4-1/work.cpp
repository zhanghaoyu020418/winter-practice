//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//分别定义Teacher(教师)类和Cadre(干部)类，采用多重继承方式由这两个类派生出新类Teacher_Cadre(教师兼干部)。要求:
//
//① 在两个基类中都包含姓名、年龄、性别、地址、电话等数据成员。
//
//② 在Teacher类中还包含数据成员title(职称)，在Cadre类中还包含数据成员post(职务)， 
//在Teacher_Cadre类中还包含数据成员wages(工资)。
//
//③ 对两个基类中的姓名、年龄、性别、地址、电话等数据成员用相同的名字，在引用这些数据成员时，指定作用域。
//
//④ 在类体中声明成员函数，在类外定义成员函数。
//
//⑤ 在派生类Teacher_Cadre的成员函数show中调用Teacher类中的display函数，
//输出姓名、年龄、性别、职称、地址、电话，然后再用cout语句输出职务与工资。
//
//在main中定义Teacher_Cadre te_ca
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
////姓名、年龄、性别、职称、地址、电话，然后再用cout语句输出职务与工资。
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