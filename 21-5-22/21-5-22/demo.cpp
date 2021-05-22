#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class A
{
public:
	//A(int a) : a(a) {}
	int fun1() { return a; }
	int fun2() const { return a; }
private:
	int a;
};


int main()
{
	/*char b = 'a';
	char& a = b;
	cout << sizeof(a) << endl;
	//*/
	//A a;
	//a.fun1();
	//a.fun2();
	//const A b;
	//b.fun2();
	string str;
	stack<string> t;
	t.push(str);
	t.push("hhhh");
	cout << t.size() << endl;
	return 0;
}