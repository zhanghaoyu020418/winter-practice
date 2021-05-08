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
//int dis[N][N];// ��¼����ʼλ�õľ���
//int gx, gy;
//int sx, sy;
//
//int bfs()
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			dis[i][j] = INF;// ����ͼ��δ�����ĵط�����ΪINF����bool�������Ҳ����
//
//	dis[sx][sy] = 0;
//
//	queue<PII> q;
//	q.push({sx, sy});// ����ʼ״̬�������
//	while (!q.empty())// �����в���
//	{
//		PII tmp = q.front();
//		q.pop();
//
//		if (tmp.first == gx && tmp.second == gy)
//			break;
//
//		// ����4������
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = tmp.first + dx[i], ny = tmp.second + dy[i];
//			if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
//				Map[nx][ny] != '#' && dis[nx][ny] == INF)// ���ƫ��λ�ò�����Ҳ����#Ҳû�е����Ļ�
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
//			if (Map[i][j] == 'S')// ��¼һ������λ��
//				sx = i, sy = j;
//			if (Map[i][j] == 'G')// ��¼һ���յ��λ��
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