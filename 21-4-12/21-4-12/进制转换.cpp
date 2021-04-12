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
//	// 16进制转换为10进制
//	for (int i = num16.size() - 1; i >= 0; i--)
//	{
//		num10 = num10 + get10(num16[i]) * p;
//		p = p * a;
//	}
//	cout << num16 << "的10进制:" << num10 << endl;
//	int tmp = num10;
//
//	// 10进制转换为8进制
//	string num8;
//	int b = 8;
//	while (num10)
//	{
//		num8 += (num10 % b) + '0';
//		num10 /= b;
//	}
//	cout << *num8.begin() << endl;
//	reverse(num8.begin(), num8.end());// 记得要将10进制转换的数倒置
//
//	cout << tmp << "的8进制:" << num8 << endl;
//	return 0;
//}
//
////void fun()
////{
////	// 因为后面有一步操作是又去掉num1除完之后的0，所以要倒置，这样去掉0就只要pop_back,
////	// 要是0在前面，操作就会很麻烦，一个一个覆盖O(n)才能去掉前导0
////	reverse(num1.begin(), num1.end());
////	//短除num1
////	while (num1.size())// 直到num1中没有数结束，否则就一直除以b
////	{
////		// 每一次for循环都是为了求出一次余数
////		int t = 0;//剩余的余数
////		for (int i = num1.size() - 1; i >= 0; i--)
////		{
////			num1[i] += t * a;
////			t = num1[i] % b;
////			num1[i] /= b;
////		}
////
////		// 将余数放到num2数组中
////		num2.push_back(t);
////		// 每次将num1中前导0去掉
////		while (num1.size() && num1.back() == 0)
////			num1.pop_back();
////	}
////	reverse(num2.begin(), num2.end());
////}