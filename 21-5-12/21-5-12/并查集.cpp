//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int par[N]; // 父亲数组
//int h[N];// 树的高度
//
//void init(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		par[i] = i;
//		h[i] = 1;
//	}
//}
//
//int find(int x)
//{
//	if (par[x] == x)
//		return x;
//	else
//		return par[x] = find(par[x]);// 路径压缩
//}
//
//void unite(int x, int y)
//{
//	x = find(x);
//	y = find(y);
//	if (x == y)
//		return;
//
//	if (h[x] < h[y])// 小树连大树
//		par[x] = y;
//	else
//	{
//		par[y] = x;
//		if (h[x] == h[y])// 如果两棵树的高度一样，将父亲树的高度+1
//			h[x] ++;
//	}
//}
//
//bool same(int x, int y)
//{
//	return find(x) == find(y);// 判断父亲是否一样即可
//}
//
//int main()
//{
//	init(10);
//	unite(1, 2);
//	cout << find(1) << endl;
//	cout << find(2) << endl;
//	return 0;
//}