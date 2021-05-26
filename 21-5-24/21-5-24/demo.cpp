#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

//vector<int> inorderTraversal(TreeNode* root) {
//	stack<TreeNode*> sk;
//	vector<int> ans;
//	while (root != nullptr || !sk.empty()) {
//		while (root != nullptr) {
//			sk.push(root);
//			root = root->left;
//		}
//		root = sk.top();
//		sk.pop();
//		ans.push_back(root->val);
//		root = root->right;
//	}
//	return ans;
//}

int main() 
{/*
	stack<int> sk;
	double a(3.14);
	cout << a << endl;*/
	double a = 10.1, b = 20.2;
	swap(a, b);
	cout << a << ' ' << b << endl;

	return 0;
}