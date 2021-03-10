//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//public:
//	Box(int h, int w, int l) :height(h), width(w), length(l) {}
//	void show_box();
//	int show_volume();
//private:
//	int height;
//	int width;
//	int length;
//};
//
//void Box::show_box()
//{
//	cout << height << ' ' << width << ' ' << length << endl;
//}
//
//int Box::show_volume()
//{
//	return height * width * length;
//}
//
//int main()
//{
//	Box b(1, 2, 3);
//	cout << b.show_volume() << endl;
//	int (Box::*pb)() = &Box::show_volume;
//	(b.*pb)();
//
//	return 0;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//char str[100];
	//fgets(str, 100, stdin);
	//fgets(str, 100, stdin);
	//cout << str << endl;
	//string str2;
	//getline(cin, str2);
	//cout << str2 << endl;

	string str;
	cin >> str;
	puts(str.c_str());
	return 0;
}

