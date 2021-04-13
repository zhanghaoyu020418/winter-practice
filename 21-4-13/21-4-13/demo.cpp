//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//const float EP = 1e-7;
//
//class Shape
//{
//public:
//	virtual float area() = 0;
//};
//
//class Circle : public Shape
//{
//private:
//	double PI;
//	float r;
//public:
//	Circle(double PI, float r) :PI(PI), r(r), Shape() {}
//	float area();
//};
//
//class Square : public Shape
//{
//private:
//	float x;
//public:
//	Square(float x) :x(x) {}
//	float area();
//};
//
//class Rectangle :public Shape
//{
//private:
//	float x, y;
//public:
//	Rectangle(float x, float y) : x(x), y(y) {}
//	float area();
//};
//
//class Trapezoid : public Shape
//{
//private:
//	float x, y, h;
//public:
//	Trapezoid(float x, float y, float h) : x(x), y(y), h(h) {}
//	float area();
//};
//
//class Triangle : public Shape
//{
//private:
//	float x, h;
//public:
//	Triangle(float x, float h) :x(x), h(h) {}
//	float area();
//};
//
//
//
//
//
//
//float Circle::area()
//{
//	return PI * r * r;
//}
//
//float Shape::area() { return 0; }
//
//float Square::area()
//{
//	return x * x;
//}
//
//float Rectangle::area()
//{
//	return x * y;
//}
//
//float Trapezoid::area()
//{
//	return (x + y) * h / 2.0;
//}
//
//float Triangle::area()
//{
//	return x * h / 2.0;
//}
//
////bool check(Circle c, Square s, Rectangle r, Trapezoid t, Triangle tr, double mid)
////{
////	double num = c.area(mid, 12.6) + s.area(3.5) +
////		r.area(8.4, 4.5) + t.area(2.0, 4.5, 3.2) + tr.area(4.5, 8.4);
////	if (num >= 574.109)
////		return true;
////	else
////		return false;
////}
//
//int main()
//{
//	Circle c(3.113695, 12.6);
//	Square s(3.5);
//	Rectangle r(8.4, 4.5);
//	Trapezoid t(2.0, 4.5, 3.2);
//	Triangle tr(4.5, 8.4);
//	Shape *p[5] = { &c, &s, &r, &t, &tr };
//	
//	float sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += (p[i])->area();
//	}
//	cout << sum << endl;
//
//
//
//	//double L = 0, R = 5.0;
//	//while (R - L > EP)
//	//{
//	//	double mid = (R + L) / 2.0;
//	//	cout << mid << endl;
//	//	if (check(c, s, r, t, tr, mid)) R = mid;
//	//	else L = mid;
//	//}
//	//cout << L << ' ' << R << endl;
//
//
//	return 0;
//}