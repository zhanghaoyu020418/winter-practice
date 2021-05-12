#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
#include <stack>
#include <stdlib.h>

using namespace std;


// ¥Ú”°∫Ø ˝
void PrintArray(int* a, int n);

// ≤Â»Î≈≈–Ú
void InsertSort(int* a, int n);

// œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);

// —°‘Ò≈≈–Ú
void SelectSort(int* a, int n);

// πÈ≤¢≈≈–Ú
void MergeSort(int* a, int n);

// øÏ≈≈∑«µ›πÈ
void QuickSortNonR(int* a, int begin, int end);

// øÏ≈≈µ›πÈ
void QuickSort(int* a, int begin, int end);