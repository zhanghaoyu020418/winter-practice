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
//	//ָ�����ݳ�Ա��ָ��
//	Time t1(1, 2, 3);//������ݳ�Ա��public�ģ����� p1= &t1.hour
//	t1.get_time();
//
//	//ָ������ָ��
//	Time *p2 = &t1;
//	p2->get_time();
//
//
//
//	//ָ���Ա������ָ��
//	void(Time::*p3)();
//	p3 = &Time::get_time;
//	(t1.*p3)();
//	return 0;
//}
//
