#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	const char* p = "abc";
//
//	return 0;
//}
//
#include <iostream>

using namespace std;

class Box
{
public:
	Box(int h, int w, int l) :height(h), width(w), length(l) {}
	int volume();
	~Box()//析构函数
	{
		cout << "deadline" << endl;
	}
private:
	int height;
	int width;
	int length;
};

int Box::volume()
{
	return height * width * length;
}

int main()
{
	Box b1(1, 2, 3);
	cout << b1.volume() << endl;//()不能忘

	return 0;
}
