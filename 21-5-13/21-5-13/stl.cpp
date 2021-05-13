#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <list>

using namespace std;

int main() {
	queue<int, list<int>> q;
	queue<int, vector<int>> v;
	v.push(19);
	v.pop();	
	rb_tree<int, int, identity<int>, less<int>> itree;
	return 0;
}