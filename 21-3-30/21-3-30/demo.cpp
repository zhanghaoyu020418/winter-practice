#define _CRT_SECURE_NO_WARNINGS 1
#include "SqeList.h"

void test1()
{
	SeqList l1;
	SeqListInit(&l1);

	SeqListPushBack(&l1, 1);
	SeqListPushBack(&l1, 2);
	SeqListPushBack(&l1, 3);
	SeqListInsert(&l1, 1, 4);
	SeqListPrint(&l1);
	SeqListErase(&l1, 2);

	SeqListPrint(&l1);


	SeqListDestory(&l1);
}

int main()
{
	test1();
	return 0;
}