//#define _CRT_SECURE_NO_WARNINGS 1
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