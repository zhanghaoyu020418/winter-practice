//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//static int cnt = 0;
//
//void move(char a[], char c[])
//{
//	printf("%s ---> %s\n", a, c);
//	cnt++;                      //每一移动就cnt+1,最后可以看到移动的次数
//}
//
//void hanoi(int n, char a[], char b[], char c[])
//{
//	if (n == 1)                 //如果只有个板
//	{
//		move(a, c);             //直接将板从 第一个杆子 移动到 第三个杆子
//	}
//	else                        //如果有>=2个板
//	{
//		hanoi(n - 1, a, c, b);  //将除最大板之外的其余板，从杆子1移到杆子2
//		move(a, c);             //将板从 第一个杆子 移动到 第三个杆子
//		hanoi(n - 1, b, a, c);  //将除最大板之外的其余板，从杆子2移到杆子3
//	}
//}
//
//
//int main()
//{
//	int num;
//	scanf("%d", &num);       //num表示铜板的数量
//
//	char a[] = "杆子1";
//	char b[] = "杆子2";
//	char c[] = "杆子3";
//
//
//	hanoi(num, a, b, c);//ABC表示三个杆子
//
//	printf("%d", cnt);
//	return 0;
//	/* 作者：zhy  2021-1-21*/
//}