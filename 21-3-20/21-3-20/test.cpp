#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
#include <memory.h>
#include <time.h>
#include <stdlib.h>
#include "tool.h"

using namespace std;

const int N = 1000;
int arr[N];

int main()
{
	srand(time(0));
	int tmp[10][10];

	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 1000;

	//radix_sort(arr, 100);
	merge_sort(arr, 0, 9);

	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';

	return 0;
}