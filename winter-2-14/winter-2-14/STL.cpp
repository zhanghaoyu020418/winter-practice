//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <cstring>
////��׼��
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
////	vector<int> arr(100);//Ҫ�ֶ�����������Ĵ�С
////	vector<int> list;//����,���Բ��ÿ�������Ĵ�С
////	arr[99];
////	//list.push_back(1);//��������
////	//list.push_back(2);
////	//list.push_back(3);
////	//list.push_back(4);
////	//cout << list[0] << endl;
////
////	//C���Եı���
////	//for (int i = 0; i < 100; i++)
////	//{
////	//	scanf("%d ", &arr[i]);//ֱ�ӷ������鵱��
////	//	cout << arr[i] << endl;
////	//}
////
////	//for (int i = 0; i < arr.size(); i++)
////	//{
////	//	cout << arr[i] << endl;
////	//}
////
////	//vector�ı������Ԫ��
////	for (int i = 0; i < 10; i++)
////	{
////		int a;
////		cin >> a;
////		list.push_back(a);//����һ��ֵ��Ȼ��β�嵽���鵱��
////	}
////
////	//������-�൱��ָ��
////	vector<int>::iterator p = list.begin();
////
////	cout << *p << endl;
////
////	list.erase(p+2);//ɾ����Ӧλ�õ�Ԫ�أ�����Ҫ��һ��������ȥ����
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
////string�ַ���
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
////	sort(arr, arr + sz);//ʱ�临�Ӷ�NlogN
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
////	unique(arr2.begin(), arr2.end());//ʹ�ظ������ֵ������ĩβȥ
////
////	sort(arr2.begin(), arr2.end(), cmp_int);//vector��sortʹ�÷���
////
////	reverse(arr2.begin(), arr2.end());
////
////	//��һ��cmp����������ָ�������Ԫ�ص������˳��Ĭ��������
////
////	max(1,2);
////	min(1,2);
////	return 0;
////}
//
//#include <algorithm>
//vector<int> arr{ 1,2,2,3 };
////��������Ķ��ֲ���
//
//int arr1[] = { 1,2,2,3 };
//const int INF = 0x3f3f3f;//�����
//
//int main()
//{
//	memset(arr1, INF, sizeof(arr1));//ÿ�����������
//
//	memset(arr1, 0, sizeof(arr1[0]));
//
//	bool isExist = binary_search(arr.begin(), arr.end(), 2);//binary_searchֻ���ж������������Ƿ����
//
//	int FirstLoc = lower_bound(arr.begin(), arr.end(), 2) - arr.begin();
//	int LastLoc = upper_bound(arr.begin(), arr.end(), 2) - arr.begin();
//	//lower_bound�������������е�2�ĵ�һ���±�
//	//upper_bound�������������е�2�����һ���±� + 1 (*)
//	cout << FirstLoc << endl;
//	cout << LastLoc << endl;
//	return 0;
//} 