#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

const int N = 1e5;
int n;
int h[N];

bool check(long long E)
{
	for (int i = 0; i < n; i++)
	{
		E = 2 * E - h[i];
		if (E < 0)
			return false;
	}
	return true;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);

	//¶þ·Ö
	int l = 1, r = 1e5;
	while (l < r)
	{
		long long  mid = l + r >> 1;
		if (check(mid))
			r = mid;
		else
			l = mid + 1;
	}
	cout << l << endl;
	return 0;
}
