#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <queue>

using namespace std;

typedef pair<int, int> PII;
vector<vector<int>> bfs(vector<vector<int>>& mat, int i, int j) {
	int step = 0;
	int n = mat.size(), m = mat[0].size();
	int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
	queue<PII> q;
	set<PII> vis;
	q.push({ i, j });
	vis.insert({ i, j });
	while (!q.empty()) {
		auto tmp = q.front();
		q.pop();
		step++;
		if (mat[tmp.first][tmp.second] == 0) {
			mat[i][j] = step;
			return mat;
		}
		for (int k = 0; k < 4; k++) {
			int x = dx[k] + tmp.first, y = dy[k] + tmp.second;
			if (x >= 0 && x < n && y >= 0 && y < m && !vis.count({ x, y })) {
				q.push({ x, y });
				vis.insert({ x, y });
			}
		}
	}
	return mat;
}


vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
	int n = mat.size(), m = mat[0].size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mat[i][j] == 1)
				bfs(mat, i, j);
		}
	}
	return mat;
}

int main()
{
	vector<vector<int>> v = { {0,0,0}, {0,1,0}, {1,1,1} };
	auto t = updateMatrix(v);

	return 0;
}