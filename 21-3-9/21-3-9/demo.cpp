#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//public:
//	Box(int h, int w) :height(h), width(w) {}
//	void show_box();
//private:
//	int height;
//	int width;
//};
//
//void Box::show_box()
//{
//	cout << height << endl;
//	cout << width << endl;
//}
//
//int main()
//{
//	Box a[2] = {
//		Box(1, 2),
//		Box(2, 4)
//	};
//
//
//	return 0;
//}
//
#include <iostream>

using namespace std;

int main()
{
	//int n;
	//while (cin >> n, n)
	//{
	//	for (int i = 0; i < n; i++)
	//	{
	//		for (int j = 0; j < n; j++)
	//			cout << (1 << i) * (1 << j) << ' ';//两个乘数 后者控制基数 1 ~ 2^(n-1) ，前者控制倍数
	//		cout << endl;
	//	}
	//	cout << endl;
	//}
	int j = 0, i = 0;
	cout << (1 << j) * (1 << i) << endl;
	return 0;
}
