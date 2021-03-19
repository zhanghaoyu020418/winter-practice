//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//class MyTime
//{
//	int hour;
//	int min;
//	int sec;
//public:
//	void SetTime();
//	void print_24();
//	void print_12();
//};
//
//void MyTime::SetTime()
//{
//	cin >> hour >> min >> sec;
//}
//
//void MyTime::print_24()
//{
//	if(hour >= 24)
//		printf("%02d:%02d:%02d\n", hour % 24, min, sec);
//	else
//		printf("%02d:%02d:%02d\n", hour, min, sec);
//}
//
//void MyTime::print_12()
//{
//	if(hour == 24)
//		printf("%02d:%02d:%02d AM\n", hour % 12, min, sec);
//	else if(hour >= 12)
//		printf("%02d:%02d:%02d PM\n", hour % 12, min, sec);
//	else
//		printf("%02d:%02d:%02d AM\n", hour, min, sec);
//}
//
//int main()
//{
//	MyTime time;
//	time.SetTime();
//	time.print_12();
//	time.print_24();
//	return 0;
//}