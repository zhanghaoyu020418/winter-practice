#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> heap; // 小根堆
	priority_queue<int> BHeap;                            // 大根堆
	for (int i = 9; i >= 0; i--)
		heap.push(i), BHeap.push(i);
	
	for (int i = 0; i < 9; i++)
	{
		cout << heap.top() << ' ';
		heap.pop();
	}

	cout << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << BHeap.top() << ' ';
		BHeap.pop();
	}


	return 0;
}