#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x) {
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->data = x;
	node->next = NULL;
	if (node)
		return node;
	else
		return NULL;
}

// 单链表打印
void SListPrint(SListNode* plist) {
	SListNode* cur = plist;
	while (cur) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x) {
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL) { // 特判链表为空
		*pplist = newnode;
	}
	else {
		SListNode* tail = *pplist;
		while (tail->next) { // 找到链表的尾部
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x) {
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

// 单链表的尾删
void SListPopBack(SListNode** pplist) {
	// 链表为空
	if (*pplist == NULL) {
		return;
	}
	// 链表中只有一个结点
	else if ((*pplist)->next == NULL) {
		free(*pplist);
		*pplist = NULL;
	}
	else {
	// 链表中有一个及以上的结点
	SListNode* prev = NULL;
	SListNode* tail = *pplist;
	while (tail->next) {
		prev = tail;
		tail = tail->next;
	}
	prev->next = NULL;
	free(tail);
	tail = NULL;
	}

}

// 单链表头删
void SListPopFront(SListNode** pplist) {
	SListNode * tmpnode = *pplist;
	*pplist = (*pplist)->next;
	free(tmpnode);
	tmpnode = NULL;
}

// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x);

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x);

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);

// 单链表的销毁
void SListDestory(SListNode* plist);