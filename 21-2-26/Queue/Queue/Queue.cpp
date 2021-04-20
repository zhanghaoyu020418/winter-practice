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

// 初始化队列 
void QueueInit(Queue* q)
{
	q->_front = NULL;
	q->_rear = NULL;
}
// 队尾入队列 
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
// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);
	if (q->_front == q->_rear) // 只有一个元素的时候
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
// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_rear->_data;
}
// 获取队列中有效元素个数 
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
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* q)
{
	return ((q->_front == q->_rear) && (q->_front == NULL));
}
// 销毁队列 
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