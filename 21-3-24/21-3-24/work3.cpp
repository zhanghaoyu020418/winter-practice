//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Complex
//{
//public:
//	double f;
//	double b;
//	Complex(int f, int b) :f(f), b(b) {}
//	Complex operator+(const Complex& com);
//	Complex operator-(const Complex& com);
//	friend Complex operator* (const Complex& com1, const Complex& com2);
//	friend Complex operator / (const Complex& com1, const Complex& com2);
//	void Show();
//};
//
//Complex Complex::operator+(const Complex& com)
//{
//	Complex tmp(0, 0);
//	tmp.f = this->f + com.f;
//	tmp.b = this->b + com.b;
//	return tmp;
//}
//
//Complex Complex::operator-(const Complex& com)
//{
//	Complex tmp(0, 0);
//	tmp.f = this->f - com.f;
//	tmp.b = this->b - com.b;
//	return tmp;
//}
//
//Complex operator* (const Complex& com1, const Complex& com2)
//{
//	Complex tmp(0, 0);
//	int ac = com1.f * com2.f, bd = com1.b * com2.b;
//	int ad = com1.f * com2.b, bc = com1.b * com2.f;
//	tmp.f = ac - bd;
//	tmp.b = ad + bc;
//	return tmp;
//}
//
//Complex operator / (const Complex& com1, const Complex& com2)
//{
//	Complex tmp(0, 0);
//	double ac = com1.f * com2.f, bd = com1.b * com2.b;
//	double ad = com1.f * com2.b, bc = com1.b * com2.f;
//	double t = com2.f * com2.f + com2.b * com2.b;
//	tmp.f = (ac + bd) / (t * 1.0);
//	tmp.b = (bc - ad) / (t * 1.0);
//	return tmp;
//}
//
//void Complex::Show()
//{
//	if(f < 1 && b < 1)
//		printf("<%.1lf,%.1lfi>\n", f, b);
//	else
//		printf("<%.0lf,%.0lfi>\n", f, b);
//}
//
//
//int main()
//{
//	Complex c1(3, 4), c2(5, -10);
//	cout << "c1=";
//	c1.Show();
//	cout << "c2=";
//	c2.Show();
//	cout << "c1+c2=";
//	(c1 + c2).Show();
//	cout << "c1-c2=";
//	(c1 - c2).Show();
//	cout << "c1*c2=";
//	(c1 * c2).Show();
//	cout << "c1/c2=";
//	(c1 / c2).Show();
//
//	return 0;
//}