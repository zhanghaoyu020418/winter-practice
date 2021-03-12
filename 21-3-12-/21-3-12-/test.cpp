//////#include <iostream>
//////#include <algorithm>
//////
//////using namespace std;
//////
//////const int N = 110;
//////
//////struct Segment
//////{
//////	int l, r;
//////	bool operator< (const Segment& t) const
//////	{
//////		return l < t.l;
//////	}
//////}s[N];
//////
//////int main()
//////{
//////	int n, m;
//////	cin >> n >> m;
//////	for (int i = 0; i < m; i++)
//////		cin >> s[i].l >> s[i].r;
//////	sort(s, s + m);
//////
//////	int L = s[0].l, R = s[0].r;
//////	int sum = 0;
//////	for (int i = 0; i < m; i++)
//////	{
//////		if (s[i].l <= R) R = max(s[i].r, R);
//////		else
//////		{
//////			sum += R - L + 1;
//////			R = s[i].r;
//////			L = s[i].l;
//////		}
//////	}
//////	sum += R - L + 1;
//////	cout << n - sum + 1 << endl;
//////	return 0;
//////}
////
////
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////int get(char n)
////{
////	if (n <= '9') return n - '0';
////	return n - 'A' + 10;
////}
////
////int turn10(string num, int A)
////{
////	int res = 0;
////	for (int i = 0; i < num.size(); i++)
////		res = res * A + get(num[i]);
////	return res;
////}
////
////int main()
////{
////	int A;
////	string num;//A进制下的num可能有字母，所以要用string
////	cin >> num >> A;
////	cout << turn10(num, A) << endl;
////	return 0;
////}
////
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int n, m;
//const int N = 100010;
//int a[N];
//
//bool check(double mid)
//{
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		res += a[i] / mid;
//		if (res >= m) return true;
//	}
//	return false;
//}
//
//int main()
//{
//	//cin >> n >> m;
//	//for (int i = 0; i < n; i++) cin >> a[i];
//	//double l = 0, r = 1e9;
//	//while (r - l > 1e-4)
//	//{
//	//	double mid = (l + r) / 2;
//	//	if (check(mid)) l = mid;
//	//	else r = mid;
//	//}
//	//printf("%.2lf\n", l);
//	return 0;
//}