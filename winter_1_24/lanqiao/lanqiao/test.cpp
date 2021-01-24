//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int N = 35;
//
//int main()
//{
//	int arr[N][N];
//	int n;
//
//	cin >> n;                               //输入行数
//	int i, j;
//
//	for (i = 0; i < n; i++)                 //从0开始，为了让三角形从第一行打印
//	{
//		arr[i][0] = 1;                      //让三角形的第一列为1
//		arr[i][i] = 1;                      //让三角形的对角线为1
//		for (j = 1; j <= i - 1; j++)        //从第三行开始三角形就有变化了
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//中间的数值= 上面一个数字+左上一个数字
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;}