//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Time
//{
//public:
//	Time(int h, int m, int s) :hour(h), minute(m), second(s) {}
//	void get_time();
//private:
//	int hour;
//	int minute;
//	int second;
//};
//
//void Time::get_time()
//{
//	cout << hour << ' ' << minute << ' ' << second << endl;
//}
//
//int main()
//{
//	//指向数据成员的指针
//	Time t1(1, 2, 3);//如果数据成员是public的，可以 p1= &t1.hour
//	t1.get_time();
//
//	//指向对象的指针
//	Time *p2 = &t1;
//	p2->get_time();
//
//
//
//	//指向成员函数的指针
//	void(Time::*p3)();
//	p3 = &Time::get_time;
//	(t1.*p3)();
//	return 0;
//}
//
