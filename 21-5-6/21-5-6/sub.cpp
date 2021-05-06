#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> qmin;
	deque<int> qmax;
	int l = 0, r = 0;
	int a[] = { 43, 54, 21, 534, 53, 6, 2, 432, 65, 32, 24 };
	int num = 20;
	int sz = sizeof(a) / sizeof(a[0]);

	int res = 0;
	// [l, r)
	while (l < sz)
	{
		while (r < sz)
		{
			while (!qmin.empty() && a[qmin.front()] >= a[r])
				qmin.pop_back();
			qmin.push_back(r);
			while (!qmax.empty()&& a[qmax.front()] <= a[r])
				qmax.pop_back();
			qmax.push_back(r);
			if (a[qmax.front()] - a[qmin.front()] > num)
				break;
			r++;
		}
		res += r - l;
		if (qmin.front() == l)
			qmin.pop_front();
		if (qmax.front() == l)
			qmax.pop_front();
		l++;
	}
	cout << res << endl;
	return 0;
}