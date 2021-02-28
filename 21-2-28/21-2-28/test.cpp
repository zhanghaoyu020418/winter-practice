//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
//	int res = 0;
//	int flag = -1;
//	if (ruleKey == "type")
//		flag = 0;
//	else if (ruleKey == "color")
//		flag = 1;
//	else if (ruleKey == "name")
//		flag = 2;
//	for (int i = 0; i < items.size(); i++)
//	{
//		if (items[i][flag] == ruleValue)
//			res++;
//	}
//	return res;
//}
//
//int main()
//{
//	vector<vector<string>> items = { {"qqq","qqq","qqq"},{"qqq","qqq","qqq"},
//	{"qqq","qqq","qqq"}, {"qqq","qqq","qqq"}, {"qqq","qqq","qqq"}, {"qqq","qqq","qqq"}, {"qqq","qqq","qqq"} };
//	string ruleKey = "name";
//	string ruleValue = "qqq";
//	int res = countMatches(items, ruleKey, ruleValue);
//	cout << res << endl;
//}
