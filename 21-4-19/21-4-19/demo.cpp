#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	stack<string> sk;
	sk.push(")");
	cout << sk.top() << endl;
	char i = ')';
	cout << sk.top() == (string)i << endl;
	return 0;
}