//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//typedef int BTDataType;
//
//struct BTNode
//{
//	BTNode* left;
//	BTNode* right;
//	BTDataType data;
//};
//
//
//int TreeKLevelSize(BTNode* root, int k) // 返回第K层的结点个数
//{
//	if (root == NULL)
//		return 0;
//	if (k == 1)
//		return 1;
//	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
//}
//
//BTNode* BuyTreeNode(BTDataType x)
//{
//	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
//	node->data = x;
//	node->left = NULL;
//	node->right = NULL;
//	return node;
//}
//
//void PrevOrder(BTNode* root)
//{
//	if (!root)
//		return;
//
//	cout << root->data << ' ';
//	PrevOrder(root->left);
//	PrevOrder(root->right);
//}
//
//
//int main()
//{
//	BTNode* n1 = BuyTreeNode(1);
//	BTNode* n2 = BuyTreeNode(2);
//	BTNode* n3 = BuyTreeNode(3);
//	BTNode* n4 = BuyTreeNode(4);
//	BTNode* n5 = BuyTreeNode(5);
//	BTNode* n6 = BuyTreeNode(6);
//	BTNode* n7 = BuyTreeNode(7);
//	BTNode* n8 = BuyTreeNode(8);
//	BTNode* n9 = BuyTreeNode(9);
//	BTNode* n10 = BuyTreeNode(10);
//
//	n1->left = n2;
//	n1->right = n3;
//	n2->left = n4;
//	n3->left = n5;
//	n3->right = n6;
//	n5->left = n7;
//	n6->right = n8;
//	n4->left = n9;
//	n4->right = n10;
//
//	//PrevOrder(n1);
//	//cout << endl;
//
//	int k = 4;
//	cout << TreeKLevelSize(n1, k) << endl;
//
//	return 0;
//}