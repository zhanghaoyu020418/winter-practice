//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <unordered_set>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//int num[N];
//unordered_set<int> se;
//bool st[N];
//int arr[N];
//vector<int> t;
//
//void dfs(int pos, int res)
//{
//	if (pos > n)
//	{
//		se.insert(res);
//		return ;
//	}
//
//	int tmp1 = t.back();
//	tmp1 += num[pos];
//	t.push_back(tmp1);
//	
//	dfs(pos + 1, tmp1);
//	t.pop_back();
//	
//	int tmp2 = t.back();
//	tmp2 = abs(tmp2 - num[pos]);
//	t.push_back(tmp2);
//	dfs(pos + 1, tmp2);
//	t.pop_back();
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &num[i]), se.insert(num[i]);
//	sort(num, num + n);
//	t.push_back(0);
//
//	for (int i = 1; i <= n; i ++ )
//		dfs(i, 0);
//
//	cout << se.size() + 2 << endl;
//	return 0;
//}