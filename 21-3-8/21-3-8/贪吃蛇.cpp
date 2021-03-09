#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int x;
		cin >> x;
		for (int i = 1; i <= x; i++)
		{
			for (int j = 1; j <= x; j++)
			{
				int Min = min(min(i, j), min(x - i + 1, x - j + 1));
				cout << Min << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}