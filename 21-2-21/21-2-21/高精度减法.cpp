//#include <iostream>
//#include <string>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int cmp_num(string num1, string num2)
//{
//	if (num1.size() != num2.size())
//		return num1.size() > num2.size();
//	int i = 0;
//	while (num1[i] == num2[i])
//		i++;
//	if (num1[i] >= num2[i])
//		return 1;
//	else
//		return 0;
//}
//
//vector<int> Sub(vector<int> &A, vector<int> &B)
//{
//	int t = 0;//�ж��Ƿ�Ҫ��λ
//	vector<int> C;
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		if (i < B.size())
//			t = t - B[i];
//		C.push_back((t + 10) % 10);
//		if (t >= 0)
//			t = 0;
//		else
//			t = 1;
//	}
//	//����������0�Ļ���Ҫ��0���
//	while (C.size() > 1 && C.back() == 0)
//		C.pop_back();
//	return C;
//}
//
//int main()
//{
//	int flag = 0;
//	string num1, num2;
//	cin >> num1 >> num2;
//	flag = cmp_num(num1, num2);//���num2��Ļ����������ͽ����������������Sub�����Ͳ����ж����ֵĴ�С��
//
//	vector<int> A, B;
//	//�������ַ���������
//	for (int i = num1.size() - 1; i >= 0; i--)
//		A.push_back(num1[i] - '0');
//	for (int i = num2.size() - 1; i >= 0; i--)
//		B.push_back(num2[i] - '0');
//
//
//	vector<int> C;
//	if (flag)
//		C = Sub(A, B);
//	else
//		C = Sub(B, A);
//
//
//	if (flag == 0)
//		cout << "-";
//	for (int i = C.size() - 1; i >= 0; i--)
//	{
//
//		cout << C[i];
//	}
//
//	return 0;
//}
//
//
