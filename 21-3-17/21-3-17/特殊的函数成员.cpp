////#define _CRT_SECURE_NO_WARNINGS 1
////#include <iostream>
////
////using namespace std;
////
//////class CStu
//////{
//////public:
//////	CStu(int num):i(num)
//////	{
//////		a = 10;
//////	}
//////	static void fun()
//////	{
//////		cout << a << endl;
//////		//cout << i << endl;
//////	}
//////
//////	static int a;
//////	int i;
//////};
////
//////int CStu::a;
//////
//////class CStudent
//////{
//////	CStudent() {};
//////	static CStudent* stu;
//////	CStudent(const CStudent& stu) {};
//////public:
//////	static CStudent* getstu()
//////	{
//////		if (stu == NULL)
//////			stu = new CStudent;
//////		return stu;
//////	}
//////	void fun()
//////	{
//////		cout << "单例模式只有我这一个对象，这个对象还是由一个指针指向的" << endl;
//////	}
//////};
//////
//////CStudent* CStudent::stu = NULL;
//////
//////void test()
//////{
//////	CStudent *stu =  CStudent::getstu();
//////	stu->fun();
//////	delete stu;
//////	stu = NULL;
//////}
////
//////
//////class Student
//////{
//////	static Student* stu;
//////	Student(const Student& stu) {};
//////	Student() {};
//////public:
//////	static Student*  getstu()
//////	{
//////		if (stu == NULL)
//////			stu = new Student;
//////		return stu;
//////	}
//////	void fun()
//////	{
//////		cout << "hehe:" << endl;
//////	}
//////};
//////
//////Student* Student::stu = NULL;
////
//////class Student
//////{
//////	static Student* stu;
//////	Student() {};
//////	Student(const Student& stu) {};
//////public:
//////	static Student* getstu()
//////	{
//////		if (stu == NULL)
//////			stu = new Student;
//////		return stu;
//////	}
//////	void fun()
//////	{
//////		cout << "我是function" << endl;
//////	}
//////	~Student()
//////	{
//////		if (stu != NULL)
//////		{
//////			delete stu;
//////			stu = NULL;
//////		}
//////	}
//////};
//////
//////Student* Student::stu = NULL;
////
////class Student
////{
////	static Student* stu;
////	Student() {};
////	Student(const Student& stu) {};
////public:
////	static Student* getstu()
////	{
////		if (stu == NULL)
////			stu = new Student;
////		return stu;
////	}
////	void fun()
////	{
////		cout << "哈哈" << endl;
////	}
////};
////
////Student* Student::stu = NULL;
////
////void test1()
////{
////	Student* ps = Student::getstu();
////	ps->fun();
////	//Student* ps = Student::getstu();
////	//ps->fun();
////	//Student* ps = Student::getstu();
////	//ps->fun();
////}
////
////int main()
////{
////	test1();
////	//test();
////	return 0;
////}
////
////
////
//
//
//#include <iostream>
//
//using namespace std;
//
//class Student
//{
//public:
//	const int id;
//	int i;
//	Student() :id(2) {};
//	void fun() const
//	{
//		cout << "hehe" << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	cout << s1.id << endl;
//	s1.fun();
//	return 0;
//}