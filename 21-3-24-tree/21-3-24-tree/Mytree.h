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
	TreeNode* pRoot;//���ڵ�ָ��
public:
	CMyTree_List();
	~CMyTree_List();
	void clear();//�����ӿڣ�����ʵ����;����Ϊ����Ҫ���ι�ȥ�����ǲ��������ֵݹ鲻��
	bool find(const T& finddata) const; // ����,����ֻ��һ���ӿڣ����������õ����ݣ��Դ�����������
	void insert(const T& insertdata, const T & finddata, bool ischild = true);
private:
	void _clear(TreeNode* root);//�õݹ�ʵ��ɾ����
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

//ɾ��
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