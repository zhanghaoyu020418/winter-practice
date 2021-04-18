#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

ListNode* BuyNewNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->_data = x;
	newNode->_next = newNode->_prev = NULL;
	return newNode;
}

// 创建返回链表的头结点.
ListNode* ListCreate()
{
	ListNode* pHead = BuyNewNode(0);
	pHead->_next = pHead;           // 重点要让pHead指向自己，要不然就不是循环链表了
	pHead->_prev = pHead;
	return pHead;
}

// 双向链表销毁
void ListDestory(ListNode* pHead)
{
	ListNode* cur = pHead->_next;// 因为带头结点所以要从第二个结点开始
	while (cur != pHead)         // 和之前的遍历的停止方式不太一样
	{
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
}
// 双向链表打印
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


// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
	// 用头指针直接找尾结点
	//ListNode* tail = pHead->_prev;
	//ListNode* newNode = BuyNewNode(x);

	//tail->_next = newNode;
	//newNode->_prev = tail;
	//
	//newNode->_next = pHead;
	//pHead->_prev = newNode;

	ListInsert(pHead, x);
}
// 双向链表尾删
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
// 双向链表头插
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
// 双向链表头删
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



// 双向链表查找
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



// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* newNode = BuyNewNode(x);
	ListNode* prev = pos->_prev;

	prev->_next = newNode;
	newNode->_prev = prev;

	newNode->_next = pos;
	pos->_prev = newNode;
}
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
	ListNode* prev = pos->_prev;
	ListNode* next = pos->_next;
	free(pos);

	prev->_next = next;
	next->_prev = prev;
}