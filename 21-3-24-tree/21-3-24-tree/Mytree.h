#pragma once

#include <iostream>

using namespace std;

template <class T>

class CMyTree_List
{
	struct TreeNode
	{
		T	data;
		TreeNode* parent;
		TreeNode* brother;
		TreeNode* child;
	};
	TreeNode* pRoot;//根节点指针
public:
	CMyTree_List();
	~CMyTree_List();
	void clear();//当作接口，不做实际用途，因为不想要传参过去，但是不传参有又递归不了
	bool find(const T& finddata) const; // 查找,仅仅只是一个接口，不让外面拿到数据，以此来保护数据
	void insert(const T& insertdata, const T & finddata, bool ischild = true);
private:
	void _clear(TreeNode* root);//用递归实现删除树
	TreeNode*_find(TreeNode* root, const T & finddata) const
	{
		if (root)
		{
			if (root->data == finddata)
				return root;
			TreeNode* tmp = _find(root->brother, finddata);
			if (tmp)
				return tmp;
			return _find(root->child, finddata);)
		}
		return NULL;
	}
};

template <class T>
void CMyTree_List<T>::insert(const T& insertdata, const T & finddata, bool ischild)
{

}

template <class T>
bool CMyTree_List<T>::find(const T& finddata) const
{
	return _find(pRoot, finddata) != NULL;
}

//删除
template <class T>
void CMyTree_List<T>::_clear(TreeNode* root)
{
	if (root)
	{
		_clear(root->brother);
		_clear(root->child);
		delete root;
		root = NULL;
	}
}


template <class T>
void CMyTree_List<T>::clear()
{
	_clear(pRoot);
}

template <class T>
CMyTree_List<T>::~CMyTree_List()
{
	clear();
}

template <class T>
CMyTree_List<T>::CMyTree_List()
{
	pRoot = NULL;
}