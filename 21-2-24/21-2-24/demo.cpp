//#define _CRT_SECURE_NO_WARNINGS 1
////#include <iostream>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 100010;
////int n, d, k;
////
////struct Node
////{
////	int id;
////	int ts;
////}note[N];
////
////int cmp(Node a, Node b)
////{
////	return a.id < b.id;
////}
////
////int main()
////{
////	cin >> n >> d >> k;
////	for (int i = 0; i < n; i++)
////		cin >> note[i].ts >> note[i].id;
////
////	sort(note, note + n, cmp);//∞¥id≈≈…˝–Ú
////
////	int cnt = 1;
////	int i = 0;
////
////	while (i < n - 1)
////	{
////		while (note[i].id == note[i + 1].id)
////		{
////			if (abs(Min - note[i].ts) < d)
////				cnt++;
////			if (cnt >= k)
////			{
////				cout << note[i].id << endl;
////				break;
////			}
////
////			i++;
////		}
////		cnt = 1;
////		i++;
////	}
////
////	return 0;
////}
////
////#include <iostream>
////
////using namespace std;
////
////typedef struct stu
////{
////	int num;
////	char name[20];
////}S;
//
////int main()
////{
////	S s1 = { 1,"zhy" }, s2;
////	cout << s1.num << ' ' << s1.name << endl;
////
////	s2 = { 1,"hhh" };
////	s2 = { 2, "zhy" };
////	cout << s2.num << ' ' << s2.name << endl;
////	return 0;
////}
//
//
////
////const int N = 100010;
////int num1[N], num2[N];
////int n, m;
////int x;
////
////int main()
////{
////	cin >> n >> m >> x;
////	for (int i = 0; i < n; i++)
////		scanf("%d", &num1[i]);
////	for (int i = 0; i < m; i++)
////		scanf("%d", &num2[i]);
////
////	int num1i = 0, num2i = 0;
////	while (num1i < n && num2i < m)
////	{
////		while (num1[num1i] + num2[num2i] < x)
////			num2i++;
////		if (num1[num1i] + num2[num2i] == x)
////		{
////			cout << num1i << ' ' << num2i << endl;
////			break;
////		}
////		num1i++;
////		num2i = 0;
////	}
////	return 0;
////}
//
////int main()
////{
////	int i = 1;
////	cout << (i >> 1) << endl;
////	return 0;
////}
//
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 1010;
//int a[N][N], b[N][N];
//int n, m, q;
//
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//	b[x1][y1] += c;
//	b[x2 + 1][y1] -= c;
//	b[x1][y2 + 1] -= c;
//	b[x2 + 1][y2 + 1] += c;
//}
//
//int main()
//{
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			insert(i, j, i, j, a[i][j]);
//		}
//	}
//
//	while (q--)
//	{
//		int x1, y1, x2, y2, c;
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		insert(x1, y1, x2, y2, c);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + b[i][j];
//			cout << a[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}