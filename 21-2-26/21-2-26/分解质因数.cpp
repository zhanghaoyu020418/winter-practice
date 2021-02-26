#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

const int N = 110;
int n;
int s[N];

int main()
{
	cin >> n;

	while (n--)
	{
		memset(s, 0, sizeof s);
		int num;
		cin >> num;
		while (num != 1)
		{
			
		}
		for (int i = 1; i < 101; i++)
		{
			if (!s[i])
			{
				cout << i << ' ' << s[i] << endl;
			}
		}
		cout << endl;
	}
	return 0;
}