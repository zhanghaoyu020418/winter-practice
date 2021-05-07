//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <list>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
//// 单调栈的基本实现
//vector<vector<int>> getNearLess(int a[], int n)
//{
//	stack<list<int>> sk;
//
//	vector<vector<int>> res;
//
//	for (int i = 0; i < n; i++)
//	{
//		// 如果栈顶元素比即将进来的元素大，就将栈顶元素记录一下
//		// 如果元素相等在后面处理
//		while (!sk.empty() && a[sk.top().front()] > a[i])
//		{
//			list<int> popLi = sk.top();
//			sk.pop();
//			int leftIndex = sk.empty() ? -1 : sk.top().back();
//			for (int index : popLi)
//			{
//				res[index][0] = leftIndex;// 左边最小的数就是leftIndex
//				res[index][1] = i;        // 右边最小的树就是让这个if条件满足的数字
//			}
//		}
//		if (!sk.empty() && a[sk.top().front()] == a[i])// 如果元素相等
//			sk.top().push_back(i);
//		else// 如果a[i]比栈顶的元素大，就直接将元素放在栈顶
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