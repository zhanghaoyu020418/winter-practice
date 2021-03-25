#pragma once

template <class T>

class CMyTree_Arr
{
	T	   *pBuuff;
	size_t len;
	size_t maxsize;
public:
	CMyTree_Arr();
	~CMyTree_Arr();
	void clear();
	bool find(const T & findval) const;

};

template <class T>
bool CMyTree_Arr<T>::find(const T & findval) const
{

}


template <class T>
void CMyTree_Arr<T>::clear()
{
	
}


template <class T>
CMyTree_Arr<T>::~CMyTree_Arr()
{
	clear();
}

template<class T>
CMyTree_Arr<T>::CMyTree_Arr()
{
	pBuuff = NULL;
	len = 0;
	maxsize = 0;
}

