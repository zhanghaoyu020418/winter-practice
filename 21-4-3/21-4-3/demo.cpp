//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//const int N = 40;
//LL arr[N];
//
//int main()
//{
//	LL n1, n2;
//	int k;
//	while (cin >> k, k)
//	{
//		cin >> n1 >> n2;
//		LL num = n1 + n2;
//		int t = 0;
//		do
//		{
//			arr[t++] = num % k;
//			num /= k;
//		} while (num);
//		for (int i = t - 1; i >= 0; i--)
//			cout << arr[i];
//		cout << endl;
//	}
//	return 0;
//}