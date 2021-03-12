//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int * num1 = (int *)malloc(sizeof(int) * 5);
//	if (num1 == NULL)
//	{
//		cout << "ÉêÇëÊ§°Ü" << endl;
//		exit(-1);
//	}
//	int *num2 = (int *)realloc(num1, sizeof(int) * 10);
//	if (num2 == NULL)
//	{
//		cout << "ÉêÇëÊ§°Ü" << endl;
//		exit(-1);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		num2[i] = i;
//		cout << num2[i] << endl;
//	}
//
//	free(num2);
//	free(num1);
//
//	return 0;
//}
//
#include <iostream>

using namespace std;

typedef struct s
{
	int n;
	int a[];
}s;

int main()
{
	s* ps = (s*)malloc(sizeof(s) + sizeof(int)* 10);

	ps->n = 12;
	cout << ps->n << endl;

	for (int i = 0; i < 10; i++)
		ps->a[i] = i;
	for (int i = 0; i < 10; i++)
		cout << ps->a[i] << ' ';
	cout << endl;
	free(ps);
	return 0;
}