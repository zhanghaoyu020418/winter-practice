//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//
////����һ���������飬�ڷ�5��ѧ�������ݣ�ѧ�š��ɼ���������һ������max��
////��ָ������ָ����������������max�������ҳ�5��ѧ���гɼ�����ߣ��������ѧ�ż���߳ɼ���
////����
////5��ѧ����ѧ�źͳɼ�
////���
////�ɼ�����ߵ�ѧ�źͳɼ�
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