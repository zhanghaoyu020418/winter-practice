//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int fun(stack<int>& sk)
//{	// 拿出栈顶元素再放回栈顶个元素，这样等于没有操作，
//	// 但是如果只有一个元素在栈中，说明这个元素既是栈顶元素也是栈顶元素
//	// 此时就可以取出这个元素不用再放回stack中了
//	int res = sk.top();
//	sk.pop();
//	if (sk.empty())
//		return res;
//	int last = fun(sk);
//	sk.push(res);
//	return last;
//}
//
//void reverseStack(stack<int>& sk)
//{
//	if (sk.empty())
//		return;
//	int last = fun(sk);
//	reverseStack(sk);
//	sk.push(last);
//}
//
//int main()
//{
//	stack<int> sk;
//	sk.push(1);
//	sk.push(2);
//	sk.push(3);
//	sk.push(4);
//	sk.push(5);
//	reverseStack(sk);
//	while (!sk.empty())
//	{
//		cout << sk.top() << ' ';
//		sk.pop();
//	}
//	return 0;
//}