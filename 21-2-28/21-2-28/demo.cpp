//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int N = 1000000;
//int prime[N];
//bool st[N];
//int n, cnt;
//
//int main()
//{
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])
//			prime[cnt++] = i;
//		for (int j = 0; prime[j] <= n / i; j++)
//		{
//			st[prime[j] * i] = true;
//			if (i % prime[j] == 0) break;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 15;
//int row, col;//迷宫的长和宽
//int dx[4] = { 0, 0, -1, 1 };//表示左和右
//int dy[4] = { 1, -1, 0, 0 };//表示上和下
//int cnt;//记录有多少种走法
//int st[N][N];
//
//void dfs(int x, int y)//走迷宫
//{
//	if (x == col && y == row)
//	{
//		cnt++; 
//		return;
//	}
//
//	for (int i = 0; i <= 3; i++)//枚举上下左右四种不同的走法
//	{
//		int xi = x + dx[i], yi = y + dy[i];
//		if (xi < 1 || xi > col || yi < 1 || yi > row || st[xi][yi] == true) continue;
//
//		st[xi][yi] = true;
//		dfs(xi, yi);
//		st[xi][yi] = false;//回溯
//	}
//}
//
//
//int main()
//{
//	st[1][1] = true;//要先标记一下(1,1)已经走过了
//	cin >> row >> col;
//	dfs(1, 1);
//	cout << cnt << endl;
//	return 0;
//}

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;
int n;
int a[N];
bool st[N];

void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << endl;
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (st[i])
			continue;
		a[u] = i;
		st[i] = true;
		dfs(u + 1);
		st[i] = false;
		a[u] = 0;
	}
}

int main()
{
	cin >> n;
	dfs(0);
	return 0;
}