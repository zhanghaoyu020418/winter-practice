#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int res = a + b;
	if (res < 0)// �������Ǹ�����ֱ��ֱ�����һ�����ţ�Ȼ�����ֱ������
	{
		cout << '-';
		res = res * -1;
	}

	// ת�����ַ���Ȼ��ÿ�����ַ������һ������
	string str = to_string(res);    // ��Ϊ�ַ���Ҫ�������㣬�Ӻ���ǰ����λ���֣���Ӹ��ţ�
	reverse(str.begin(), str.end());// ������������̫���ӣ����Ծ��Ƚ������ַ�����תһ��
	int len = str.length();// ���str�ĳ���
	int index = 1;
	for (int i = 1; i <= len; i++)
	{
		if (i % 3 == 0 && i != len)
		{
			str.insert(index, ",");// ��3������������Ӷ���
			index++;
		}
		index++;
	}
	reverse(str.rbegin(), str.rend());
	cout << str << endl;

	return 0;
}