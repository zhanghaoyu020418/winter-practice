//#define _CRT_SECURE_NO_WARNINGS 1
////
////#include <iostream>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 10000010;
////bool st[N];
////int prime[N];
////int n;
////
////int main()
////{
////	cin >> n;
////	int cnt = 0;
////	for (int i = 2; i <= n; i++)
////	{
////		if (!st[i])
////			prime[cnt++] = i;
////		for (int j = 0; prime[j] <= n * i; j++)
////		{
////			st[prime[j] * i] = true;
////			if (i % prime[j] == 0) break;
////		}
////	}
////	cout << cnt << endl;
////	return 0;
////}
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 10000010;
//int n;
//bool st[N];
//int cnt;
//int prime[N];
//
//int main()
//{
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])//���û�б�ɸ����˵��������������
//			prime[cnt++] = i;//��ɸ���������ŵ�һ��������
//		for (int j = 0; prime[j] <= n / i; j++)//i * prime[j] <= n,i��n�����������
//		{
//			st[prime[j] * i] = true;//ÿ�ζ�����С������ɸ�����е���
//			if (i % prime[j] == 0)
//				break;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}
