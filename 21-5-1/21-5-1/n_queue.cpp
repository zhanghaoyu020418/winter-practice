//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
//
//bool isVaild(vector<int>& record, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		if ((col == record[i]) || (abs(row - i) == abs(record[i] - col)))
//			return false;
//	}
//	return true;
//}
//
//int dfs1(int row, int n, vector<int>& record)
//{
//	if (row == n)
//		return 1;
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (isVaild(record, row, i))
//		{
//			record[row] = i;
//			res += dfs1(row + 1, n, record);
//		}
//	}
//	return res;
//}
//char Map[20][20];
//// record的作用就是用来判断皇后的摆放是否合法
//void dfs2(int row, int n, vector<int>& record)
//{
//	if (row == n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << Map[i][j];
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//
//	for (int col = 0; col < n; col++)
//	{
//		if (isVaild(record, row, col))
//		{
//			Map[row][col] = 'Q';
//			record[row] = col;
//			dfs2(row + 1, n, record);
//			Map[row][col] = '.';
//		}
//	}
//}
//
//int dfs3(int limit, int colLim, int leftLim, int rightLim)// 位运算优化常数
//{
//	if (colLim == limit)
//		return 1;
//	int pos = limit & (~(colLim | leftLim | rightLim));// 选出有哪些位置可以放皇后
//	int res = 0;
//	int mostRightOne = 0;
//	while (pos)
//	{
//		mostRightOne = pos & -pos;// 每次选出从右到左的一个可以放皇后的位置
//		pos = pos ^ mostRightOne; // 标记一下这个位置放过皇后了
//		res += dfs3(limit, colLim | mostRightOne,// 进行后面一次的递归
//			(leftLim | mostRightOne) << 1,
//			(rightLim | mostRightOne) >> 1);
//	}
//	return res;
//}
//
//void n_queue(int n)
//{
//
//	
//	int limit = n == 32 ? -1 : (1 << n) - 1;// 提取出后n位都是1的数字
//	cout << dfs3(limit, 0, 0, 0) << endl;;
//	cout << "------------" << endl;
//
//	vector<int> record(n);
//	cout << dfs1(0, n, record) << endl;
//	cout << "-------------" << endl;
//	/*vector<vector<string> > Map;*/
//
//	//for (int i = 0; i < n; i++)
//	//	for (int j = 0; j < n; j++)
//	//		Map[i][j] = '.';
//	//dfs2(0, n, record);
//
//
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	n_queue(n);
//	return 0;
//}