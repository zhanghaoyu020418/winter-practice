#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;

struct Pre
{
	int l, r;
	bool operator< (const Pre& p)
	{
		return l * r < p.l * p.r;
	}
}pre[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n + 1; i++)
		cin >> pre[i].l >> pre[i].r;

	sort(pre, pre + n + 1);

	int res = -1e9, sum = 1;
	for (int i = 0; i < n; i++)
	{
		res = max(res, sum / pre[i].r);
		sum *= pre[i].l;
	}
	cout << res << endl;
	return 0;
}