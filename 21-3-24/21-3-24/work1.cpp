//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//
////建立一个对象数组，内放5个学生的数据（学号、成绩），设立一个函数max，
////用指向对象的指针做函数参数，在max函数中找出5个学生中成绩最高者，并输出其学号及最高成绩。
////输入
////5个学生的学号和成绩
////输出
////成绩最高者的学号和成绩
//
//class Stu
//{
//public:
//	void MaxScore(Stu* ps);
//	void GetScore(Stu* ps);
//private:
//	int id;
//	float scores;
//};
//
//void Stu::GetScore(Stu* ps)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> ps[i].id >> ps[i].scores;
//	}
//}
//
//void Stu::MaxScore(Stu* ps)
//{
//	int maxi = 0;
//	int maxs = ps[0].scores;
//	for (int i = 0; i < 5; i++)
//	{
//		if (ps[i].scores > maxs)
//		{
//			maxs = ps[i].scores;
//			maxi = i;
//		}
//	}
//	cout << ps[maxi].id << ' ' << ps[maxi].scores << endl;
//}
//
//int main()
//{
//	Stu students[5];
//	Stu* ps = students;
//	ps->GetScore(students);
//	ps->MaxScore(students);
//	return 0;
//}