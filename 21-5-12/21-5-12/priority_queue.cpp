//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int N = 10001;
//
//int a[N], b[N];
//int n, L, P;
//
//int main()
//{
//	cin >> n >> L >> P;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < n; i++)
//		cin >> b[i];
//
//	// �յ�Ҳ��Ϊ���ܼ��͵ļ���վ
//	a[n] = L;
//	b[n] = 0;
//	n++;
//
//	priority_queue<int> q;
//	int ans = 0, pos = 0;// ans�Ǽ��͵Ĵ�����pos�ǵ�ǰ���ڵ�λ��
//
//	for (int i = 0; i < n; i++)
//	{
//		int d = a[i] - pos;// ��Ҫ�ӵ�����
//
//		while (P < d)// ��ʣ�����������·�̵�ʱ��
//		{
//			if (q.empty())// ���û�б��õ��;�˵�����ܵ���
//			{
//				cout << "-1" << endl;
//				return 0;
//			}
//			P += q.top();// ��������������
//			q.pop();
//			ans++;// ���ʹ���++
//		}
//
//		P -= d;// ʣ���������ȥ·������
//		pos = a[i];// ���µ�ǰλ��
//		q.push(b[i]);// ����ǰ�ļ���վ����������priority_queue��
//	}
//	cout << ans << endl;
//	return 0;
//}