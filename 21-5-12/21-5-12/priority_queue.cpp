//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int N = 10001;
//
//int a[N], b[N];
//int n, L, P;
//
//int main()
//{
//	cin >> n >> L >> P;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < n; i++)
//		cin >> b[i];
//
//	// 终点也视为不能加油的加油站
//	a[n] = L;
//	b[n] = 0;
//	n++;
//
//	priority_queue<int> q;
//	int ans = 0, pos = 0;// ans是加油的次数，pos是当前所在的位置
//
//	for (int i = 0; i < n; i++)
//	{
//		int d = a[i] - pos;// 需要加的油量
//
//		while (P < d)// 当剩余的油量少于路程的时候
//		{
//			if (q.empty())// 如果没有备用的油就说明不能到达
//			{
//				cout << "-1" << endl;
//				return 0;
//			}
//			P += q.top();// 将最大的油量加上
//			q.pop();
//			ans++;// 加油次数++
//		}
//
//		P -= d;// 剩余的油量减去路程消耗
//		pos = a[i];// 更新当前位置
//		q.push(b[i]);// 将当前的加油站的油量放入priority_queue中
//	}
//	cout << ans << endl;
//	return 0;
//}