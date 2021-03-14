#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void LoadContact(Contact*pc)
{
	FILE* pf = fopen("contact.txt", "r");
	if (NULL == pf)
	{
		printf("InitContact::%s", strerror(errno));
		return;
	}

	char t1[20];
	int t2;
	char t3[20];
	char t4[20];
	char t5[20];

	while (fscanf(pf, "%s %d %s %s %s", t1, &t2, t3, t4, t5) > 0)
	{
		CheckCapacity(pc);
		strcpy(pc->data[pc->sz].name,  t1);
		pc->data[pc->sz].age = t2;
		strcpy(pc->data[pc->sz].sex, t3);
		strcpy(pc->data[pc->sz].tele, t4);
		strcpy(pc->data[pc->sz].addr, t5);
		pc->sz++;
	}
}

//初始化contact
void InitContact(Contact* pc)
{
	pc->capacity = CAPACITY_MAX;
	pc->sz = 0;
	pc->data = (Pre*)malloc(sizeof(Pre) * pc->capacity);
	if (pc->data == NULL)
	{
		printf("申请空间失败\n");
		exit(-1);
	}
	LoadContact(pc);
}

//增容检查
void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		pc->capacity *= 2;
		Pre* ptr = (Pre*)realloc(pc, pc->capacity);
		if (NULL != ptr)
		{
			printf("增容成功\n");
			pc->data = ptr;
		}
		else
		{
			printf("申请空间失败\n");
			return;
		}
	}
}

//添加联系人的信息
void AddPre(Contact* pc)
{
	//检查容量
	CheckCapacity(pc);
	//输入信息
	printf("请输入联系人的信息\n");
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功!\n");
}

//查找联系人的位置
int FindPreLoc(char* PreName, Contact* pc)
{
	for (int pos = 0; pos < pc->sz; pos++)
	{
		if (strcmp(PreName, pc->data[pos].name) == 0)
		{
			return pos;
		}
	}
	return -1;
}

//删除联系人的信息
void DelePer(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，不能删除\n");
		return;
	}
	else
	{
		printf("请输入要删除的人的名字:.");
		char TmpName[20];
		scanf("%s", TmpName);
		int pos = FindPreLoc(TmpName, pc);//在通讯录中找要删除的人的名字，并返回位置
		if (pos == -1)
		{
			printf("不存在此要删除的人\n");
			return;
		}
		else
		{
			for (int i = pos; i < pc->sz; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("删除成功!\n");
		}
	}
}

//查找指定的联系人的信息
void FindPre(Contact* pc)
{
	char TmpName[20];
	printf("请输入查询人的姓名:>");
	scanf("%s", TmpName);
	int pos = FindPreLoc(TmpName, pc);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	else
	{
		printf("姓名\t年龄\t性别\t电话\t地址\n");
		printf("%s\t%d\t%s\t%s\t%s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex,
			pc->data[pos].tele, pc->data[pos].addr);
	}
}

//修改指定联系人的信息
void ModifyPre(Contact* pc)
{
	printf("请输入要修改的人的姓名:>");
	char TmpName[20];
	scanf("%s", TmpName);
	int pos = FindPreLoc(TmpName, pc);

	printf("请输入要修改的联系人的信息\n");
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功!\n");
}

//显示所有联系人的信息
void ShowPre(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空!");
	}
	else
	{
	printf("姓名\t年龄\t性别\t电话\t地址\n");
	for (int i = 0; i < pc->sz; i++)
	printf("%s\t%d\t%s\t%s\t%s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex,
		pc->data[i].tele, pc->data[i].addr);
	}

}

//清空所有联系人的信息
void DestroyPre(Contact* pc)
{
	free(pc->data);
	pc->capacity = 0;
	pc->sz = 0;
	printf("退出程序\n");
	return;
}

int cmp(const void *e1, const void *e2)
{
	return strcmp((*(Pre*)e1).name, (*(Pre*)e2).name);
}

//以名字排序所有人
void SortPreByName(Contact* pc)
{
	//qsort(排序的起始位置， 待排元素的个数，一个元素的大小(一个结构体大小)， cmp比较函数)
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp);
	printf("排序成功\n");
}

//保存联系人到文件中
void SavePre(Contact* pc)
{
	FILE* pf = fopen("contact.txt", "w");
	if (NULL == pf)
	{
		printf("SavePre::=%s\n", strerror(errno));
		return;
	}

	for (int i = 0; i < pc->sz; i++)
	{
		fprintf(pf, "%-8s %-8d %-8s %-8s %-8s\n", pc->data[i].name, 
			pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
	printf("保存成功\n");
	fclose(pf);
	pf = NULL;
}

void Menu()
{
	printf("**************************\n");
	printf("***1.Add      2.Dele  ****\n");
	printf("***3.Find     4.Modify****\n");
	printf("***5.Destroy  6.Sort  ****\n");
	printf("***7.Show     8.Save  ****\n");
	printf("***0.exit             ****\n");
	printf("**************************\n");
}