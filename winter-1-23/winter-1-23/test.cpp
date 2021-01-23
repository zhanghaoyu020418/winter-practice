#define _CRT_SECURE_NO_WARNINGS 1



//ÈòÄêÅĞ¶Ï
//int main()
//{
//	int year;
//	cin >> year;
//
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		cout << "yes";
//	}
//	else
//		cout << "no";
//
//	return 0;
//}

//01×Ó´®
//int main()
//{
//	int a, b, c, d, e;
//
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					for (e = 0; e < 2; e++)
//					{
//						printf("%d%d%d%d%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//Êä³öÍ¼ĞÎ

//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	char fir = 'A';
//
//
//	for (int j = 0; j < n; j++)
//	{
//		for (char i = fir; i < fir + m; i++)
//		{
//			cout << i;
//		}
//		cout << endl;
//	}
//
//

//	return 0;
//}



////ÕÒÎ»ÖÃ
//
//int find(int arr[], int n, int input, int cnt)
//{
//	
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == input)
//			break;
//		cnt++;
//	}
//	if (i == n)
//		return -1;
//	else
//		return ++cnt;
//
//}
//
//
//
//const int t = 1000;
//
//int main()
//{
//	int n;
//	int arr[t] = { 0 };
//	int input;
//	int cnt = 0;
//	int i = 0;
//
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cin >> input;
//
//	cnt = find(arr, n, input, cnt);
//	cout << cnt;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int n = 10000;
//
//int main()
//{
//	int num;
//	int arr[n];
//	int i = 0;
//
//	cin >> num;
//	for (i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = arr[0];
//	int min = arr[0];
//	int sum = 0;
//
//	for (i = 0; i < num; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//
//		sum += arr[i];
//	}
//
//	cout << max << endl;
//	cout << min << endl;
//	cout << sum << endl;
//
//	return 0;
//}