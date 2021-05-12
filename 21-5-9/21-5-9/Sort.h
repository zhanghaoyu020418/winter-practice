#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
#include <stack>
#include <stdlib.h>

using namespace std;


// ��ӡ����
void PrintArray(int* a, int n);

// ��������
void InsertSort(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);

// ѡ������
void SelectSort(int* a, int n);

// �鲢����
void MergeSort(int* a, int n);

// ���ŷǵݹ�
void QuickSortNonR(int* a, int begin, int end);

// ���ŵݹ�
void QuickSort(int* a, int begin, int end);