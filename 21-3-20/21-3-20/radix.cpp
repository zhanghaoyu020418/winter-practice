#define _CRT_SECURE_NO_WARNINGS 1


void radix_sort(int arr[], int len)
{

	int tmp[100][100];
	for (int n = 1; n < 1000; n *= 10)//用来求出每一位的数字
	{

		for (int i = 0; i < len; i++)
			for (int j = 0; j < len; j++)
				tmp[i][j] = -1;

		for (int i = 0; i < len; i++)
		{
			int temp_num = (arr[i] / n) % 10;
			tmp[i][temp_num] = arr[i];
		}

		int k = 0;
		for (int x = 0; x < len; x++)
		{
			for (int y = 0; y < len; y++)
			{
				if (tmp[y][x] != -1)
				{
					arr[k++] = tmp[y][x];
				}
			}
		}
	}

}

int tmp[100];
//void merge_sort(int arr[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	merge_sort(arr, l, mid), merge_sort(arr, mid + 1, r);
//
//	int i = l, j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= r)
//	{
//		if (arr[i] <= arr[j]) tmp[k++] = arr[i ++];
//		else tmp[k++] = arr[j ++];
//	}
//
//	while (i <= mid) tmp[k++] = arr[i ++];
//	while (j <= r) tmp[k++] = arr[j ++];
//
//	for (int i = 0, j = l; j <= r; i++, j++)
//		arr[j] = tmp[j];
//
//}

void merge_sort(int arr[], int l, int r)
{
	if (l >= r) return;
	int mid = l + r >> 1;
	merge_sort(arr, l, mid), merge_sort(arr, mid + 1, r);

	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (arr[i] <= arr[j]) tmp[k++] = arr[i ++];
		else tmp[k++] = arr[j++];
	}
	while (i <= mid) tmp[k++] = arr[i++];
	while (j <= r) tmp[k++] = arr[j++];
	for (int i = 0, j = l; i < k; i++, j++)
		arr[j] = tmp[i];
}