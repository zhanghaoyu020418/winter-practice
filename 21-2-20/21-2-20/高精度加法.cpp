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
//	int t = 0;//进位的数
//
//	if (A.size() < B.size())//默认A数组更长，如果不是，就反着在调用一遍
//		return (B, A);
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		t += A[i];
//		if (i < B.size())//当数组中还有数的时候，获取A数组中的数字
//			t += B[i];
//		C.push_back(t % 10);//将余数放到数组中去
//		t /= 10;
//	}
//
//	//for (int i = 0; i < A.size() || i < B.size(); i ++)
//	//{
//		//if(i < A.size())//当数组中还有数的时候，获取A数组中的数字
//			//t += A[i];
//		//if(i < B.size())
//			//t += B[i];
//		//C.push_back(t % 10);//将余数放到数组中去
//		//t /= 10;
//	//}
//	if (t)//如果最后一位有进位，再将1放到数组的最后去
//		C.push_back(t);
//	return C;
//}
//
//int main()
//{
//	//用两个字符串来存放大数字，这样就不会溢出来
//	string num1, num2;
//	cin >> num1 >> num2;
//
//	//用两个动态数组来倒着存放数字
//	vector<int> A, B;
//	for (int i = num1.size() - 1; i >= 0; i--)
//		A.push_back(num1[i] - '0');
//	for (int i = num2.size() - 1; i >= 0; i--)
//		B.push_back(num2[i] - '0');
//
//	//用一个数组来存放相加后的大数    
//	auto C = Add(A, B);
//
//	//倒着读取数组中的数字
//	for (int i = C.size() - 1; i >= 0; i--)
//		cout << C[i];
//
//	return 0;
//}