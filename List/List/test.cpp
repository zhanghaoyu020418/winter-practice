#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList1()
{
	ListNode* List = ListCreate();

	ListPushBack(List, 1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);

	ListPrint(List);

	ListPopBack(List);
	ListPopBack(List);

	ListPrint(List);

	ListPushFront(List, 1);
	ListPushFront(List, 2);
	ListPushFront(List, 3);
	ListPushFront(List, 4);

	ListPrint(List);

	ListPopFront(List);
	ListPopFront(List);
	ListPopFront(List);

	ListPrint(List);

	ListDestory(List);
}

void TestList2()
{
	ListNode* List = ListCreate();

	ListPushBack(List, 1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);

	ListNode* findNode = ListFind(List, 3);

	ListInsert(findNode, 666);
	ListInsert(findNode, 888);

	ListErase(findNode);
	ListPopBack(List);

	ListPrint(List);
	

	ListDestory(List);
}

void TestList3()
{
	ListNode* List = ListCreate();

	ListPushBack(List, 2);
	ListPopBack(List);
	ListPushFront(List, 6);
	ListPushFront(List, 6);
	ListPopFront(List);

	ListPrint(List);

	ListDestory(List);
}

int main()
{
	TestList3();
	return 0;
}