//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
////位数太高直接用字符串输出
//int main()
//{
//	int cnt;
//	cin >> cnt;
//	while (cnt--)
//	{
//		int a, b;//将a进制转换成b进制
//		string num1_line, num2_line;//a进制的字符串和b进制的字符串
//		vector<int> num1, num2;
//		cin >> a >> b >> num1_line;
//		//将num1变成数组的形式
//		for (int i = 0; i < num1_line.size(); i++)
//		{
//			if (num1_line[i] <= '9' && num1_line[i] >= '0') num1.push_back(num1_line[i] - '0');
//			if (num1_line[i] <= 'Z' && num1_line[i] >= 'A') num1.push_back(num1_line[i] - 'A' + 10);
//			if (num1_line[i] <= 'z' && num1_line[i] >= 'a') num1.push_back(num1_line[i] - 'a' + 36);
//		}
//		//短除num1
//		while (num1.size())
//		{
//			int t = 0;//剩余的余数
//			for (int i = num1.size() - 1; i >= 0; i--)
//			{
//				num1[i] += t * a;
//				t = num1[i] % b;
//				num1[i] /= b;
//			}
//			num2.push_back(t);
//			while (num1.size() && num1.back() == 0)
//				num1.pop_back();
//		}
//		//将数组转换为字符串
//		for (int i = 0; i < num2.size(); i++)
//		{
//			if (num2[i] <= 9) num2_line += char(num2[i] + '0');
//			if (num2[i] <= 35 && num2[i] >= 10) num2_line += char(num2[i] - 10 + 'A');
//			if (num2[i] <= 61 && num2[i] >= 36) num2_line += char(num2[i] - 36 + 'a');
//		}
//		cout << a << ' ' << num1_line << endl;
//		cout << b << ' ' << num2_line << endl;
//		cout << endl;
//	}
//}