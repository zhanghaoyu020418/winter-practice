#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct TreeNode
{
	TreeNode* left;
	TreeNode* right;
	char val;
};

TreeNode* CreatTree(int& i, string str)
{
	if (str[i] == '#')
	{
		i++;
		return NULL;
	}
		
	TreeNode* Node = (TreeNode*)malloc(sizeof(TreeNode));
	Node->val = str[i];
	i++;
	Node->left = CreatTree(i, str);
	Node->right = CreatTree(i, str);
	return Node;
}

void Inorder(TreeNode* root)
{
	if (root == NULL)
		return;
	Inorder(root->left);
	cout << root->val << ' ';
	Inorder(root->right);
}

int main()
{
	string str;
	cin >> str;
	int i = 0;
	TreeNode* root = CreatTree(i, str);
	Inorder(root);
	return 0;
}