//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int cmp_num(vector<int> num1, vector<int> num2)
//{
//	if (num1.size() != num2.size())
//		return num1.size() >= num2.size();
//	for (int i = num1.size() - 1; i >= 0; i--)
//		if (num1[i] != num2[i])
//			return num1[i] >= num2[i];
//	return 1;
//}
//
//vector<int> Sub(vector<int> num1, vector<int> num2)
//{
//	vector<int> res;
//	int t = 0;//�Ƿ��λ
//	for (int i = 0; i < num1.size(); i++)
//	{
//		t = num1[i] - t;
//		if (i < num2.size())
//			t -= num2[i];
//		res.push_back((t + 10) % 10);
//		if (t >= 0)
//			t = 0;
//		else
//			t = 1;
//	}
//	//����ʣ�¸�λ�Ķ���0
//	while (res.size() > 1 && res.back() == 0)
//		res.pop_back();
//
//	return res;
//}
//
//int main()
//{
//	string num1, num2;
//	cin >> num1 >> num2;
//
//	//���������÷���������
//	vector<int> A, B;
//	for (int i = num1.size() - 1; i >= 0; i--)
//		A.push_back(num1[i] - '0');
//	for (int i = num2.size() - 1; i >= 0; i--)
//		B.push_back(num2[i] - '0');
//
//	vector<int> C;//������
//	//���������A,B�Ĵ�С
//	if (cmp_num(A, B))//A����
//	{
//		C = Sub(A, B);
//	}
//	else//B����
//	{
//		C = Sub(B, A);
//		cout << "-";
//	}
//
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//	return 0;
//}