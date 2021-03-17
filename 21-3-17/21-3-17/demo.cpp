#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;
	for (int i = 1; i <= 10; i++)
		s.insert(i);
	s.insert(4);
	cout << *s.begin() << endl;
	cout << *s.lower_bound(4) << endl;
	cout << *s.upper_bound(5) << endl;
	return 0;
}