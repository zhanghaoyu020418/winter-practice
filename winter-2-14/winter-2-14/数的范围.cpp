#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int n, q;//���鳤�Ⱥͷ��ʸ���
int arr1[100000];//����
int arr2[10000];//��������

int main()
{
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < q; i++)
	{
		cin >> arr2[i];
	}

	int left = 0, right = 0;
	int j = 0;
	for (int i = 0; i < q; i++)//��������
	{
		for (j = 0; j < n; j++)//ʵ������
		{
			left = j;
			right = j;
			if (arr2[i] == arr1[j])
			{
				if (j + 1 >= n)//��ֹ����Խ��
				{
					cout << left << " " << right << endl;
					break;
				}

				while (arr2[i] == arr1[j])
					j++;
				right = j - 1;
				cout << left << " " << right << endl;
				break;
			}
		}
		if (j == n)
			cout << "-1 -1" << endl;
	}

	return 0;
}


