//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> Add(vector<int> &A, vector<int> &B)
//{
//	vector<int> C;
//	int t = 0;//��λ����
//
//	if (A.size() < B.size())//Ĭ��A���������������ǣ��ͷ����ڵ���һ��
//		return (B, A);
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		t += A[i];
//		if (i < B.size())//�������л�������ʱ�򣬻�ȡA�����е�����
//			t += B[i];
//		C.push_back(t % 10);//�������ŵ�������ȥ
//		t /= 10;
//	}
//
//	//for (int i = 0; i < A.size() || i < B.size(); i ++)
//	//{
//		//if(i < A.size())//�������л�������ʱ�򣬻�ȡA�����е�����
//			//t += A[i];
//		//if(i < B.size())
//			//t += B[i];
//		//C.push_back(t % 10);//�������ŵ�������ȥ
//		//t /= 10;
//	//}
//	if (t)//������һλ�н�λ���ٽ�1�ŵ���������ȥ
//		C.push_back(t);
//	return C;
//}
//
//int main()
//{
//	//�������ַ�������Ŵ����֣������Ͳ��������
//	string num1, num2;
//	cin >> num1 >> num2;
//
//	//��������̬���������Ŵ������
//	vector<int> A, B;
//	for (int i = num1.size() - 1; i >= 0; i--)
//		A.push_back(num1[i] - '0');
//	for (int i = num2.size() - 1; i >= 0; i--)
//		B.push_back(num2[i] - '0');
//
//	//��һ�������������Ӻ�Ĵ���    
//	auto C = Add(A, B);
//
//	//���Ŷ�ȡ�����е�����
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//
//	return 0;
//}