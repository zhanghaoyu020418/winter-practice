#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void Test1() {
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
	SListNode* tmp = SListFind(&phead, 2);
	SListPrint(phead);
}

void Test2() {
	SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);

	SListNode* tmp = SListFind(&phead, 2);
	SListEraseAfter(&tmp);
	SListInsertAfter(&tmp, 32);
	SListPopFront(&phead);
	SListPopFront(&phead);

	SListPrint(phead);

}

int main() {
	Test2();

	return 0;
}