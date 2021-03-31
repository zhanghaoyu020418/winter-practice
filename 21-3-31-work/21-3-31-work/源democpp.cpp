//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class Employee
//{
//public:
//	Employee(int i, string n, int b) :id(i), name(n), basic_salary(b) {}
//protected:
//	int id;
//	string name;
//	int basic_salary;
//};
//
//class Teacher:public Employee
//{
//public:
//	Teacher(int i, string n, int b, int h) : Employee(i, n, b), hour(h) {}
//	void deal();
//	void show();
//private:
//	int hour;
//	int money;
//};
//
//void Teacher::deal()
//{
//	//教师月工资 = 基本工资basic_salary + 课时hour * 10
//	money = basic_salary + hour * 10;
//}
//
//void Teacher::show()
//{
//	// Teacher: 102 lilei with salary 5000
//	cout << "Teacher: " << id << ' ' << name << " with salary " << money << endl;
//}
//
//class Staff:public Employee
//{
//public:
//	Staff(int i, string n, int ba, int bo) :Employee(i, n, ba), bonus(bo) {}
//	void deal();
//	void show();
//private:
//	int bonus;
//	int money;
//};
//
//void Staff::deal()
//{
//	money = basic_salary + bonus;
//}
//
//void Staff::show()
//{
//	cout << "Staff: " << id << ' ' << name << " with salary " << money << endl;
//}
//
//int main()
//{
//	Staff s(101, "hanmei", 4000, 6000);
//	s.deal();
//	s.show();
//	Teacher t(102, "lilei", 4000, 100);
//	t.deal();
//	t.show();
//	return 0;
//}