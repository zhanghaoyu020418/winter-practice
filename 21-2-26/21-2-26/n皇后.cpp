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
////	//���Żʺ�
////	dfs(x, y + 1, c);
////
////	//�Żʺ�
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
////	dfs(0, 0, 0);//�ڴӣ�0��0��λ���Ͽ�ʼ����0���ʺ�
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
//int col[N], dg[N], udg[N];//dg[u + i]�����Խ���,udg[i - u + n]�Ǹ��Խ���
//int n;
//char a[N][N];
//
//void dfs(int u)//u������,��������
//{
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)//������������һ���������
//			puts(a[i]);//puts(a[i]) == cout << a[i] << endl;ֱ�����һ��
//		cout << endl;
//		return;
//	}
//
//	//����������к������Խ��ߣ�����Ҫ����ֱ������dfs������ֻҪȫ�����꣬�������Ľ��
//	for (int i = 0; i < n; i++)
//		if (!col[i] && !dg[u + i] && !udg[i - u + n])//������к������Խ��߶�û�лʺ�ͷ���ȥ
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
//	//�������̵ĳ���
//	cin >> n;
//
//	//�����������
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			a[i][j] = '.';
//
//	dfs(0);//��������
//
//	return 0;
//}