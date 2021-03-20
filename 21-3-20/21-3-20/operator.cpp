//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class matrix
//{
//	int arr[2][3];
//public:
//	void set();
//	friend matrix operator+ (matrix& m1, matrix & m2);
//	void show_data();
//};
//
//matrix operator+ (matrix& m1, matrix & m2)
//{
//	matrix res;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			res.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
//		}
//	}
//	return res;
//}
//
//void matrix::set()
//{
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 3; j++)
//			cin >> arr[i][j];
//}
//
//void matrix::show_data()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	matrix m1, m2, m3;
//	m1.set();
//	m2.set();
//	cout << "Matrix a:" << endl;
//	m1.show_data();
//	cout << endl;
//	cout << "Matrix b:" << endl;
//	m2.show_data();
//	cout << endl;
//	cout << "Matrix c = Matrix a + Matrix b :" << endl;
//	m3 = m1 + m2;
//	m3.show_data();
//	return 0;
//}