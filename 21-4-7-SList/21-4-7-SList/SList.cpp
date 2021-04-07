#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x) {
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->data = x;
	node->next = NULL;
	if (node)
		return node;
	else
		return NULL;
}

// �������ӡ
void SListPrint(SListNode* plist) {
	SListNode* cur = plist;
	while (cur) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x) {
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL) { // ��������Ϊ��
		*pplist = newnode;
	}
	else {
		SListNode* tail = *pplist;
		while (tail->next) { // �ҵ������β��
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x) {
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

// �������βɾ
void SListPopBack(SListNode** pplist) {
	// ����Ϊ��
	if (*pplist == NULL) {
		return;
	}
	// ������ֻ��һ�����
	else if ((*pplist)->next == NULL) {
		free(*pplist);
		*pplist = NULL;
	}
	else {
	// ��������һ�������ϵĽ��
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

// ������ͷɾ
void SListPopFront(SListNode** pplist) {
	assert(*pplist);
	SListNode * tmpnode = *pplist;
	*pplist = (*pplist)->next;
	free(tmpnode);
	tmpnode = NULL;
}

// ���������
SListNode* SListFind(SListNode** pplist, SLTDateType x) {
	assert(*pplist);
	SListNode* cur = (*pplist);
	while (cur) {
		if (cur->data == x) {
			return cur;
		}
		cur = cur->next;
	}

}

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode** ppos, SLTDateType x) {
	SListNode* newnode = BuySListNode(x);
	newnode->next = (*ppos)->next;
	(*ppos)->next = newnode;
}

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode** ppos) {
	SListNode* tmp = (*ppos)->next;
	(*ppos)->next = tmp->next;
	free(tmp);
	tmp = NULL;
}

// �����������
void SListDestory(SListNode** pplist) {
	SListNode* prev = NULL;
	SListNode* cur = *pplist;
	while (cur) {
		prev = cur;
		cur = cur->next;
		free(prev);
		prev = NULL;
	}
	*pplist = NULL;
}