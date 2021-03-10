//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//public:
//	Box(int h = 10) :height(h) { cout << "调用啦 " << height << endl; }
//	~Box() { cout << "回收啦" << height << endl; }
//private:
//	int height;
//};
//
//Box b1(1);//全局变量，从main执行之前开始调用构造到main执行结束析构
//int main()
//{
//	static Box b2(2);//static定义的局部变量，从开始定义调用构造到main函数中结束析构
//	Box b3(3);//局部变量，从定义位置调用构造到main结束析构
//
//	{
//		Box b4(4);//从进入函数构造到出了作用域析构
//	}
//
//	Box* pb = new Box(5);//new分配的动态内存,从new位置调用构造到delete调用析构
//	delete pb;
//
//	return 0;
//}