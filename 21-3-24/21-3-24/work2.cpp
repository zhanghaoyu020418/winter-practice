//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//public:
//	Box(int x = 0, int y = 0, int z = 0);
//	void Area(Box b);
//	void Volume(Box b);
//	void Show(Box b);
//private:
//	int x;
//	int y;
//	int z;
//};
//
//void Box::Show(Box b)
//{
//	cout << "x=" << b.x << ' ' << "y=" << b.y << ' ' << "z=" << b.z << endl;
//	b.Volume(b);
//	b.Area(b);
//}
//
//Box::Box(int x, int y, int z)
//{
//	this->x = x;
//	this->y = y;
//	this->z = z;
//}
//
//void Box::Area(Box b)
//{
//	int a = 2 * (b.x * b.y) + 2 * (b.x * b.z) + 2 * (b.y * b.z);
//	cout << "v=" << a << endl;
//}
//
//void Box::Volume(Box b)
//{
//	cout << "s=" << b.x * b.y * b.z << endl;
//}
//
//int main()
//{
//	Box b1, b2(10), b3(10, 20), b4(10, 20, 30);
//	b1.Show(b1);
//	b2.Show(b2);
//	b3.Show(b3);
//	b4.Show(b4);
//	return 0;
//}