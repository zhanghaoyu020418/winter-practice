//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int n;
//const int N = 15;
//int str[N];       //状态：如果选择则是1，如果不选则是2,0 是不做选择
//
//
//void dfs(int u)
//{
//	if (u > n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (str[i] == 1)
//				printf("%d ", i);
//		}
//		printf("\n");
//		return;
//	}
//
//	str[u] = 1;//选择
//	dfs(u + 1);//深度优先
//	str[u] = 0;//回复现场
//
//	str[u] = 2;//不选
//	dfs(u + 1);
//	str[u] = 0;
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