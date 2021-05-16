//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//string weekday[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" }; // 打表星期
//
//int main()
//{
//	string str[4];
//	for (int i = 0; i < 4; i++) {
//		cin >> str[i];
//	}
//    // 处理前两个字符串
//	char s[2];
//	int index = 0;
//	for (int i = 0; i < str[0].size() && str[1].size(); i++)
//	{
//		if (index == 0)
//		{
//			if (str[0][i] == str[1][i] && (str[0][i] <= 'G' && str[0][i] >= 'A'))// 相同大写英文字符
//				s[index++] = str[0][i];
//		}
//		else if (index == 1)
//		{
//			if (str[0][i] == str[1][i]
//				&& ((str[0][i] <= 'N' && str[0][i] >= 'A') || isdigit(str[0][i])))// 相同的字符
//				s[index++] = str[0][i];
//		}
//		else if (index == 2)
//			break;
//	}
//    // 出来后两个字符串
//	int sec;
//	for (sec = 0; sec < str[2].size() && sec < str[3].size(); sec++)
//	{
//		if (str[2][sec] == str[3][sec] && isalpha(str[2][sec]))// 相同英文字符的位置
//			break;
//	}
//    // 输出结果
//	int t = s[1] <= '9' ? s[1] - '0' : s[1] - 'A' + 10;
//	cout << weekday[(s[0] - 'A')];
//	printf(" %02d:%02d", t, sec);
//	return 0;
//}