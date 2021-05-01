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
//// record�����þ��������жϻʺ�İڷ��Ƿ�Ϸ�
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
//int dfs3(int limit, int colLim, int leftLim, int rightLim)// λ�����Ż�����
//{
//	if (colLim == limit)
//		return 1;
//	int pos = limit & (~(colLim | leftLim | rightLim));// ѡ������Щλ�ÿ��ԷŻʺ�
//	int res = 0;
//	int mostRightOne = 0;
//	while (pos)
//	{
//		mostRightOne = pos & -pos;// ÿ��ѡ�����ҵ����һ�����ԷŻʺ��λ��
//		pos = pos ^ mostRightOne; // ���һ�����λ�÷Ź��ʺ���
//		res += dfs3(limit, colLim | mostRightOne,// ���к���һ�εĵݹ�
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
//	int limit = n == 32 ? -1 : (1 << n) - 1;// ��ȡ����nλ����1������
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