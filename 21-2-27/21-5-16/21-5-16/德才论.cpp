//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//const int N = 100010;
//int n, l, h;
//
//struct Stu
//{
//	string id;
//	int d, c;
//	int flag;
//	//1) �²Ŷ�>=H,���ܷ�����
//	//2) �µ��ˣ����ǲ�û�е�
//	//3) �²Ŷ�û��H,�µ�Ȩ�رȲŴ�
//	// �ܵ���˵���ǰ��ܷ�����Ȼ��·ֱȲŷִ�
//	bool operator< (const Stu& s) const
//	{
//		if (flag != s.flag)
//			return flag < s.flag;
//		int sum = d + c, sums = s.d + s.c;
//		if (sum != sums) return sum > sums;// �ִܷ�����
//		if (d != s.d) return d > s.d;// �ܷ���ͬ���·�����
//		return id < s.id;// ��ѧ������
//	}
//}stu[N];
//
//int main()
//{
//	cin >> n >> l >> h;
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stu[i].id >> stu[i].d >> stu[i].c;
//		if (stu[i].d >= l && stu[i].c >= l)
//		{
//			cnt++;
//			if (stu[i].d >= h && stu[i].c >= h)
//				stu[i].flag = 1;
//			else if (stu[i].d >= h)
//				stu[i].flag = 2;
//			else if (stu[i].d >= stu[i].c)
//				stu[i].flag = 3;
//			else
//				stu[i].flag = 4;
//		}
//		else
//			stu[i].flag = 5;
//	}
//
//	sort(stu, stu + n);
//
//	cout << cnt << endl;
//	for (int i = 0; i < cnt; i++)
//	{
//		cout << stu[i].id << ' ' << stu[i].d << ' ' << stu[i].c << endl;
//	}
//
//	return 0;
//}
