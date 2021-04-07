#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main() {
	SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPushFront(&phead, 6);
	SListPushFront(&phead, 6);
	SListPushFront(&phead, 6);
	//SListPopFront(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPrint(phead);
	return 0;
}