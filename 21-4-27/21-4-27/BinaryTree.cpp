#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"


// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// 二叉树销毁
void BinaryTreeDestory(BTNode** root);
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) // 到空节点了就返回0
		return 0;
	// 返回左子树的结点个数和右子树的结点个数
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL) // 到空节点了就返回0
		return 0;
	if (root->_left == NULL && root->_right == NULL) // 到叶子结点就返回1
		return 1;
	// 返回左子树的叶子结点和右子树的叶子结点
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right); 
	
}

// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL || k < 1) // 如果到了空节点或者到了小于K层的位置就直接当返回0
		return 0;
	if (k == 1)                // 如果到了第K层就返回1
		return 1;

	// 放回左子树的K-1层的结点个数和右子树的K-1层的结点个数
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	if (root->_data == x)
		return root;

	BTNode* leftNode = BinaryTreeFind(root->_left, x);
	if (leftNode)
		return leftNode;
	
	BTNode* rightNode = BinaryTreeFind(root->_right, x);

	if (rightNode)
		return rightNode;
	else
		return NULL;
}

// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
		return;

	cout << root->_data << ' ';
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);

}

// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	cout << root->_data << ' ';
	BinaryTreeInOrder(root->_right);
}

// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
		return;

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	cout << root->_data << ' ';

}

// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	if (root == NULL)
		return;
	queue<BTNode*> q;
	q.push(root);
	while (!q.empty())
	{
		BTNode* tmp = q.front();
		q.pop();
		cout << tmp->_data << ' ';
		if (tmp->_left)
			q.push(tmp->_left);
		if (tmp->_right)
			q.push(tmp->_right);
	}
}

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);

void BinaryTreePrev(BTNode* root)
{
	stack<BTNode*> sk;
	sk.push(root);
	while (!sk.empty())
	{
		BTNode* tmp = sk.top();
		sk.pop();

		cout << tmp->_data << ' ';

		if (tmp->_right)
			sk.push(tmp->_right);
		if (tmp->_left)
			sk.push(tmp->_left);
	}
}

// 后序遍历方法1
void BinaryTreePost(BTNode* root)
{
	stack<BTNode*> sk;
	stack<BTNode*> ans;

	sk.push(root);

	while (!sk.empty())
	{
		BTNode* tmp = sk.top();
		ans.push(tmp);
		sk.pop();

		if (tmp->_left)       
			sk.push(tmp->_left);
		if (tmp->_right)
			sk.push(tmp->_right);
	}
	
	while (!ans.empty()) // 将答案栈中的元素逆序输出出来
	{
		cout << ans.top()->_data << ' ';
		ans.pop();
	}
}

// 后序遍历方法2
void BinaryTreePost2(BTNode* root)
{
	if (root == NULL)
		return;

	stack<BTNode*> sk;
	BTNode* cur = NULL;
	sk.push(root);
	while (!sk.empty())
	{
		cur = sk.top();
		// 如果cur是最左边的叶子结点为空或者是左右两边都没有打印过就将cur入栈
		if (cur->_left && cur->_left != root && cur->_right != root) 
			sk.push(cur->_left);
		// 如果左边孩子已经打印过了，并且右边的孩子没有打印过或者最右边的叶结点为空（即不能打印）就将cur再入栈
		else if (cur->_right && cur->_right != root)
			sk.push(cur->_right);
		// cur左右两边的孩子都已经打印过了那就直接打印cur自己的值并且打印过后要将打印过得元素出栈
		// 并用root来标记一下这次打印的元素，方便后面可以判断元素是否要入栈
		else
		{
			cout << cur->_data << ' ';
			sk.pop();
			root = cur; // 标记一下cur这个结点已经被打印过了
		}
	}
}

// 非递归实现中序遍历
void BinaryTreeIn(BTNode* root)
{
	if (root == NULL)
		return;
	stack<BTNode*> sk;
	while (!sk.empty() || root)
	{
		if (root)
		{
			sk.push(root);
			root = root->_left;
		}
		else
		{
			root = sk.top();
			sk.pop();
			cout << root->_data << ' ';
			root = root->_right;
		}
	}
}