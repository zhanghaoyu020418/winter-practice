//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1001;
//float a[N];
//int cnt;
//
//int main()
//{
//	fill(a, a + N, -1);
//	int cnt1, cnt2;
//	cin >> cnt1;
//	while (cnt1--)
//	{
//		int index;
//		float num;
//		cin >> index >> num;
//		if (a[index] == -1)
//		{
//			a[index] = 0;
//			cnt++;
//		}
//		a[index] += num;
//	}
//	cin >> cnt2;
//	while (cnt2--)
//	{
//		int index;
//		float num;
//		cin >> index >> num;
//		if (a[index] == -1)
//		{
//			a[index] = 0;
//			cnt++;
//		}
//		a[index] += num;
//	}
//	cout << cnt;
//	for (int i = cnt - 1; i >= 0; i--)
//			cout << ' ' << i << ' ' << a[i];
//	return 0;
//}