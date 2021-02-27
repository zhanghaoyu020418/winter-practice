////#define _CRT_SECURE_NO_WARNINGS 1
//////#include <iostream>
//////
//////using namespace std;
//////
//////int gcd(int a, int b)
//////{
//////	return b ? gcd(b, a % b) : a;
//////}
//////
//////int lcm(int a, int b)
//////{
//////	return  a * b / gcd(a, b);
//////}
//////
//////int main()
//////{
//////	int a, b;
//////	while (cin >> a >> b)
//////	{
//////		cout << "最大公约数:> " << gcd(a, b) << endl;
//////		cout << "最小公倍数:> " << lcm(a, b) << endl;
//////	}
//////	return 0;
//////}
////
////#include <iostream>
////#include <algorithm>
////#include <cstdio>
////
////using namespace std;
////
////const int N = 100010;
////int a[N];
////int n;
////
////int gcd(int a, int b)
////{
////	return b ? gcd(b, a % b) : a;
////}
////
////int lcm(int a, int b)
////{
////	return a * b / gcd(a, b);
////}
////
////int main()
////{
////	cin >> n;
////	int Max = 0;
////	for (int i = 0; i < n; i++)
////		scanf("%d", &a[i]);
////
////	sort(a, a + n);
////
////	int val = a[1] - a[0];
////	for (int i = 2; i < n; i++)
////	{
////		val = gcd(val, a[i] - a[0]);
////	}
////
////	cout << (a[n - 1] - a[0]) / val + 1 << endl;
////
////	return 0;
////}
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> nums;
//	nums = { 0,1,0,3,12 };
//	int id = 0;
//	//将非0的数放到数组的前面
//	for (auto num : nums)
//	{
//		if (num != 0)
//			nums[id++] = num;
//	}
//
//	//前后的位置清零
//	while (id < nums.size())
//		nums[id++] = 0;
//	return 0;
//}
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> nums = { {1,2,3,4},{4,5,6},{7,8,9} };
	int n = nums.size(), m = nums[0].size();

	cout << n << ' ' << m << endl;

	return 0;
}

