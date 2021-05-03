#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	stack<int> sk;
	int num[6] = { 1,2,4, 15,34 };
	sort(num, num + 6);                           //按从小到大排序 
	int pos1 = lower_bound(num, num + 6, 7) - num;    //返回数组中第一个大于或等于被查数的值 
	int pos2 = upper_bound(num, num + 6, 7) - num;
	cout << num[pos1] << ' ' << num[pos2] << endl;
	return 0;
}