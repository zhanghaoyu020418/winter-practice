#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode *next;
}ListNode;


typedef ListNode Node;

int hasCycle(ListNode *head) 
{
	Node* tail = head;
	int tailval = 0;
	while (tail->next)
	{
		tail = tail->next;
	}
	tailval = tail->val;

	Node* cur = head;
	while (cur)
	{
		if (cur->val == tailval)
			return 1;
		cur = cur->next;
	}
	return 0;

}
int main()
{
	Node*p1 = (Node*)malloc(sizeof(Node));
	Node*p2 = (Node*)malloc(sizeof(Node));
	Node*p3 = (Node*)malloc(sizeof(Node));
	Node*p4 = (Node*)malloc(sizeof(Node));

	p1->val = 1;
	p2->val = 2;
	p3->val = 3;
	p4->val = 4;

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p2;

	printf("%d\n", hasCycle(p1));

	return 0;
}

