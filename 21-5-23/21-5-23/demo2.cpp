#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <complex>
#include <vector>

using namespace std;


int main()
{
	//Account::set_rate(1.0);// ����ֱ�����������þ�̬����

	//Account a;// Ҳ����ʵ����������þ�̬����
	//a.set_rate(2.0);

	//A::getInstance().setup();
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	vector<int> v2(v1);
	for (auto i : v2)
		cout << i << ' ';
	return 0;
}