#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file;
	file.open("1.txt", ios::out | ios::in);

	//char a[4] = "zhy";
	//file << a << endl;
	char arr[100];
	file >> arr;
	cout << arr << endl;

	file.close();
	return 0;
}