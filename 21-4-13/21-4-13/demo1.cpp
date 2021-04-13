#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

struct Seg
{
	int l, r;
	bool operator< (const Seg& w) const
	{
		return l < w.l;
	}
}seg[N];

int n;

int main()
{
	int L, R;
	cin >> L >> R;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		seg[i] = { l, r };
	}

	sort(seg, seg + n);

	int res = 0;
	// bool su = false;
	for (int i = 0; i < n; i++)
	{
		// 用双指针算法，先求出左端点小于L的最大的右端点是多少
		int r = -1e9;
		int j = i;
		while (j < n && seg[j].l <= L)
		{
			r = max(r, seg[j].r);
			j++;
		}
		if (r < L)
		{
			res = -1;
			break;
		}
		cout << r << endl;
		res++;
		if (r >= R)
		{
			//su = true;
			break;
		}
		L = r;

		i = j - 1;
	}

	// if (!su) cout << "-1" << endl;
	// else cout << res << endl;
	cout << res << endl;

	return 0;
}