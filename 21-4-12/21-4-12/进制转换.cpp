//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//
//using namespace std;
//
//int get10(char num16)
//{
//	if (num16 <= '9') return num16 - '0';
//	else return num16 - 'A' + 10;
//}
//
//int main()
//{
//	int num10 = 0;
//	string num16;
//	cin >> num16;
//	int p = 1;
//	int a = 16;
//
//	// 16����ת��Ϊ10����
//	for (int i = num16.size() - 1; i >= 0; i--)
//	{
//		num10 = num10 + get10(num16[i]) * p;
//		p = p * a;
//	}
//	cout << num16 << "��10����:" << num10 << endl;
//	int tmp = num10;
//
//	// 10����ת��Ϊ8����
//	string num8;
//	int b = 8;
//	while (num10)
//	{
//		num8 += (num10 % b) + '0';
//		num10 /= b;
//	}
//	cout << *num8.begin() << endl;
//	reverse(num8.begin(), num8.end());// �ǵ�Ҫ��10����ת����������
//
//	cout << tmp << "��8����:" << num8 << endl;
//	return 0;
//}
//
////void fun()
////{
////	// ��Ϊ������һ����������ȥ��num1����֮���0������Ҫ���ã�����ȥ��0��ֻҪpop_back,
////	// Ҫ��0��ǰ�棬�����ͻ���鷳��һ��һ������O(n)����ȥ��ǰ��0
////	reverse(num1.begin(), num1.end());
////	//�̳�num1
////	while (num1.size())// ֱ��num1��û���������������һֱ����b
////	{
////		// ÿһ��forѭ������Ϊ�����һ������
////		int t = 0;//ʣ�������
////		for (int i = num1.size() - 1; i >= 0; i--)
////		{
////			num1[i] += t * a;
////			t = num1[i] % b;
////			num1[i] /= b;
////		}
////
////		// �������ŵ�num2������
////		num2.push_back(t);
////		// ÿ�ν�num1��ǰ��0ȥ��
////		while (num1.size() && num1.back() == 0)
////			num1.pop_back();
////	}
////	reverse(num2.begin(), num2.end());
////}