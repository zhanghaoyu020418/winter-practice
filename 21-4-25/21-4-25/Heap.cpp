#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void AdjustDown(HPDataType* a, int n, int parent) // 向下调整法
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

void AdjustUp(HPDataType* a, int child) // 向上调整法
{
	int parent = (child - 1) / 2;

	// 注意这里不能用parnet >= 0来结束条件判断，因为/是向下取整的所以-1/2一直会得到0
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


// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	// 先将a数组中的数据移到hp中
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

	// 将hp数组建堆

	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(hp->_a, hp->_size, i);     // 建一个大堆
	}
}
// 堆的销毁
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
// 堆的插入
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->_capacity == hp->_size) // 检查堆的容量
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

	hp->_a[hp->_size++] = x; // 在堆的底部添加一个元素

	// 让堆的结构重新变为大堆
	// 向上调整法
	AdjustUp(hp->_a, hp->_size - 1);
}
// 堆的删除
void HeapPop(Heap* hp)
{
	// 因为直接删除堆顶的数据会破坏原来的堆的结构
	// 所以就曲线救国，将堆底和堆顶的数据交换，然后删除堆底的数据
	swap(hp->_a[0], hp->_a[hp->_size - 1]);

	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0); // 进行一次向下调整
}
// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_a[0];
}
// 堆的数据个数
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}
// 堆的判空
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}

// 打印堆
void HeapPrint(Heap hp)
{
	for (int i = 0; i < hp._size; i++)
	{
		cout << hp._a[i] << ' ';
	}
	cout << endl;
}


// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
void PrintTopK(int* a, int n, int k) 
{
	// a数组和堆无关，就是要在a数组中找到前k个小的数，所以要给tmpHeap建一个大堆
	Heap tmpHeap;

	HeapCreate(&tmpHeap, a, k);

	for (int i = k; i < n; i++)
	{
		if (a[i] < tmpHeap._a[0])
		{
			tmpHeap._a[0] = a[i];    // 将大堆中的第一个数替换掉
			AdjustDown(tmpHeap._a, k, 0); // 然后通过向下调整法，恢复堆的结构
		}
	}

	for (int i = 0; i < k; i++)
		cout << tmpHeap._a[i] << ' ';
}



