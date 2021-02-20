//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <sstream>
//
//using namespace std;
//
//const int N = 1000010;
//int a[N];
//int n;
//int res1, res2;
//
//int main()
//{
//	int cnt = 0;
//	cin >> cnt;
//	string line;
//	getchar();
//
//	while (cnt--)
//	{
//		getline(cin, line);
//		stringstream ssin(line);
//		while (ssin >> a[n])
//			n++;
//	}
//
//	sort(a, a + n);
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == a[i - 1])
//			res1 = a[i];
//		if (a[i] - a[i - 1] >= 2)
//			res2 = a[i] - 1;
//	}
//
//	cout << res2 << ' ' << res1 << endl;
//
//	return 0;
//}