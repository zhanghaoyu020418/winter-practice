//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int fun(stack<int>& sk)
//{	// �ó�ջ��Ԫ���ٷŻ�ջ����Ԫ�أ���������û�в�����
//	// �������ֻ��һ��Ԫ����ջ�У�˵�����Ԫ�ؼ���ջ��Ԫ��Ҳ��ջ��Ԫ��
//	// ��ʱ�Ϳ���ȡ�����Ԫ�ز����ٷŻ�stack����
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