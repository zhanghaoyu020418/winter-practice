//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Complex
//{
//public:
//
//	// ��������
//	Complex(int real = 0, int image = 0)
//	{
//		_real = real;
//		_image = image;
//	}
//
//	Complex& operator= (const Complex& c)
//	{
//		// ���this�Ͷ���c��ͬһ�����󣬾�ֱ�ӷ���
//		if (this == &c)
//			return *this;
//
//		_real = c._real;
//		_image = c._image;
//		return *this;
//	}
//private:
//	int _real; // ʵ��
//	int _image;// �鲿
//};
//
//int main()
//{
//	Complex c1(1, 2);
//	Complex c2(1, 2);
//	// ��Ϊ==�����ȼ��Ƚϵͣ�����Ҫ������
//	/*cout << (c1 == c2) << endl;*/
//	return 0;
//}