#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

ListNode* BuyNewNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->_data = x;
	newNode->_next = newNode->_prev = NULL;
	return newNode;
}

// �������������ͷ���.
ListNode* ListCreate()
{
	ListNode* pHead = BuyNewNode(0);
	pHead->_next = pHead;           // �ص�Ҫ��pHeadָ���Լ���Ҫ��Ȼ�Ͳ���ѭ��������
	pHead->_prev = pHead;
	return pHead;
}

// ˫����������
void ListDestory(ListNode* pHead)
{
	ListNode* cur = pHead->_next;// ��Ϊ��ͷ�������Ҫ�ӵڶ�����㿪ʼ
	while (cur != pHead)         // ��֮ǰ�ı�����ֹͣ��ʽ��̫һ��
	{
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
}
// ˫�������ӡ
void ListPrint(ListNode* pHead)
{
	ListNode* cur = pHead->_next; 
	while (cur != pHead)
	{
		ListNode* next = cur->_next;
		cout << cur->_data << ' ';
		cur = next;
	}
	cout << endl;
}


// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
	// ��ͷָ��ֱ����β���
	//ListNode* tail = pHead->_prev;
	//ListNode* newNode = BuyNewNode(x);

	//tail->_next = newNode;
	//newNode->_prev = tail;
	//
	//newNode->_next = pHead;
	//pHead->_prev = newNode;

	ListInsert(pHead, x);
}
// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next); // ???
	//ListNode* tail = pHead->_prev;
	//ListNode* tailPrev = tail->_prev;

	//tailPrev->_next = pHead;
	//pHead->_prev = tailPrev;

	//free(tail);
	//tail = NULL;
	ListErase(pHead->_prev);

}
// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
	//ListNode* newNode = BuyNewNode(x);
	//ListNode* first = pHead->_next;
	//
	//newNode->_next = first;
	//first->_prev = newNode;

	//pHead->_next = newNode;
	//newNode->_prev = pHead;

	ListInsert(pHead->_next, x);
}
// ˫������ͷɾ
void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next);
	//ListNode* first = pHead->_next;
	//ListNode* second = first->_next;
	//free(first);

	//pHead->_next = second;
	//second->_prev = pHead;

	ListErase(pHead->_next);

}



// ˫���������
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
			return cur;
		cur = cur->_next;
	}
	return NULL;
}



// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* newNode = BuyNewNode(x);
	ListNode* prev = pos->_prev;

	prev->_next = newNode;
	newNode->_prev = prev;

	newNode->_next = pos;
	pos->_prev = newNode;
}
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	ListNode* prev = pos->_prev;
	ListNode* next = pos->_next;
	free(pos);

	prev->_next = next;
	next->_prev = prev;
}