//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int v[10] = {1, 5, 10, 50, 100, 500};
//
//int cnt[6];
//int res;
//int A;
//
//int main()
//{
//	cin >> A;
//	for (int i = 0; i < 6; i++)
//		cin >> cnt[i];
//	for (int i = 5; i >= 0; i--)
//	{                                 // ʹ��Ӳ�ҵ�����������ø���ֵ��Ӳ�Ҿ�����A/v[i]����
//		int t = min(A / v[i], cnt[i]);// ����Ҳû��Ӳ�ҿ���ʹ��
//		A -= t * cnt[i];              
//		res += t;
//	}
//	cout << res << endl;
//	return 0;
//}
