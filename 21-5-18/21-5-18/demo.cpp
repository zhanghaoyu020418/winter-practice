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
//	str.insert(0, 4 - str.size(), '0');// �ӵ�һ��λ�ò壬����4-str.size()��'0'
//	do
//	{
//		sort(str.begin(), str.end(), greater<int>());// ����������
//		int a = stoi(str);
//		sort(str.begin(), str.end());// �ǽ�������
//		int b = stoi(str);
//		int res = a - b;
//		str = to_string(res);// ���ת�����ַ���
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
//	if (str[0] == '-')// ������ȡ����
//		cout << '-';
//	int num = str[1] - '0';// �ҳ���������
//
//	int flagF = num == 0;// �жϵ�һλ�ǲ���0
//	int n = num == 0 ? 1 : 0;
//	for (int i = 3; i < str.size(); i++)// ͳ���м�0�ĸ���
//		if (str[i] == '0') n++;
//		else break;
//
//	int i;
//	for (i = 0; i < str.size(); i++)
//		if (str[i] == 'E')
//			break;
//	string tmp = str.substr(3, i - 3);// ��С�����E�м��������ȡ����
//	for (int i = 0; i < tmp.size(); i++)// ������������һ��
//		num = num * 10 + (tmp[i] - '0');
//	char flag = str[i + 1];
//	str = str.substr(i + 2);//�������λ����ȡ����
//	int cnt = 0;// �ƶ���λ��
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
//		if (flagF)// �������������0�������0��û�м��ϣ�����Ҫ��ǰ��0ȫ������
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