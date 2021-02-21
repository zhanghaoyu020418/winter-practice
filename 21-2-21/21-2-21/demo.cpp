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
//	int t = 0;//是否借位
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
//	//消除剩下高位的多余0
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
//	//将数字逆置放在数组中
//	vector<int> A, B;
//	for (int i = num1.size() - 1; i >= 0; i--)
//		A.push_back(num1[i] - '0');
//	for (int i = num2.size() - 1; i >= 0; i--)
//		B.push_back(num2[i] - '0');
//
//	vector<int> C;//答案数组
//	//分情况讨论A,B的大小
//	if (cmp_num(A, B))//A数大
//	{
//		C = Sub(A, B);
//	}
//	else//B数大
//	{
//		C = Sub(B, A);
//		cout << "-";
//	}
//
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//	return 0;
//}