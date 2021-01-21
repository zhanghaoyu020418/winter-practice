//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int n;
//const int N = 10;
//int st[N];
//bool used[N];   //false表示没用过，true表示用过了
//
//void dfs(int u)
//{
//	if (u > n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			printf("%d ", st[i]);
//		}
//		printf("\n");
//		return;
//	}
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!used[i])
//		{
//			st[u] = i;
//			used[i] = true;
//			dfs(u + 1);
//
//			st[u] = 0;
//			used[i] = false;
//
//		}
//	}
//
//
//}
//
//
//
//int main()
//{
//	scanf("%d", &n);
//
//	dfs(1);
//	return 0;
//}