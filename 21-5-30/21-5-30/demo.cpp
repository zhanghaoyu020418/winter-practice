//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Complex
//{
//public:
//
//	// 函数重载
//	Complex(int real = 0, int image = 0)
//	{
//		_real = real;
//		_image = image;
//	}
//
//	Complex& operator= (const Complex& c)
//	{
//		// 如果this和对象c是同一个对象，就直接返回
//		if (this == &c)
//			return *this;
//
//		_real = c._real;
//		_image = c._image;
//		return *this;
//	}
//private:
//	int _real; // 实部
//	int _image;// 虚部
//};
//
//int main()
//{
//	Complex c1(1, 2);
//	Complex c2(1, 2);
//	// 因为==的优先级比较低，所以要加括号
//	/*cout << (c1 == c2) << endl;*/
//	return 0;
//}