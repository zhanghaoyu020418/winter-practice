#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "Triangle.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	//Triangle tri;

	//tri.Set();
	//float x, y, z;
	//tri.Get(x, y, z);

	//cout << "����Ϊ : > " << x << ' ' << y << ' ' << z << ' ' << endl;
	//cout << "�������ܳ�Ϊ ��> " << tri.Perimeter() << endl;
	//cout << "���������Ϊ ��> " << tri.Area() << endl;
	
	//string str = "zhanghaoyu";//�����ַ���
	//int len = str.size();
	//while (len--)
	//{
	//	str.push_back(str[0]);
	//	str.erase(str.begin());
	//}
	//cout << str << endl;

	vector<vector<int>> arr = { {1,2,3} ,{4,5,6} ,{7,8,9} };

	for (auto &i : arr)
	{
		for (auto j : i)
		{
			cout << j << endl;
		}
	}


	return 0;
}