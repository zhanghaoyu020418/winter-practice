//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <cstring>
////标准库
////<vector>
//#include <vector> 
////<string>
////<algorithm>
//using namespace std;
//
////int main()
////{
////	//string str;
////	//getline(cin, str);
////	//cout << str << endl;
////
////	//char str[10];
////	//memset(str, 0, sizeof(str));
////	//cout << str[2] << endl;
////	            
////	vector<int> arr(100);//要手动看开辟数组的大小
////	vector<int> list;//链表,可以不用开辟数组的大小
////	arr[99];
////	//list.push_back(1);//插入数据
////	//list.push_back(2);
////	//list.push_back(3);
////	//list.push_back(4);
////	//cout << list[0] << endl;
////
////	//C语言的遍历
////	//for (int i = 0; i < 100; i++)
////	//{
////	//	scanf("%d ", &arr[i]);//直接放入数组当中
////	//	cout << arr[i] << endl;
////	//}
////
////	//for (int i = 0; i < arr.size(); i++)
////	//{
////	//	cout << arr[i] << endl;
////	//}
////
////	//vector的遍历添加元素
////	for (int i = 0; i < 10; i++)
////	{
////		int a;
////		cin >> a;
////		list.push_back(a);//输入一个值，然后尾插到数组当中
////	}
////
////	//迭代器-相当于指针
////	vector<int>::iterator p = list.begin();
////
////	cout << *p << endl;
////
////	list.erase(p+2);//删除对应位置的元素，但是要拿一个迭代器去访问
////	list.pop_back();
////
////	vector<int>::iterator p1;
////	for (p1 = list.begin(); p1 != list.end(); p1++)
////	{
////		cout << *p1 << " ";
////	}
////	puts("");
////
////	list.clear();
////	return 0;
////}
//
//
////string字符串
//
////int main()
////{
////	string str1 = "hello";
////	char str2[] = "world";
////	string str3;
////	str3.push_back('!');
////	cout << str1 << " " << str2 << " " << str3 << endl;
////
////	str1.insert(str1.end(), ' ');
////	str1.append(str2);
////	cout << str1 << endl;
////	return 0;
////}
//
//
//#include <algorithm>
//
////int cmp_int(int a, int b)
////{
////	return a > b;
////}
////
////int main()
////{
////	int arr[] = { 1,3,4,2,5,9,3,5,7 };
////
////
////
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	sort(arr, arr + sz);//时间复杂度NlogN
////
////	vector<int> arr2;
////	for (int i = 0; i < 10; i++)
////	{
////		int a;
////		scanf("%d", &a);
////		arr2.push_back(a);
////	}
////
////	nth_element(arr2.begin(), arr2.begin() + 2, arr2.end());
////	swap(arr2[9], arr2[4]);
////	swap(arr2[6], arr2[7]);
////
////	unique(arr2.begin(), arr2.end());//使重复的数字到数组的末尾去
////
////	sort(arr2.begin(), arr2.end(), cmp_int);//vector的sort使用方法
////
////	reverse(arr2.begin(), arr2.end());
////
////	//用一个cmp函数，可以指定数组的元素的排序的顺序，默认是升序
////
////	max(1,2);
////	min(1,2);
////	return 0;
////}
//
//#include <algorithm>
//vector<int> arr{ 1,2,2,3 };
////有序数组的二分查找
//
//int arr1[] = { 1,2,2,3 };
//const int INF = 0x3f3f3f;//无穷大
//
//int main()
//{
//	memset(arr1, INF, sizeof(arr1));//每个都是无穷大
//
//	memset(arr1, 0, sizeof(arr1[0]));
//
//	bool isExist = binary_search(arr.begin(), arr.end(), 2);//binary_search只能判断数组中数字是否存在
//
//	int FirstLoc = lower_bound(arr.begin(), arr.end(), 2) - arr.begin();
//	int LastLoc = upper_bound(arr.begin(), arr.end(), 2) - arr.begin();
//	//lower_bound返回有序数组中的2的第一个下标
//	//upper_bound返回有序数组中的2的最后一个下标 + 1 (*)
//	cout << FirstLoc << endl;
//	cout << LastLoc << endl;
//	return 0;
//} 