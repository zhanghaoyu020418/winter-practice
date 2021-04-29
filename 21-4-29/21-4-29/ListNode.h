#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <cstring>


struct ListNode
{
	ListNode* left;
	ListNode* right;
	int val;
};

ListNode* BuyNode(int val);
