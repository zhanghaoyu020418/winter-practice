//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 100010;
//int n;
//int s[N], t[N];
//int res;
//PII seg[N];
//
//int cmp(PII a, PII b)
//{
//	return a.second < b.second;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> s[i];
//	for (int i = 0; i < n; i++)
//		cin >> t[i];
//
//	for (int i = 0; i < n; i++)
//	{
//		seg[i].second = t[i];// ����ʱ��
//		seg[i].first = s[i];// ��ʼʱ��
//	}
//
//	sort(seg, seg + n, cmp);
//
//	int res = 0, endTime = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (seg[i].first > endTime)// �����εĹ�����ʼʱ�����һ�εĹ���ʱ�������Ϳ��Բμӹ���
//		{
//			res++;
//			endTime = seg[i].second;// ����һ�µ�ǰ�����Ľ���ʱ��
//		}
//	}
//
//	cout << res << endl;
//	return 0;
//}