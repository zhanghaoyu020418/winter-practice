//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <list>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
//// ����ջ�Ļ���ʵ��
//vector<vector<int>> getNearLess(int a[], int n)
//{
//	stack<list<int>> sk;
//
//	vector<vector<int>> res;
//
//	for (int i = 0; i < n; i++)
//	{
//		// ���ջ��Ԫ�رȼ���������Ԫ�ش󣬾ͽ�ջ��Ԫ�ؼ�¼һ��
//		// ���Ԫ������ں��洦��
//		while (!sk.empty() && a[sk.top().front()] > a[i])
//		{
//			list<int> popLi = sk.top();
//			sk.pop();
//			int leftIndex = sk.empty() ? -1 : sk.top().back();
//			for (int index : popLi)
//			{
//				res[index][0] = leftIndex;// �����С��������leftIndex
//				res[index][1] = i;        // �ұ���С�������������if�������������
//			}
//		}
//		if (!sk.empty() && a[sk.top().front()] == a[i])// ���Ԫ�����
//			sk.top().push_back(i);
//		else// ���a[i]��ջ����Ԫ�ش󣬾�ֱ�ӽ�Ԫ�ط���ջ��
//		{
//			list<int> newList;
//			newList.push_back(i);
//			sk.push(newList);
//		}
//	}
//	while (!sk.empty())
//	{
//		list<int> popLi = sk.top();
//		int leftIndex = sk.empty() ? -1 : sk.top().back();
//		for (int index : popLi)
//		{
//			res[index][0] = leftIndex;
//			res[index][1] = -1;
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	
//	return 0;
//}