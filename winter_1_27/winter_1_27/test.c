//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
////������
////int my_strlen(char *arr)
////{
////	int cnt = 0;
////	while (*arr++ != '\0')
////	{
////		cnt++;
////	}
////	return cnt;
////}
//
////ָ��-ָ��
////int my_strlen(char *arr)
////{
////	char *start = arr;
////	while (*start != '\0')
////	{
////		start++;
////	}
////	return start - arr;
////}
//
//int my_strlen(char *arr)
//{
//	char *start = arr;
//	while (*start++ != '\0');//start���һ�ν���������֮����++��һ�����������--һ��
//	return start - arr - 1;
//}
//
//
//struct student
//{
//	char name[20];
//	int age;
//	char number[20];
//	char sex[23];
//
//};
//
//void print1(struct student *ps)
//{
//	char str[] = "zhy";//�ַ�������Ͳ����Ա�ֱ�Ӹ���
//	ps->age = 18;
//	strcpy(ps, str);
//}
//
//void print(struct student *ps)
//{
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->number, ps->sex);
//}
//
//
//int main()
//{
//
//	////char * ���͵�ָ��ÿ�ζ��Ƿ���1���ֽڵĿռ��С
//	//int arr[10];
//	//char * p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 40; i++)
//	//{
//	//	*(p + i) = 'x';
//	//}
//	//int a[10];
//	//printf("%d\n", &a[9] - &a[0]);
//
//	//char arr[] = "zhanghaoyu";
//	//int len = my_strlen(arr);
//
//	//printf("%d\n", len);
//
//	//char* arr[9] = { "zhanghaoyu", "jiaoyou", "lalalal" };
//	//printf("%s %s %s\n", arr[1], arr[2], arr[0]);
//
//	struct student s = {"zhanghaoyu", 18, "39", "man"};
//
//	print1(&s);
//	print(&s);
//
//
//	return 0;
//}