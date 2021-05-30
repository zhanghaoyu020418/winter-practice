//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////int main()
////{
////	string str = "1,2,3,4,5,6,7";
////	string ans;
////	for (int i = 0; i < str.size(); i++)
////	{
////		if (str[i] != ',')
////			ans += str[i];
////	}
////	cout << ans << endl;
////	
////	return 0;
////}
//
//queue<string> split(string& str) {
//	queue<string> ans;
//	if (str.empty()) return ans;
//	int size = str.size();
//	int pre = 0;
//	for (int i = 0; i <= size; ++i) {
//		if (str[i] == ',' || i == size) {
//			ans.emplace(str.substr(pre, i - pre));
//			pre = i + 1;
//		}
//	}
//	return ans;
//}
//TreeNode* dpreorder(queue<string>& str) {
//	auto cur = str.front();
//	str.pop();
//	if (cur == "#") return nullptr;
//	TreeNode* root = new TreeNode(stoi(cur));
//	root->left = dpreorder(str);
//	root->right = dpreorder(str);
//	return root;
//}
//// Decodes your encoded data to tree.
//TreeNode* deserialize(string& data) {
//	// È¥µô¶ººÅ
//	queue<string> str = split(data);
//	return dpreorder(str);
//}
//
//int main()
//{
//	string str = "1,2,3,#,#,4,5";
//	TreeNode* root = deserialize(str);
//	return 0;
//}