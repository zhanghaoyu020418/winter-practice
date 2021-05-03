#define _CRT_SECURE_NO_WARNINGS 1
// 用vector来模拟一个stack, 并用lower_bound函数直接替换第一个 >= w[i]的数字
// 这样使得数组中的数字一定是单调递增的
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 100010;

int w[N];
int q[N];
int n;
int cnt;

int main()
{
	fun1();
	fun2();
}

void fun1()
{
	vector<int> sk;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> w[i];

	sk.push_back(w[0]);
	for (int i = 1; i < n; i++)
	{
		if (w[i] > sk.back())
			sk.push_back(w[i]);
		else
			*lower_bound(sk.begin(), sk.end(), w[i]) = w[i];
	}
	cout << sk.size() << endl;
}

//用数组和二分来实现


int find(int x)
{
	int l = 1, r = cnt;
	while (l < r)
	{
		int mid = l + r >> 1;
		if (q[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return l;
}

void fun2()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i];

	q[++cnt] = w[1];
	for (int i = 2; i <= n; i++)
	{
		if (q[cnt] < w[i])
			q[++cnt] = w[i];
		else
		{
			int tmp = find(w[i]);
			q[tmp] = w[i];
		}
	}
	cout << cnt << endl;
}