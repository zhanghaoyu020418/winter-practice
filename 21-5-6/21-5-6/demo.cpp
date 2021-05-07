//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <array>
//#include <ctime>
//#include <cstdlib>
//#include <vector>
//#include <list>
//#include <forward_list>
//#include <limits.h>
//
//using namespace std;
//
//void test1()
//{
//	srand((unsigned)time(NULL));
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(rand() % 200);
//	vector<int>::iterator pIt = find(v.begin(), v.end(), 100);
//	vector<int>::iterator pp;
//	if (pIt != v.end())
//		cout << "Find " << *pIt << endl;
//	else
//		cout << "No Find " << endl;
//}
//
//int cmp(int a, int b)
//{
//	return a < b;
//}
//
//void test2()
//{
//	srand((unsigned)time(NULL));
//	list<int> li;
//	for (int i = 0; i < 100000; i++)
//		li.push_back(rand());
//	
//	clock_t timeStart = clock();
//	li.sort();
//	for (int i = 0; i < 100; i++)
//	{
//		cout << li.front() << ' ';
//		li.pop_front();
//	}
//	cout << endl;
//	clock_t timeEnd = clock();
//	cout << timeEnd - timeStart << endl;
//}
//
//void test3()
//{
//	pair<int, int> p(1, 2);
//	cout << p.first << endl;
//	
//}
//
//int main()
//{
//
//	test3();
//	//array<int, 100> a;
//	//srand((unsigned)time(NULL));
//	//for (int i = 0; i < 10; i++)
//	//	a[i] = rand();
//	//for (int i = 0; i < 10; i++)
//	//	cout << a[i] << endl;
//	//cout << a.data() << endl;
//
//
//	return 0;
//}