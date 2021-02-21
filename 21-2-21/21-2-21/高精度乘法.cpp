//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> Mul(vector<int> num1, int num2)
//{
//	vector<int> res;
//	int t = 0;//进的位数
//	for (int i = 0; i < num1.size(); i++)
//	{
//		res.push_back((num2 * num1[i] + t) % 10);
//		t = (num2 * num1[i] + t) / 10;
//	}
//	res.push_back(t);
//	return res;
//}
//
//int main()
//{
//	string A, B;
//	cin >> A >> B;
//
//	//倒放存入数组
//	vector<int> num1;
//	int num2 = 0;
//	for (int i = A.size() - 1; i >= 0; i--)
//		num1.push_back(A[i] - '0');
//	for (int i = 0; i < B.size(); i ++)
//		num2 = num2 * 10 + (B[i] - '0');
//
//	vector<int> res = Mul(num1, num2);
//
//	for (int i = res.size() - 1; i >= 0; i--)
//		cout << res[i];
//	return 0;
//}