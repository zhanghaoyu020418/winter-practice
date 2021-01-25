#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	
	int a = 10;
	int b = 20;

	printf("Before: a = %d b = %d \n", a, b);

	//1.创建临时变量(最普通的方法，也是最常用的方法)
	int tmp = a;
	a = b;
	b = tmp;

	printf("After : a = %d b = %d \n", a, b);

	//2.巧妙的运用数学的方法，辗转相减
	a = a + b;   
	b = a - b;
	a = a - b;

	printf("After : a = %d b = %d \n", a, b);

	//3.用 ^ 符号，方法很难想，但是很巧妙
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;


	// a = 10 的二进制 01010
	// b = 20 的二进制 10100
	// ^ 就是将两个数的二进制数,相同位置上的两个数为0（0遇到0就是0，1遇到1就是0），不同的数就是1（1遇到0就是1）
	// 1. a = a ^ b 就是 11110
	// 2. b 11110 ^ 10100 == 01010
	// 3。a 11110 ^ 01010 == 10100

	printf("After : a = %d b = %d \n", a, b);

	return 0;
}