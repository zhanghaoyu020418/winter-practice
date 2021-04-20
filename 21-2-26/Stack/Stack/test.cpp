#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void TestStack1()
{
	Stack myStack;
	StackInit(&myStack);

	StackPush(&myStack, 1);
	StackPush(&myStack, 2);
	StackPush(&myStack, 3);
	StackPush(&myStack, 4);
	StackPush(&myStack, 5);
	StackPush(&myStack, 6);
	
	while (!StackEmpty(&myStack))
	{
		cout << StackTop(&myStack) << ' ';
		StackPop(&myStack);
	}

	cout << StackSize(&myStack);


	StackDestroy(&myStack);
}

int main()
{
	TestStack1();
	return 0;
}

