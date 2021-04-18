//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstdio>
//
//using namespace std;
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	vector<int> res;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		res.push_back(i);
//	while (m--)
//	{
//		int p, q;
//		scanf("%d%d", &p, &q);
//		if (p == 0)
//		{
//			sort(res.begin(), res.begin() + q, cmp);
//		}
//		else if (p == 1)
//		{
//			sort(res.end() - q, res.end());
//		}
//	}
//	int len = res.size();
//	for (int i = 0; i < len; i++)
//		printf("%d ", res[i]);
//	return 0;
//}