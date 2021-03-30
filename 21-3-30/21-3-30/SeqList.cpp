#define _CRT_SECURE_NO_WARNINGS 1
#include "SqeList.h"

void SeqListInit(SeqList* pq)
{
	pq->a = NULL;
	pq->size = 0;
	pq->capacity = 0;
}

void SeqListDestory(SeqList* pq)
{
	assert(pq);
	free(pq->a);
	pq->a = NULL;

	pq->capacity = pq->size = 0;
}

void SeqListPrint(SeqList* pq)
{
	for (int i = 0; i < pq->size; i++)
	{
		cout << pq->a[i] << ' ';
	}
}

void SeqListCheck(SeqList* pq)
{
	if (pq->size == pq->capacity)
	{
		int newcapacity = pq->capacity == 0 ? 1 : pq->capacity * 2;
		SLDataType* newt = (SLDataType*)realloc(pq->a, sizeof(SLDataType) * newcapacity);
		if (!newt)
			assert(newt);
		pq->a = newt;
		pq->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* pq, SLDataType val)
{
	SeqListCheck(pq);
	pq->a[pq->size] = val;
	pq->size++;
}

void SeqListPopBack(SeqList* pq)
{
	assert(pq);
	pq->size--;
}

void SeqListPushFront(SeqList* pq, SLDataType val)
{
	SeqListCheck(pq);
	for (int i = pq->size - 1; i >= 0; i--)
	{
		pq->a[i + 1] = pq->a[i];
	}
	pq->a[0] = val;
	pq->size++;
}
void SeqListPopFront(SeqList* pq)
{
	for (int i = 1; i < pq->size; i++)
	{
		pq->a[i - 1] = pq->a[i];
	}
	pq->size--;
}

int SeqListFind(SeqList* pq, SLDataType val)
{
	for (int i = 0; i < pq->size; i++)
	{
		if (pq->a[i] == val)
			return i;
	}
	return -1;
}

void SeqListInsert(SeqList* pq, int pos, SLDataType val)
{
	SeqListCheck(pq);
	for (int i = pq->size - 1; i >= pos; i --)
	{
		pq->a[i + 1] = pq->a[i];
	}
	pq->a[pos] = val;
	pq->size++;
}

void SeqListErase(SeqList* pq, int pos)
{
	assert(pq);
	for (int i = pos; i < pq->size - 1; i++)
	{
		pq->a[i] = pq->a[i + 1];
	}
	pq->size--;
}