#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
#include "ListNode.h"

using namespace std;

struct Info
{
	ListNode* ans;
	bool findo1;
	bool findo2;
	Info(ListNode* an, bool fo1, bool fo2) :ans(an), findo1(fo1), findo2(fo2) {}
};

Info lowest_anestor(ListNode* head, ListNode* o1, ListNode* o2)
{
	// 如果节点为空
	if (head == NULL)
		return Info(NULL, false, false);

	// 获取左右子树的信息
	Info leftTree = lowest_anestor(head->left, o1, o2);
	Info rightTree = lowest_anestor(head->right, o1, o2);

	// 整合左右子树的信息

	// 判断是否树中有o1或o2
	bool findo1 = head == o1 || leftTree.findo1 || rightTree.findo1;
	bool findo2 = head == o2 || leftTree.findo2 || rightTree.findo2;

	// 判断在左右子树中是否有两个数的公共祖先
	ListNode* ans = NULL;
	if (leftTree.findo1)
		ans = leftTree.ans;
	if (rightTree.findo2)
		ans = rightTree.ans;
	if (ans == NULL)
		if (findo1 && findo2)
			ans = head;
	return Info(ans, findo1, findo2);
}



void test1()
{
	ListNode* n1 = BuyNode(1);
	ListNode* n2 = BuyNode(2);
	ListNode* n3 = BuyNode(3);
	ListNode* n4 = BuyNode(4);
	ListNode* n5 = BuyNode(5);
	ListNode* n6 = BuyNode(6);
	ListNode* n7 = BuyNode(7);
	ListNode* n8 = BuyNode(8);
	ListNode* n9 = BuyNode(9);
	ListNode* n10 = BuyNode(10);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	n4->left = n8;
	n4->right = n9;

	Info tmp = lowest_anestor(n1, n4, n9);
	cout << (tmp.ans)->val << endl;


}

int main()
{
	test1();
	return 0;
}