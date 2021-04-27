#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

BTNode* BuyTreeNode(BTDataType val)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->_data = val;
	node->_left = node->_right = NULL;

	return node;
}

void test1()
{
	BTNode* A = BuyTreeNode('A');
	BTNode* B = BuyTreeNode('B');
	BTNode* C = BuyTreeNode('C');
	BTNode* D = BuyTreeNode('D');
	BTNode* E = BuyTreeNode('E');
	BTNode* F = BuyTreeNode('F');
	BTNode* G = BuyTreeNode('G');
	BTNode* H = BuyTreeNode('H');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	E->_right = H;
	C->_left = F;
	C->_right = G;

	BinaryTreeInOrder(A);
	cout << endl;
	BinaryTreePrevOrder(A);
	cout << endl;
	BinaryTreePostOrder(A);
	cout << endl;

	cout << "叶子结点结点的个数:> " << BinaryTreeLeafSize(A) << endl;
	cout << "结点个数:> " << BinaryTreeSize(A) << endl;
	cout << "第K层的结点个数:> " << BinaryTreeLevelKSize(A, 4) << endl;

	BTNode* findNode = BinaryTreeFind(A, 'C');
	cout << findNode->_left->_data << endl;
}

void test2()
{
	BTNode* A = BuyTreeNode('A');
	BTNode* B = BuyTreeNode('B');
	BTNode* C = BuyTreeNode('C');
	BTNode* D = BuyTreeNode('D');
	BTNode* E = BuyTreeNode('E');
	BTNode* F = BuyTreeNode('F');
	BTNode* G = BuyTreeNode('G');
	BTNode* H = BuyTreeNode('H');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	E->_right = H;
	C->_left = F;
	C->_right = G;

	//BinaryTreePrevOrder(A);
	//cout << endl;
	//BinaryTreePrev(A);
	//cout << endl;

	//BinaryTreePostOrder(A);
	//cout << endl;
	//BinaryTreePost(A);
	//cout << endl;
	//BinaryTreePost2(A);
	//cout << endl;

	//BinaryTreeInOrder(A);
	//cout << endl;
	//BinaryTreeIn(A);
	//cout << endl;
}


void test3()
{
	BTNode* A = BuyTreeNode('A');
	BTNode* B = BuyTreeNode('B');
	BTNode* C = BuyTreeNode('C');
	BTNode* D = BuyTreeNode('D');
	BTNode* E = BuyTreeNode('E');
	BTNode* F = BuyTreeNode('F');
	BTNode* G = BuyTreeNode('G');
	BTNode* H = BuyTreeNode('H');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	E->_right = H;
	C->_left = F;
	C->_right = G;

	BinaryTreeLevelOrder(A);
	cout << endl;
}

int main()
{
	test3();

	return 0;
}