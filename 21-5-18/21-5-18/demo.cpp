#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	str.insert(0, 4 - str.size(), '0');// 从第一个位置插，插入4-str.size()个'0'
//	do
//	{
//		sort(str.begin(), str.end(), greater<int>());// 非升序排序
//		int a = stoi(str);
//		sort(str.begin(), str.end());// 非降序排序
//		int b = stoi(str);
//		int res = a - b;
//		str = to_string(res);// 结果转化成字符串
//		str.insert(0, 4 - str.size(), '0');
//		printf("%04d - %04d = %04d\n", a, b, res);
//	} while (str != "6174" && str != "0000");
//	return 0;
//}
//
//int main()
//{
//	cout << 5 / 1.0 / 3 << endl;
//	return 0;
//}

//int main()
//{
//	string str;
//	cin >> str;
//	str = str.substr(1);
//	cout << str << endl;
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	if (str[0] == '-')// 符号提取出来
//		cout << '-';
//	int num = str[1] - '0';// 找出整数部分
//
//	int flagF = num == 0;// 判断第一位是不是0
//	int n = num == 0 ? 1 : 0;
//	for (int i = 3; i < str.size(); i++)// 统计中间0的个数
//		if (str[i] == '0') n++;
//		else break;
//
//	int i;
//	for (i = 0; i < str.size(); i++)
//		if (str[i] == 'E')
//			break;
//	string tmp = str.substr(3, i - 3);// 将小数点后到E中间的数字提取出来
//	for (int i = 0; i < tmp.size(); i++)// 将数字整合在一起
//		num = num * 10 + (tmp[i] - '0');
//	char flag = str[i + 1];
//	str = str.substr(i + 2);//将后面的位数提取出来
//	int cnt = 0;// 移动的位数
//	for (int i = 0; i < str.size(); i++)
//		cnt = cnt * 10 + (str[i] - '0');
//
//	string ans = to_string(num);
//	if (flag == '+')
//		while (--cnt)
//			ans += "0";
//	else
//	{
//		while (cnt--)
//			ans = "0" + ans;
//		if (flagF)// 如果整数部分是0，后面的0就没有加上，所以要将前导0全部加上
//			while (n--)
//				ans = "0" + ans;
//		ans.insert(1, 1, '.');
//	}
//	cout << ans << endl;
//	return 0;
//}

#include <iostream>
#include <set>
#include <queue>

using namespace std;

typedef pair<int, int> PII;

extern "C" int add(int a)
{
	cout << "a" << endl;
	return 1;
}

int main()
{
	set<PII> s;
	s.insert({1, 1});
	queue<int> q;
	q.push(1);

	return 0;
}