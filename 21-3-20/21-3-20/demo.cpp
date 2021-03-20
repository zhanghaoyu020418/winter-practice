//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//struct stu
//{
//	int id;
//	char name[20];
//	double score;
//};
//
//#define OFFSETOF(sname, mname) (int)&(((stu*)0)->mname)
////偏移量就是成员离结构体的首地址的距离，所以就是将成员的地址-结构体的首地址，但是这样比较麻烦
////所以通常可以将0作为结构体的首地址，将0强转成为结构体类型然后将->成员，最后减0，就等于没减
////记得要将地址置换为int类型这样看起来方便
//
//int main()
//{
//	cout << OFFSETOF(stu, id) << endl;
//	cout << OFFSETOF(stu, name) << endl;
//	cout << OFFSETOF(stu, score) << endl;
//	
//	return 0;
//}