#pragma once
#include <iostream>

using namespace std;


template <class T >
class CMyTree_Arr
{
	T     *pBuffer;
	int    len;
	int    max_size;
public:
	CMyTree_Arr();
	~CMyTree_Arr();
	void clear();
	bool find(const T & find_val) const;
	void init_tree(T arr[], int length);
	void append_tree_node(T const & data);
	void printf_tree();//这个操作知识用来测试，先序中序后序树的
	T get_parent_val(T const & findval);
	T get_leftchild(T const & findval);
	T get_rightchild(T const & findval);
	T get_leftbrother(T const & findval);
	T get_rightbrother(T const & findval);
private:
	int _find(const T & find_val) const;
	void _printf_tree(int index);//index是从哪个结点开始遍历，默认是0就是根节点

};

template<class T>
void CMyTree_Arr<T>::init_tree(T arr[], int length)
{
	clear();
	pBuffer = new T[length];
	if (length > 0)
	{
		len = max_size = length;
		for (int i = 0; i < len; i++)
			pBuffer[i] = arr[i];
	}
}

template<class T>
T CMyTree_Arr<T>::get_rightbrother(T const & findval)
{
	int index = _find(findval);
	if (index && index % 2)
	{
		int father_index = (index - 1) / 2;
		int right_brother = father_index * 2 + 2;
		return pBuffer[right_brother];
	}
	return NULL;
}

template <class T>
T CMyTree_Arr<T>::get_leftbrother(T const & findval)
{
	int index = _find(findval);
	if (index && index % 2 == 0)
	{
		int father_index = (index - 1) / 2;
		int left_brother = 2 * father_index + 1;
		return pBuffer[left_brother];
	}
	throw "No Existence";
}

template<class T>
T CMyTree_Arr<T>::get_rightchild(T const & findval)
{
	int index = _find(findval);
	if (index * 2 + 2 <= len)
		return pBuffer[2 * index + 2];
	else
		throw "No Existence";
}

template<class T>
T CMyTree_Arr<T>::get_leftchild(T const & findval)
{
	int index = _find(findval);
	if (index * 2 + 1 <= len)
		return pBuffer[2 * index + 1];
	else
		throw "No Existence";
}

template<class T>
T CMyTree_Arr<T>::get_parent_val(T const & findval)
{
	int index = _find(findval);
	if (index > 1)
		return pBuffer[(index - 1) / 2];
	else
		throw "No Existence";
}


template <class T>
void CMyTree_Arr<T>::_printf_tree(int index)
{
	//先序遍历 NLR
	//if (len > index)
	//{
	//	printf("%d ", pBuffer[index]);
	//	_printf_tree(2 * index + 1);
	//	_printf_tree(2 * index + 2);
	//}

	//中序遍历 LNR
	//if (len > index)
	//{
	//	_printf_tree(2 * index + 1);
	//	cout << pBuffer[index] << ' ';
	//	_printf_tree(2 * index + 2);
	//}

	//后序遍历 LRN
	if (len > index)
	{
		_printf_tree(2 * index + 1);
		_printf_tree(2 * index + 2);
		cout << pBuffer[index] << ' ';
	}

}


template <class T>
void CMyTree_Arr<T>::printf_tree()
{
	_printf_tree(0);
}

template<class T>
void CMyTree_Arr<T>::append_tree_node(const T & data)
{
	if (len >= max_size)
	{
		max_size = max_size * 2 ? max_size * 2 : 1;
		T * ptmp = new T[max_size];
		for (int i = 0; i < len; i++)
			ptmp[i] = pBuffer[i];
		if (pBuffer)
			delete[]pBuffer;
		pBuffer = ptmp;
	}
	pBuffer[len++] = data;
}

template<class T>
int CMyTree_Arr<T>::_find(const T & find_val) const
{
	for (int i = 0; i < len; i++)
	{
		if (pBuffer[i] == find_val)
			return i;
	}
	return -1;
}

template<class T>
bool CMyTree_Arr<T>::find(const T& find_val) const
{
	return _find(find_val) != -1;
}

template<class T>
void CMyTree_Arr<T>::clear()
{
	if (pBuffer)
		delete[] pBuffer;
	len = max_size = 0;
}


template<class T>
CMyTree_Arr<T>::~CMyTree_Arr()
{
	clear();
}

template<class T>
CMyTree_Arr<T>::CMyTree_Arr()
{
	pBuffer = NULL;
	len = max_size = 0;
}