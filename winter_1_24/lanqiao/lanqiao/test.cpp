//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int N = 35;
//
//int main()
//{
//	int arr[N][N];
//	int n;
//
//	cin >> n;                               //��������
//	int i, j;
//
//	for (i = 0; i < n; i++)                 //��0��ʼ��Ϊ���������δӵ�һ�д�ӡ
//	{
//		arr[i][0] = 1;                      //�������εĵ�һ��Ϊ1
//		arr[i][i] = 1;                      //�������εĶԽ���Ϊ1
//		for (j = 1; j <= i - 1; j++)        //�ӵ����п�ʼ�����ξ��б仯��
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//�м����ֵ= ����һ������+����һ������
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;}