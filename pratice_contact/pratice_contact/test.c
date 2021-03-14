#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"




void test()
{
	
	Contact con;
	InitContact(&con);
	enum IN input;
	do
	{
		Menu();//打印菜单
		printf("请选择你要的操作:>");
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
			printf("退出程序\n");
			break;
		case Save:
			SavePre(&con);
			break;
		default:
			printf("无此操作，请重新输入\n");
		}

	} while (input);
}


int main()
{
	test();
	return 0;
}