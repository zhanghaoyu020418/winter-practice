//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e8 + 10;
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
//		for (int j = 0; prime[j] <= n * i; j++)
//		{
//			st[prime[j] * i] = true;//ÿ�ζ�����С������ɸ�����е���
//			if (i % prime[j] == 0)
//				break;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}