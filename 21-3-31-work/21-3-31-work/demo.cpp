#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int N = 200003, null = 0x3f3f3f3f;

int h[N];

int find(int x)
{
	int k = (x % N + N) % N;
	while (h[k] != null && h[k] != x)
	{
		k++;
		if (k == N) k = 0;
	}
	return k;
}

int main()
{
	int n;
	cin >> n;
	memset(h, 0x3f, sizeof h);
	while (n--)
	{
		int val;
		string op;
		cin >> op >> val;
		if (op == "I")
			h[find(val)] = val;
		else
		{
			if (h[find(val)] == null) cout << "No" << endl;
			else cout << "Yes" << endl;
		}
	}
	return 0;
}