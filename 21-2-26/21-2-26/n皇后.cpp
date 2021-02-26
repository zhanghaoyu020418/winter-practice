//#define _CRT_SECURE_NO_WARNINGS 1
////#include <iostream>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 20;
////int n;
////char q[N][N];
////bool row[N], col[N], dg[N], udg[N];
////
////
////void dfs(int x, int y, int c)
////{
////	if (y == n)
////		y = 0, x++;
////	if (x == n)
////	{
////		if (c == n)
////		{
////			for (int i = 0; i < n; i++)
////				puts(q[i]);
////			cout << endl;
////			return;
////		}
////	}
////
////
////	//不放皇后
////	dfs(x, y + 1, c);
////
////	//放皇后
////	if (!row[x] && !col[y] && !dg[x + y] && !udg[x - y + n])
////	{
////		q[x][y] = 'Q';
////		row[x] = col[y] = dg[x + y] = udg[x - y + n] = true;
////		dfs(x, y + 1, c + 1);
////		row[x] = col[y] = dg[x + y] = udg[x - y + n] = false;
////		q[x][y] = '.';
////	}
////
////}
////
////
////int main()
////{
////	cin >> n;
////	
////	for (int i = 0; i < n; i++)
////		for (int j = 0; j < n; j++)
////			q[i][j] = '.';
////
////	dfs(0, 0, 0);//在从（0，0）位置上开始放了0个皇后
////
////	return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 20;
//int col[N], dg[N], udg[N];//dg[u + i]是正对角线,udg[i - u + n]是负对角线
//int n;
//char a[N][N];
//
//void dfs(int u)//u是行数,暴搜行数
//{
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)//如果搜索到最后一层就输出结果
//			puts(a[i]);//puts(a[i]) == cout << a[i] << endl;直接输出一行
//		cout << endl;
//		return;
//	}
//
//	//如果不能让行和正负对角线，满足要求，则直接跳过dfs，所以只要全部填完，就是最后的结果
//	for (int i = 0; i < n; i++)
//		if (!col[i] && !dg[u + i] && !udg[i - u + n])//如果该列和正负对角线都没有皇后就放上去
//		{
//			a[u][i] = 'Q';
//			col[i] = dg[u + i] = udg[i - u + n] = true;
//			dfs(u + 1);
//			col[i] = dg[u + i] = udg[i - u + n] = false;
//			a[u][i] = '.';
//		}
//}
//
//int main()
//{
//	//设置棋盘的长宽
//	cin >> n;
//
//	//填充棋盘内容
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			a[i][j] = '.';
//
//	dfs(0);//暴搜行数
//
//	return 0;
//}