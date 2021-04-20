#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void StackCheckCapacity(Stack*ps)
{
	if (ps->_capacity == ps->_top + 1)
	{
		ps->_capacity *= 2;
		STDataType *newStackArr = (STDataType*)realloc(ps->_a, sizeof(STDataType) * ps->_capacity);
		if (newStackArr)
		{
			ps->_a = newStackArr;
		}
		else
		{
			cout << "realloc failed" << endl;
			assert(NULL);
		}
	}
}

// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->_a)
	{
		ps->_capacity = 4;
		ps->_top = -1;
	}
}
// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	StackCheckCapacity(ps);
	ps->_a[++ps->_top] = data;
	
}
// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != -1);
	ps->_top--;
}
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != -1);
	return ps->_a[ps->_top];
}
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top + 1;
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == -1;
}
// ����ջ 
void StackDestroy(Stack* ps)
{
	free(ps->_a);
	ps->_a = NULL;
}
