//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
////// 二叉链
////struct TreeNode
////{
////	int val;
////	TreeNode* leftChild;
////	TreeNode* rightBrother;
////
////	TreeNode() :val(0), leftChild(NULL), rightBrother(NULL) {}
////};
////
////// 三叉链
////struct TreeNode
////{
////	int val;
////	TreeNode* leftChild;
////	TreeNode* rightBrother;
////	TreeNode* prevFather;
////
////	TreeNode() :val(0), leftChild(NULL), rightBrother(NULL), prevFather(NULL) {}
////};
//
//// 堆排序
//// 1.向下调整法
//// 2.建堆
//// 3.堆排序
//
//void AdjustDown(int a[], int n, int parent)
//{
//	int child = parent * 2 + 1;
//
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] < a[child])
//			child++;
//		if (a[parent] > a[child])
//		{
//			swap(a[parent], a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//
//void HeapSort(int* a, int n)
//{
//	int end = n - 1;
//
//	while (end > 0)// 只要>0的时候结束即可，因为不需要和自己交换
//	{
//		swap(a[0], a[end]);
//		AdjustDown(a, end, 0);
//		end--;
//	}
//}
//
//int main()
//{
//	int a[] = { 1, 5, 2, 7, 3, 9, 4, 0, 6, 8 };
//	int n = sizeof(a) / sizeof(a[0]);
//
//	for (int i = (n - 2) / 2; i >= 0; i--)// >=才可以，因为要将每个双亲结点都照顾到，i==0的时候就是在根节点
//		AdjustDown(a, n, i);
//		
//	HeapSort(a, n);
//	return 0;
//}
//
//void AdjustUp(int* a, int child)
//{
//	int parent = (child - 1) / 2;
//	while (parent >= 0)
//	{
//		if (a[parent] < a[child])
//		{
//			swap(a[parent], a[child]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//			break;
//	}
//}