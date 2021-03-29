//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class matrix
//{
//public:
//	void set();
//	void show();
//	matrix operator+ (const matrix& mar);
//	friend ostream& operator<< (ostream & ,const matrix &);
//	friend istream& operator>> (istream &, matrix &);
//private:
//	int arr[2][3];
//};
//
//istream& operator>> (istream & input, matrix & mar)
//{
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 3; j++)
//			input >> mar.arr[i][j];
//	return input;
//}
//
//matrix matrix::operator+(const matrix & mar)
//{
//	matrix tmp;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			tmp.arr[i][j] = this->arr[i][j] + mar.arr[i][j];
//		}
//	}
//	return tmp;
//}
//
//ostream& operator<< (ostream & output, const matrix& mar)
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			output << mar.arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return output;
//}
//
//void matrix::show()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			cout << arr[i][j] << ' ';
//		cout << endl;
//	}
//}
//
//void matrix::set()
//{
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 3; j++)
//			cin >> arr[i][j];
//}
//
//int main()
//{
//	matrix mar1, mar2;
//	cin >> mar1 >> mar2;
//	matrix mar3 = mar1 + mar2;
//	cout << mar3 << endl;
//
//	return 0;
//}