#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"


// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// ����������
void BinaryTreeDestory(BTNode** root);
// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) // ���սڵ��˾ͷ���0
		return 0;
	// �����������Ľ��������������Ľ�����
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL) // ���սڵ��˾ͷ���0
		return 0;
	if (root->_left == NULL && root->_right == NULL) // ��Ҷ�ӽ��ͷ���1
		return 1;
	// ������������Ҷ�ӽ�����������Ҷ�ӽ��
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right); 
	
}

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL || k < 1) // ������˿սڵ���ߵ���С��K���λ�þ�ֱ�ӵ�����0
		return 0;
	if (k == 1)                // ������˵�K��ͷ���1
		return 1;

	// �Ż���������K-1��Ľ���������������K-1��Ľ�����
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}

// ����������ֵΪx�Ľڵ�
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

// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
		return;

	cout << root->_data << ' ';
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);

}

// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	cout << root->_data << ' ';
	BinaryTreeInOrder(root->_right);
}

// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
		return;

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	cout << root->_data << ' ';

}

// �������
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

// �ж϶������Ƿ�����ȫ������
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

// �����������1
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
	
	while (!ans.empty()) // ����ջ�е�Ԫ�������������
	{
		cout << ans.top()->_data << ' ';
		ans.pop();
	}
}

// �����������2
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
		// ���cur������ߵ�Ҷ�ӽ��Ϊ�ջ������������߶�û�д�ӡ���ͽ�cur��ջ
		if (cur->_left && cur->_left != root && cur->_right != root) 
			sk.push(cur->_left);
		// �����ߺ����Ѿ���ӡ���ˣ������ұߵĺ���û�д�ӡ���������ұߵ�Ҷ���Ϊ�գ������ܴ�ӡ���ͽ�cur����ջ
		else if (cur->_right && cur->_right != root)
			sk.push(cur->_right);
		// cur�������ߵĺ��Ӷ��Ѿ���ӡ�����Ǿ�ֱ�Ӵ�ӡcur�Լ���ֵ���Ҵ�ӡ����Ҫ����ӡ����Ԫ�س�ջ
		// ����root�����һ����δ�ӡ��Ԫ�أ������������ж�Ԫ���Ƿ�Ҫ��ջ
		else
		{
			cout << cur->_data << ' ';
			sk.pop();
			root = cur; // ���һ��cur�������Ѿ�����ӡ����
		}
	}
}

// �ǵݹ�ʵ���������
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