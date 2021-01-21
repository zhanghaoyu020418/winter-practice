//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int n, m;
//const int N = 26;
//int st[N];
//
//
//
//void dfs(int u, int start)
//{
//	if (u + n - start < m)
//		return;//¼ôÖ¦
//	if (u > m)//±ß½ç
//	{
//		for (int i = 1; i <= m; i++)
//		{
//			printf("%d ", st[i]);
//		}
//		printf("\n");
//		return;
//	}
//
//	for (int i = start; i <= n; i++)
//	{
//		st[u] = i;
//		dfs(u + 1, i + 1);
//
//		st[u] = 0;
//
//	}
//
//
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//
//	dfs(1, 1);
//	return 0;
//}