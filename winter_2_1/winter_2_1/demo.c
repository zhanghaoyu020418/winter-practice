//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int n = 9; 
//	float* pfloat = (float*)&n;
//
//	printf("n = %d\n", n);
//	printf("*p = %f\n", *pfloat);//*p���Ѿ�ת������float������
//
//	return 0;
//}
//


#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;

	return 0;
}

