//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//int x[N];
//
//void solve()
//{
//	int N, R;
//	while (cin >> R >> N, N + 1 || R + 1)
//	{
//		for (int i = 0; i < N; i++)
//			cin >> x[i];
//
//		sort(x, x + N);
//
//		int i = 0, res = 0;
//		while (i < N)
//		{
//			// ������������˵�
//			int left = x[i++];
//
//			// �ڲ�������Χ������£�����������ĵ��λ��
//			while (i < N && x[i] <= left + R) i++;
//
//			// �ҵ��������ĵ�
//			int pos = x[i - 1];
//
//			// ����������Ҷˣ���i��Ϊ��һ������Ŀ�ͷ
//			while (i < N && x[i] <= pos + R) i++;
//			res++;
//		}
//		cout << res << endl;
//	}
//}
//
//int main()
//{
//	solve();
//	return 0;
//}