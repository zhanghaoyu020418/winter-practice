#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int main()
{
	cin >> n >> m;
	int squ = 0, rec = 0;
	int Min = min(n, m);
	long long sum = ((m * (m + 1)) / 2) * ((n * (n + 1)) / 2);
	while (Min >= 1)
	{
		squ += (n - Min + 1)*(m - Min + 1);
		Min--;
	}
	rec = sum - squ;
	cout << squ << ' ' << rec << endl;
	return 0;
}

