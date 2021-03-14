#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

using namespace std;
int cnt;

void insert_sort1(int a[], int sz)
{
	int j = 0;
	for (int i = 1; i < sz; i++)//控制次数为sz - 1次
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j + 1] < a[j])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void insert_sort2(int a[], int sz)
{
	int j = 0;
	for (int i = 1; i < sz; i++)//控制次数为sz - 1次
		for (j = i - 1; j >= 0; j--)
			if (a[j + 1] < a[j])
				swap(a[j], a[j + 1]);
			else
				break;
}

void insert_sort3(int a[], int sz)
{
	int j = 0;
	int tmp = 0;
	for (int i = 1; i < sz; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp < a[j])
				a[j + 1] = a[j];
			else
				break;
		}
		a[j + 1] = tmp;
	}
}


void insert_sort(int a[], int sz)
{
	int j = 0;
	int tmp = 0;
	for (int i = 1; i < sz; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0 && tmp < a[j]; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = tmp;
	}
}

void shell_sort(int a[], int sz)
{
	int j = 0;
	int tmp = 0;
	int jump = sz >> 1;
	while (jump)
	{
		for (int i = jump; i < sz; i++)
		{
			tmp = a[i];
			j = i - jump;
			while (j >= 0 && tmp < a[j])
			{
				a[j + jump] = a[j];
				j -= jump;
			}
			a[j + jump] = tmp;
		}
		jump >>= 1;
	}
}

void quick_sort(int a[], int low, int hight)
{
	int t = a[low];//记录最小的数
	int f = low + 1;//记录low后面的一个位置，a[f]应该是比t要小
	int b = hight;//记录最后一个数的位置，a[b]应该要比t大

	if (low >= hight) return;//当low>hight的时候就直接返回

	int TempVal;
	while (f <= b)
	{
		while (f <= b && a[f] <= t) f++;//当满足条件的时候，就++
		while (f <= b && a[b] >= t) b--;
		if (f < b)
		{
			TempVal = a[f];
			a[f] = a[b];
			a[b] = TempVal;
			f++;
			b--;
		}
	}

	a[low] = a[b];//结束循环的时候，交换a[b]和a[low]
	a[b] = t;

	quick_sort(a, low, b - 1);//递归quick_sort,b的左边和右边
	quick_sort(a, b + 1, hight);
}

//#define LEN 100000
//int a1[LEN] = {0};
//int a2[LEN] = {0};
//int a3[LEN] = {0};
//int main()
//{
//	srand(time(0));
//
//	for (int i = 0; i < LEN; i++)
//	{
//		a1[i] = rand() % 100;
//		a2[i] = a1[i];
//		a3[i] = a1[i];
//	}
//
//	int sz = sizeof(a1) / sizeof(a1[0]);
//	double t1  = clock() / 1000.0f;
//	shell_sort(a1, sz);
//	printf("shell:>%.8lf\n",  clock() / 1000.0f - t1 );
//
//	double t2 = clock() / 1000.0f;
//	insert_sort(a2, sz);
//	printf("insert:>%.8lf\n", clock() / 1000.0f - t2);
//
//	double t3 = clock() / 1000.0f;
//	quick_sort(a3, 0, sz - 1);
//	printf("quick:>%.8lf\n", clock() / 1000.0f - t3);
//
//	
//	//for (int i = 0; i < sz; i++)
//	//	cout << a[i] << ' ';
//	return 0;
//}

template <class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b) :num1(a), num2(b) {}
	void show_data();
private:
	int num1;
	float num2;
};

template <class numtype>
void Compare <numtype>::show_data()
{
	cout << num1 << ' ' << num2 << endl;
}

int main()
{
	Compare <int> c(1, 1.2);
	c.show_data();
	return 0;
}