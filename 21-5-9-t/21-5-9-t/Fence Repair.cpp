//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//void solve()
//{
//	int n;
//	priority_queue<int, vector<int>, greater<int> >heap;// Ð¡¸ù¶Ñ
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int val;
//		cin >> val;
//		heap.push(val);
//	}
//
//	long long res = 0;
//	while (heap.size() > 1)
//	{
//		int val1 = heap.top();
//		heap.pop();
//		int val2 = heap.top();
//		heap.pop();
//
//		res += val1 + val2;
//		heap.push(val1 + val2);
//
//	}
//	cout << res << endl;
//}
//
//int main()
//{
//	solve();
//	return 0;
//}