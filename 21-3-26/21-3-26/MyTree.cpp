#define _CRT_SECURE_NO_WARNINGS 1
#include "MyTree.h"

int main()
{
	CMyTree_Arr<int> tree;
	for (int i = 1; i <= 10; i++)
		tree.append_tree_node(i);
	cout << tree.get_leftbrother(9) << endl;
	cout << tree.get_leftchild(3) << endl;
	cout << tree.find(3) << endl;
	cout << tree.get_parent_val(10) << endl;
		//cout << tree.get_leftbrother(7) << endl;
	return 0;
}