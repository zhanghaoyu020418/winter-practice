#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"




void test()
{
	
	Contact con;
	InitContact(&con);
	enum IN input;
	do
	{
		Menu();//��ӡ�˵�
		printf("��ѡ����Ҫ�Ĳ���:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddPre(&con);
			break;
		case Dele:
			DelePer(&con);
			break;
		case Find:
			FindPre(&con);
			break;
		case Modify:
			ModifyPre(&con);
			break;
		case Destroy:
			DestroyPre(&con);
			break;
		case Sort:
			SortPreByName(&con);
			break;
		case Show:
			ShowPre(&con);
			break;
		case Exit:
			printf("�˳�����\n");
			break;
		case Save:
			SavePre(&con);
			break;
		default:
			printf("�޴˲���������������\n");
		}

	} while (input);
}


int main()
{
	test();
	return 0;
}