#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>// not1 bind2nd变动器

using namespace std;

int main()
{
	
	//// 容器     分配器
	//vector<int, allocator<int>> vi(ia, ia + 6);
	//// 迭代器  算法                   
	//cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40)));

	int ia[6] = {27, 210, 12, 47, 109, 83};
	vector<int> vec(ia, ia + 6);
	vector<int>::iterator ite = vec.begin();
	auto it = vec.begin();
	for (; ite != vec.end(); ite++) {
		cout << *ite << ' ';
	}
	cout << endl;
	for (auto& elem : vec) {
		cout << elem << ' ';
		elem *= 3;
	}
	cout << endl;
	for (auto elem : vec) {
		cout << elem << ' ';

	}
	return 0;
}