#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>

using namespace std;

vector<int> inorderTraversal(TreeNode* root) {
	stack<TreeNode*> sk;
	vector<int> ans;
	while (root != nullptr || !sk.empty()) {
		while (root != nullptr) {
			sk.push(root);
			root = root->left;
		}
		root = sk.top();
		sk.pop();
		ans.push_back(root->val);
		root = root->right;
	}
	return ans;
}

int main() 
{
	stack<int> sk;

	return 0;
}