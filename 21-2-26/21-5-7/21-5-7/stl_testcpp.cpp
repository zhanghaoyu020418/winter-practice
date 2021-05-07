//#define _CRT_SECURE_NO_WARNINGS 1
//#include <map>
//#include <set>
//#include <unordered_set>
//#include <unordered_map>
//#include <cstdlib>
//#include <ctime>
//#include <iostream>
//
//using namespace std;
//
//void test1()
//{
//	srand((unsigned)time(NULL));
//	unordered_multiset<int> us;
//	for (int i = 0; i < 100000; i++)
//		us.insert(rand());
//	auto it = us.find(32767);
//	if (it != us.end())
//		cout << *it << endl;
//
//	cout << us.size() << endl;
//	cout << us.load_factor() << endl;
//	cout << us.bucket_count() << endl;// hashtable的篮子的个数
//}
//
//void test2()
//{
//	
//}
//
//int main()
//{
//	test1();
//	return 0;
//}