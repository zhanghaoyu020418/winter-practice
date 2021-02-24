#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;
int a[N];
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int Max = 0;
	for (int i = 0, j = 1; i < n; i++)
	{
		int num = 0;
		while (j < n && a[j] != a[j - 1])
			num++, j++;
		Max = max(Max, num);
		i = j;
	}
	cout << Max << endl;
	return 0;
}