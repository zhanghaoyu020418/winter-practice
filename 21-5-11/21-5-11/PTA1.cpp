//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int res = a + b;
//	if (res < 0)
//	{
//		cout << '-';
//		res = res * -1;
//	}
//
//
//	string str = to_string(res);
//	reverse(str.begin(), str.end());
//	int len = str.length();
//	int index = 1;
//	for (int i = 1; i <= len; i++)
//	{
//		if (i % 3 == 0 && i != len)
//		{
//			str.insert(index, ",");
//			index++;
//		}
//			
//		index++;
//	}
//	reverse(str.begin(), str.end());
//	cout << str << endl;
//
//	return 0;
//}
//
////int main()
////{
////	vector<int> ans;
////	int a, b;
////	cin >> a >> b;
////	int res = a + b;
////	bool flag = false;
////	if (res < 0)
////	{
////		flag = true;
////		res = res * -1;
////	}
////	if (flag)
////		cout << '-';
////	while (res)
////	{
////		int tmp = res % 10;
////		ans.push_back(tmp);
////		res /= 10;
////	}
////
////	reverse(ans.begin(), ans.end());
////	for (int i = 1; i <= ans.size(); i++) 
////	{
////		cout << ans[i - 1];
////		if (i % 3 == 0 && i != ans.size())
////			cout << ',';
////	}
////	return 0;
////}