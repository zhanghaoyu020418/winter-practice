#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

#include <Windows.h>

using namespace std;

void AdjustDown(int* a, int n, int parent) // ���µ�����
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[parent] > a[child])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}

	}

}

int main()
{

	int a[] = { 1, 4, 2, 7, 3, 9, 5 };

	int n = sizeof(a) / sizeof(a[0]);

	for (int i = (n - 1 - 1) / 2; i >= 0; i--) // ����
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;// �Ž�����С�ѣ�ÿ�ν��Ѷ���ĩβ������
					// �����Ͳ���ı�ѽṹ
					// ÿ�ν�������Ԫ�أ�
					// Ȼ�������Ԫ�أ��������վͱ���˽���������

	while (end > 0) // ������
	{
		swap(a[0], a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
	
	//system("title ����������");//���ñ���
	//system("mode con cols=58 lines=29");//���ô��ڴ�С
	//system("color E0");//������ɫ

	return 0;
}