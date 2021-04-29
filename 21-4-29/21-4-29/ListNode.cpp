#define _CRT_SECURE_NO_WARNINGS 1
#include "ListNode.h"

ListNode* BuyNode(int val)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->left = NULL;
	node->right = NULL;
	node->val = val;
	return node;
}

