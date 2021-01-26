#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//移位操作符
//int main()
//{
//	int a = 10;
//	int b = a << 1;              //左移操作符:左边丢弃，右边补0，<< 1有 * 2的效果 
//	printf("b  =  %d\n", b);
//
//	b = b >> 1;                  //右移操作符：右边丢弃，左边补0，>> 1 有 / 2的效果 这是算数右移（即左边补的是和原来符号位相同的数字）
//	printf("b  =  %d\n", b);
//
//	return 0;
//}


//位操作符
int main()
{
	int a = 3;
	int b = 5;

	// a = 011
	// b = 101


	// & 是按位与 (有0就是0)
	int c = a & b;
	printf("a & b = %d\n", c);

	// | 是按位或(有1就是1)
	 c = a | b;
	printf("a | b = %d\n", c);


	// ^ 是按位异或 (相同为0，不同为1)
	 c = a ^ b;
	printf("a ^ b = %d\n", c);	
	
	return 0;
}