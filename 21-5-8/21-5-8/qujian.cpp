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
//		seg[i].second = t[i];// 结束时间
//		seg[i].first = s[i];// 开始时间
//	}
//
//	sort(seg, seg + n, cmp);
//
//	int res = 0, endTime = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (seg[i].first > endTime)// 如果这次的工作开始时间比上一次的工作时间结束完就可以参加工作
//		{
//			res++;
//			endTime = seg[i].second;// 更新一下当前工作的结束时间
//		}
//	}
//
//	cout << res << endl;
//	return 0;
//}