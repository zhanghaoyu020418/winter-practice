#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//#define x first
//#define y second
//
//const int N = 210;
//char g[N][N];// 地图
//int d[N][N];// 距离
//int n, m;
//int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
//
//void bfs(PII start, PII end)
//{
//	queue<PII> q;
//	memset(d, -1, sizeof d);
//
//	d[start.x][start.y] = 0;
//	q.push(start);
//
//	while (q.size())
//	{
//		PII t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int tx = t.x + dx[i], ty = t.y + dy[i];
//			if (tx >= 0 && tx < n && ty >= 0 && ty < m && g[tx][ty] != '#' && d[tx][ty] == -1)
//			{
//				d[tx][ty] = d[t.x][t.y] + 1;
//				q.push({ tx, ty });
//			}
//		}
//	}
//	int res = d[end.x][end.y];
//	if (res == -1)
//		cout << "oop!" << endl;
//	else
//		cout << res << endl;
//	return;
//
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 0; i < n; i++) scanf("%s", g[i]); // 二维地图可以用一维for来读
//
//		PII start, end;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//			{
//				if (g[i][j] == 'S')
//					start = { i, j };
//				if (g[i][j] == 'E')
//					end = { i, j };
//			}
//		bfs(start, end);
//	}
//
//	return 0;
//}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> PII;
#define x first
#define y second

const int N = 210;
char g[N][N];// 地图
int d[N][N];// 距离
int n, m;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

void bfs(PII start, PII end)
{
	queue<PII> q;
	memset(d, -1, sizeof d);

	d[start.x][start.y] = 0;
	q.push(start);

	while (q.size())
	{
		PII t = q.front();
		q.pop();

		// if (t == end)
		//     if(d[t.x][t.y] == -1)
		//         cout << "oop!" << endl;
		//     else
		//         cout << d[t.x][t.y] << endl;
		for (int i = 0; i < 4; i++)
		{
			int tx = t.x + dx[i], ty = t.y + dy[i];
			if (tx >= 0 && tx < n && ty >= 0 && ty < m && g[tx][ty] != '#' && d[tx][ty] == -1)
			{
				d[tx][ty] = d[t.x][t.y] + 1;
				q.push({ tx, ty });
				if (g[tx][ty] == 'E')
				{
					int res = d[tx][ty];
					if (res == -1)
						cout << "oop!" << endl;
					else
						cout << res << endl;
				}
			}
		}
	}
	// 	int res = d[end.x][end.y];
	// 	if (res == -1)
	// 	    cout << "oop!" << endl;
	// 	else
	// 	    cout << res << endl;
	// 	return;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 0; i < n; i++) scanf("%s", g[i]); // 二维地图可以用一维for来读

		PII start, end;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (g[i][j] == 'S')
					start = { i, j };
				if (g[i][j] == 'E')
					end = { i, j };
			}
		bfs(start, end);
	}

	return 0;
}