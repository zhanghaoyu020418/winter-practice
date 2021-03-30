#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>

using namespace std;


typedef int SLDataType;
typedef struct SeqList
{
	SLDataType * a;
	int size;
	int capacity;
}SeqList;

void SeqListInit(SeqList* pq);
void SeqListDestory(SeqList* pq);

void SeqListPrint(SeqList* pq);
void SeqListPushBack(SeqList* pq, SLDataType val);
void SeqListPopBack(SeqList* pq);
void SeqListPushFront(SeqList* pq, SLDataType val);
void SeqListPopFront(SeqList* pq);

int SeqListFind(SeqList* pq, SLDataType val);
void SeqListInsert(SeqList* pq, int pos, SLDataType val);
void SeqListErase(SeqList* pq, int pos);
