#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��λ������
//int main()
//{
//	int a = 10;
//	int b = a << 1;              //���Ʋ�����:��߶������ұ߲�0��<< 1�� * 2��Ч�� 
//	printf("b  =  %d\n", b);
//
//	b = b >> 1;                  //���Ʋ��������ұ߶�������߲�0��>> 1 �� / 2��Ч�� �����������ƣ�����߲����Ǻ�ԭ������λ��ͬ�����֣�
//	printf("b  =  %d\n", b);
//
//	return 0;
//}


//λ������
int main()
{
	int a = 3;
	int b = 5;

	// a = 011
	// b = 101


	// & �ǰ�λ�� (��0����0)
	int c = a & b;
	printf("a & b = %d\n", c);

	// | �ǰ�λ��(��1����1)
	 c = a | b;
	printf("a | b = %d\n", c);


	// ^ �ǰ�λ��� (��ͬΪ0����ͬΪ1)
	 c = a ^ b;
	printf("a ^ b = %d\n", c);	
	
	return 0;
}