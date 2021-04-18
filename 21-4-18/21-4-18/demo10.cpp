//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <stack>
//
//using namespace std;
//
//typedef long long LL;
//
//LL cnt;
//
//int main()
//{
//	stack<string> str;
//	string s;
//	cin >> s;
//	for (LL i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '(')
//			str.push(s);
//		if (s[i] == ')')
//		{
//			str.pop();
//		}
//	}
//	cnt = str.size();
//	cout << cnt + 3 << endl;
//	return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//const int N = 1010;
//string s;
//int dp[N][N];
//int n;
//
//int main()
//{
//	cin >> s;
//	n = s.size();
//	for (int len = 1; len <= n; len++)
//	{
//		for (int i = 0; i + len - 1 < n; i++)
//		{
//			int j = i + len - 1;
//			if (len == 1) dp[i][j] = 1;
//			else
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//				if (s[i] == s[j])
//					dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 2);
//			}
//		}
//	}
//	cout << n - dp[0][n - 1] << endl;
//	return 0;
//}