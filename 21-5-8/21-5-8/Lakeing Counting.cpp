//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 110;
//
//char Map[N][N];
//int n, m;
//int res;
//
//void dfs(int x, int y)
//{
//	Map[x][y] = '.';
//	for (int dx = -1; dx <= 1; dx ++)
//		for (int dy = -1; dy <= 1; dy ++)
//		{
//			int nx = dx + x, ny = dy + y;
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//				continue;
//			if (Map[nx][ny] == 'W')
//				dfs(nx, ny);
//		}
//
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cin >> Map[i][j];
//	for (int i = 0; i < n; i ++)
//		for (int j = 0; j < m; j ++)
//			if (Map[i][j] == 'W')
//			{
//				dfs(i, j);
//				res++;
//			}
//	cout << res << endl;
//
//	return 0;
//}