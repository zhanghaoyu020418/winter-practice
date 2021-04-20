#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

QListNode* BuyNewQueueNode( QDataType data)
{
	QListNode* newQueueNode = (QListNode*)malloc(sizeof(QListNode));
	if (newQueueNode)
	{
		newQueueNode->_data = data;
		newQueueNode->_next = NULL;
	}
	return newQueueNode;
}

// ��ʼ������ 
void QueueInit(Queue* q)
{
	q->_front = NULL;
	q->_rear = NULL;
}
// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	QListNode* newQueueNode = BuyNewQueueNode(data);
	if (q->_front == q->_rear && q->_front == NULL)
	{
		q->_front = q->_rear = newQueueNode;
	}
	else
	{
		q->_rear->_next = newQueueNode;
		q->_rear = newQueueNode;
	}
	q->_rear->_next = NULL;
}
// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	if (q->_front == q->_rear) // ֻ��һ��Ԫ�ص�ʱ��
	{
		free(q->_front);
		q->_front = q->_rear = NULL;
	}
	else
	{
		QListNode* delNode = q->_front;
		q->_front = delNode->_next;
		free(delNode);
	}
}
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_rear->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	int cnt = 0;
	QListNode* cur = q->_front;
	while (cur)
	{
		cur = cur->_next;
		cnt++;
	}
	return cnt;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q)
{
	return ((q->_front == q->_rear) && (q->_front == NULL));
}
// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	if (q->_front == NULL)
	{
		return;
	}
	else
	{
		while (q->_front)
			QueuePop(q);
	}
}