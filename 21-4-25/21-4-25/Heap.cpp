#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void AdjustDown(HPDataType* a, int n, int parent) // ���µ�����
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}

		if (a[parent] < a[child])
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

void AdjustUp(HPDataType* a, int child) // ���ϵ�����
{
	int parent = (child - 1) / 2;

	// ע�����ﲻ����parnet >= 0�����������жϣ���Ϊ/������ȡ��������-1/2һֱ��õ�0
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			swap(a[parent], a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	// �Ƚ�a�����е������Ƶ�hp��
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (!hp->_a)
	{
		cout << "malloc failed" << endl;
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		hp->_a[i] = a[i];
	}

	hp->_capacity = n;
	hp->_size = n;

	// ��hp���齨��

	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(hp->_a, hp->_size, i);     // ��һ�����
	}
}
// �ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->_capacity == hp->_size) // ���ѵ�����
	{
		if (hp->_capacity == 0)
			hp->_capacity = 1;
		HPDataType* tmp = (HPDataType*)realloc(hp->_a, sizeof(HPDataType) * hp->_capacity * 2);
		if (!tmp)
		{
			cout << "realloc failed" << endl;
			exit(-1);
		}
		hp->_a = tmp;
		hp->_capacity *= 2;
	}

	hp->_a[hp->_size++] = x; // �ڶѵĵײ����һ��Ԫ��

	// �öѵĽṹ���±�Ϊ���
	// ���ϵ�����
	AdjustUp(hp->_a, hp->_size - 1);
}
// �ѵ�ɾ��
void HeapPop(Heap* hp)
{
	// ��Ϊֱ��ɾ���Ѷ������ݻ��ƻ�ԭ���ĶѵĽṹ
	// ���Ծ����߾ȹ������ѵ׺ͶѶ������ݽ�����Ȼ��ɾ���ѵ׵�����
	swap(hp->_a[0], hp->_a[hp->_size - 1]);

	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0); // ����һ�����µ���
}
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_a[0];
}
// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}
// �ѵ��п�
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}

// ��ӡ��
void HeapPrint(Heap hp)
{
	for (int i = 0; i < hp._size; i++)
	{
		cout << hp._a[i] << ' ';
	}
	cout << endl;
}


// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k) 
{
	// a����Ͷ��޹أ�����Ҫ��a�������ҵ�ǰk��С����������Ҫ��tmpHeap��һ�����
	Heap tmpHeap;

	HeapCreate(&tmpHeap, a, k);

	for (int i = k; i < n; i++)
	{
		if (a[i] < tmpHeap._a[0])
		{
			tmpHeap._a[0] = a[i];    // ������еĵ�һ�����滻��
			AdjustDown(tmpHeap._a, k, 0); // Ȼ��ͨ�����µ��������ָ��ѵĽṹ
		}
	}

	for (int i = 0; i < k; i++)
		cout << tmpHeap._a[i] << ' ';
}



