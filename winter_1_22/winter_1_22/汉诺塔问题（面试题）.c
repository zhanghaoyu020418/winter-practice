#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//static int cnt = 0;
//
//void move(char a, char c)
//{
//	cnt++;                      //ÿһ�ƶ���cnt+1,�����Կ����ƶ��Ĵ���
//}
//
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)                 //���ֻ�и���
//	{
//		move(a, c);             //ֱ�ӽ���� ��һ������ �ƶ��� ����������
//	}
//	else                        //�����>=2����
//	{
//		hanoi(n - 1, a, c, b);  //��������֮�������壬�Ӹ���1�Ƶ�����2
//		move(a, c);             //����� ��һ������ �ƶ��� ����������
//		hanoi(n - 1, b, a, c);  //��������֮�������壬�Ӹ���2�Ƶ�����3
//	}
//}
//
//
//int main()
//{
//	int num;
//	scanf("%d", &num);       //num��ʾͭ�������
//
//	hanoi(num, 'A', 'B', 'C');//ABC��ʾ��������
//
//	printf("%d", cnt);
//	return 0;
//}

#include <stdio.h>

int f[20];

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);

	f[1] = 1;
	for (i = 2; i <= n; i++)
	{
		f[i] = 1 + f[i - 1] * 2;
	}

	printf("%d\n", f[n]);


	return 0;
}