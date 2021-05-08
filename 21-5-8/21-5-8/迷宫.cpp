//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int N = 110;
//const int INF = 1e7;
//
//char Map[N][N];
//int n, m;
//int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
//typedef pair<int, int> PII;
//int dis[N][N];// 记录离起始位置的距离
//int gx, gy;
//int sx, sy;
//
//int bfs()
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			dis[i][j] = INF;// 将地图上未到过的地方设置为INF，用bool数组标明也可以
//
//	dis[sx][sy] = 0;
//
//	queue<PII> q;
//	q.push({sx, sy});// 将起始状态放入队列
//	while (!q.empty())// 当队列不空
//	{
//		PII tmp = q.front();
//		q.pop();
//
//		if (tmp.first == gx && tmp.second == gy)
//			break;
//
//		// 遍历4个方向
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = tmp.first + dx[i], ny = tmp.second + dy[i];
//			if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
//				Map[nx][ny] != '#' && dis[nx][ny] == INF)// 如果偏移位置不出界也不是#也没有到过的话
//			{
//				q.push({ nx, ny });
//				dis[nx][ny] = dis[tmp.first][tmp.second] + 1;
//			}
//		}
//
//	}
//	return dis[gx][gy];
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			cin >> Map[i][j];
//			if (Map[i][j] == 'S')// 记录一下起点的位置
//				sx = i, sy = j;
//			if (Map[i][j] == 'G')// 记录一下终点的位置
//				gx = i, gy = j;
//		}
//	cout << bfs() << endl;
//	return 0;
//}
//
////10 10
////#S######.#
////......#..#
////.#.##.##.#
////.#........
////##.##.####
////....#....#
////.#######.#
////....#.....
////.####.###.
////....#...G#