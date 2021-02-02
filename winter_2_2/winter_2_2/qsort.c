#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmp(const void *e1, const void *e2) //比较函数
{
	return (*(int *)e1 - *(int *)e2);   
	//因为e1,e2都是void *类型的参数，所以要强制类型转换成必要比较元素的类型
	//如果默认返回>0就交换，即元素升序，如果用e2 -e1 的话就是，后一个减前一个元素>0就交换，即降序
}



struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void * e1, const void *e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


int cmp_stu_by_age(const void *e1, const void *e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_felem(const void *e1, const void *e2)
{
	return (*(float *)e1 - *(float *)e2);
}



int main()
{
	int arr[10] = { 2,1,9,5,3,6,7,8,4,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp);

	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	struct Stu sarr[] = { {"zhangsan", 19}, { "lisi", 18 }, { "wanwu", 20 } };
	int szs = sizeof(sarr) / sizeof(sarr[0]);

	qsort(sarr, szs, sizeof(sarr[0]), cmp_stu_by_name);

	for (i = 0; i < szs; i++)
	{
		printf("%s\t%d\n", sarr[i].name, sarr[i].age);
	}

	printf("\n");

	qsort(sarr, szs, sizeof(sarr[0]), cmp_stu_by_age);
	for (i = 0; i < szs; i++)
	{
		printf("%s\t%d\n", sarr[i].name, sarr[i].age);
	}

	printf("\n");

	float fArr[] = { 5.6,8.4,2.6,2.9,7.3,9.2,1.3,5.4,5.6,5.5 };
	sz = sizeof(fArr) / sizeof(fArr[0]);

	qsort(fArr, sz, sizeof(fArr[0]), cmp_felem);

	for (i = 0; i < sz; i++)
	{
		printf("%f ", fArr[i]);
	}

	return 0;
}

