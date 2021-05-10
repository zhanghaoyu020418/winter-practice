//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//int x[N];
//
//void solve()
//{
//	int N, R;
//	while (cin >> R >> N, N + 1 || R + 1)
//	{
//		for (int i = 0; i < N; i++)
//			cin >> x[i];
//
//		sort(x, x + N);
//
//		int i = 0, res = 0;
//		while (i < N)
//		{
//			// 算出区间的最左端点
//			int left = x[i++];
//
//			// 在不超过范围的情况下，找区间的中心点的位置
//			while (i < N && x[i] <= left + R) i++;
//
//			// 找到区间中心点
//			int pos = x[i - 1];
//
//			// 找区间的最右端，让i成为下一个区间的开头
//			while (i < N && x[i] <= pos + R) i++;
//			res++;
//		}
//		cout << res << endl;
//	}
//}
//
//int main()
//{
//	solve();
//	return 0;
//}