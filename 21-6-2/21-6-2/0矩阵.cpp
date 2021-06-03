#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//int n = 10;
//	//bool* p = new bool[n] {false};
//	//return 0;
//	int a[3][3];
//	int n = 1;
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)
//			a[i][j] = n++;
//	return 0;
//}

#include <iostream>
using namespace std;

const int N = 110;
int q[N][N];
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };

int main()
{
	int n, m;
	cin >> n >> m;
	int x = 0, y = 0, d = 1;
	for (int i = 1; i <= n * m; i++)
	{
		q[x][y] = i;
		int a = x + dx[d], b = y + dy[d];
		if (a < 0 || a >= n || b < 0 || b >= m || q[a][b] != 0)
		{
			d = (d + 1) % 4;
			a = x + dx[d], b = y + dy[d];
		}
		x = a, y = b;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << q[i][j] << ' ';
		cout << endl;
	}
	return 0;
}