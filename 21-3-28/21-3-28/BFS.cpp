#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 110;

int p[N][N], st[N][N];
int n, m;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

void bfs()
{
	queue<pair<int, int>> q;

	memset(st, -1, sizeof st);
	st[0][0] = 0;
	q.push({ 0, 0 });

	while (!q.empty())
	{
		auto t = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int x = t.first + dx[i], y = t.second + dy[i];
			if (x >= 0 && x < n && y >= 0 && y < m && p[x][y] == 0 && st[x][y] == -1)
			{
				st[x][y] = st[t.first][t.second] + 1;
				q.push({ x, y });
			}
		}
	}
	cout << st[n - 1][m - 1] << endl;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> p[i][j];
	bfs();
	return 0;
}