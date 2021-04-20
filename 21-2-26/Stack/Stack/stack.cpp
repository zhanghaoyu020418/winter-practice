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

// 初始化栈 
void StackInit(Stack* ps)
{
	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->_a)
	{
		ps->_capacity = 4;
		ps->_top = -1;
	}
}
// 入栈 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	StackCheckCapacity(ps);
	ps->_a[++ps->_top] = data;
	
}
// 出栈 
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != -1);
	ps->_top--;
}
// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != -1);
	return ps->_a[ps->_top];
}
// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top + 1;
}
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == -1;
}
// 销毁栈 
void StackDestroy(Stack* ps)
{
	free(ps->_a);
	ps->_a = NULL;
}
