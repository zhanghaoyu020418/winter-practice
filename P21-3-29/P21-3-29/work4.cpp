//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Complex
//{
//public:
//	void set();
//	void show();
//	Complex operator+ (const Complex& com);
//private:
//	float a;
//	float b;
//};
//
//Complex Complex::operator+(const Complex& com)
//{
//	Complex tmp;
//	tmp.a = this->a + com.a;
//	tmp.b = this->b + com.b;
//	return tmp;
//}
//
//void Complex::set()
//{
//	cin >> a >> b;
//}
//
//void Complex::show()
//{
//	cout << "(" << a << "," << b << "i)" << endl;
//}
//
//int main()
//{
//	Complex num1, num2, num3;
//	num1.set();
//	num2.set();
//	num3 = num1 + num2;
//	num3.show();
//	return 0;
//}