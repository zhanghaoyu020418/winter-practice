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

	//cout << "三边为 : > " << x << ' ' << y << ' ' << z << ' ' << endl;
	//cout << "三角形周长为 ：> " << tri.Perimeter() << endl;
	//cout << "三角形面积为 ：> " << tri.Area() << endl;
	
	//string str = "zhanghaoyu";//右旋字符串
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