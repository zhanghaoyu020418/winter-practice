//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <assert.h>
//
//using namespace std;
//
//class Time
//{
//public:
//	void SetTime();
//	void ShowTime();
//private:
//	int hour;
//	int mintue;
//	int second;
//};
//
//void Time::SetTime()
//{
//	int h, m, s;
//	cin >> h;
//	cin >> m;
//	cin >> s;
//	if (h < 24 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0)
//	{
//		hour = h;
//		mintue = m;
//		second = s;
//	}
//	else
//	{
//		assert(NULL);
//	}
//}
//
//void Time::ShowTime()
//{
//	printf("%d:%d:%d\n", hour, mintue, second);
//	int s = second + 1;
//	int m = mintue;
//	int h = hour;
//	if (s == 60)
//	{
//		s = 0;
//		m++;
//	}
//	if (m == 60)
//	{
//		m = 0;
//		h++;
//	}
//	if (h == 24)
//	{
//		h = 0;
//	}
//	printf("%d:%d:%d\n", h, m, s);
//}
//
//int main()
//{
//	Time t;
//
//	t.SetTime();
//	t.ShowTime();
//
//	return 0;
//}