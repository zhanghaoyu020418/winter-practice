#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	//map<int, int> g(1, 1);// 准备好3个map
	//g[1] += 1;
	//cout << g[1] << endl;
	pair<char, int> g[3];
	g[0].first = 'B';
	g[0].second = 0;
	g[0].second++;
	cout << g[0].second << endl;
	return 0;
}