//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1000010;
//int n, m;
//int a[N];
//int st[N];
//int k;
//int Max = -1e8, Min = 1e8;
//
//int main()
//{
//	int cnt;
//	cin >> cnt;
//
//	while (cin >> a[k])
//	{
//		st[a[k]] ++;
//		//Max = max(Max, a[k]);
//		//Min = min(Min, a[k]);
//		k++;
//	}
//
//	sort(a, a + k);
//
//	for (int i = 1; i < k; i++)
//	{
//		if (a[i] == a[i - 1])
//			n = a[i];
//		if (a[i] - a[i - 1] == 2)
//			m = a[i] - 1;
//	}
//
//
//	//for (int i = Min; i < Max; i++)
//	//{
//	//	if (st[i] == 0)
//	//		m = i;
//	//	if (st[i] == 2)
//	//		n = i;
//	//}
//
//	printf("%d %d", m, n);
//	return 0;
//}