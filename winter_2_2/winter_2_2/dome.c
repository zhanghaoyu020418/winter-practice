#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	//һά����
//	int arr1[10];
//	int *p1 = arr1;        //��ŵ���һά�������Ԫ�أ�һ��Ԫ�صĵ�ַ
//	int (*p2)[10] = &arr1; //��ŵ���һά����ĵ�ַ��p2��һ����ָ��
//	//��ά����
//	int arr2[2][3];
//	int(*p3)[3] = arr2;    //��ŵ��Ƕ�ά�������Ԫ�أ���һ��һά����ĵ�ַ����һ����ָ��
//	int(*p4)[2][3] = &arr2;//��ŵ��Ƕ�ά����ĵ�ַ
//	return 0;
//}


//#include <stdio.h>
//
//void function(char * str)
//{
//	printf("I like study!\n");
//}
//
//int main()
//{
//	void(*p1)(char*) = &function;
//	void(*p2)(char*) = function;
//
//	(*p1)("I like study");
//	p2("I like study");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//
//
//	(  *(void(*)())  0  )();
//	//����0��ַ���ĺ������ú����޲���������ֵΪvoid
//	//(void (*)())0  �ǽ�0������ַ��ǿ������ת����һ�������ĵ�ַ��
//	//*�����õ����������(��������ܿ�֪���Բ��ý����ã�ֱ�ӰѺ�����������������)
//	//�������()���ڵ����������
//
//
//
//	void(*     signal(int,void(*)(int) )    )(int);
//	//���Ƕ�signal������������
//	//�ú�����һ������Ϊint ,��һ������Ϊָ��������Ϊint ����ֵΪvoid �ĺ���ָ��
//	//signal�����ķ���ֵΪָ��������Ϊint ������ֵΪvoid �ĺ���ָ��
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void function(int x, int y)
//{
//
//}
//
//int main()
//{
//	typedef void(*pfun_t)(int, int);   //��void (*)(int , int)�����͵ĺ���ָ���������pfun_t
//
//	typedef int(*pfun_c)(char*, char); //��int(*)(char*, char);���͵ĺ���ָ���������pfun_c
//
//
//	void(*p1)(int, int) = function;
//
//	//void(*)(int, int) p = function;  ����дʵ�����
//
//	pfun_t p2 = function;          //����������ȫ�ȼ�
//
//	return 0;
//}


