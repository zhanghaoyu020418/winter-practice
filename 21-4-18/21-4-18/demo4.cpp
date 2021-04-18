//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef long long LL;
//
//vector<int> get_divisior(int num)
//{
//	vector<int> res;
//	for (int i = 1; i <= num / i; i++)
//	{
//		if (num % i == 0)
//		{
//			res.push_back(i);
//			if (num / i != i)
//				res.push_back(num / i);
//		}
//	}
//	//sort(res.begin(), res.end());
//	return res;
//}
//
//int main()
//{
//	LL n;
//	cin >> n;
//	vector<int > res = get_divisior(n);
//	cout << res.size() << endl;
//	//for (int i = 0; i < res.size(); i++)
//	//{
//	//	cout << res[i] << ' ';
//	//}
//	cout << endl;
//	return 0;
//}