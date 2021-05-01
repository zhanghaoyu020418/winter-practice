#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int f(int[], int, int);

int s(int arr[], int l, int r)// 后手
{
	if (l == r)
		return 0;
	return  min(f(arr, l + 1, r), f(arr, l, r - 1));
}

int f(int arr[], int l, int r)// 先手
{
	if (l == r)
		return arr[l];
	return max((arr[l] + s(arr, l + 1, r )), (arr[r] + s(arr, l, r - 1)));
}

int win(int arr[], int n)
{
	return max(f(arr, 0, n - 1), s(arr, 0, n - 1));
}

int main()
{
	int arr[] = { 70, 100, 1, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	cout << win(arr, sz) << endl;
	return 0;
}