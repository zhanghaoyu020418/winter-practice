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

//��ʼ��contact
void InitContact(Contact* pc)
{
	pc->capacity = CAPACITY_MAX;
	pc->sz = 0;
	pc->data = (Pre*)malloc(sizeof(Pre) * pc->capacity);
	if (pc->data == NULL)
	{
		printf("����ռ�ʧ��\n");
		exit(-1);
	}
	LoadContact(pc);
}

//���ݼ��
void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		pc->capacity *= 2;
		Pre* ptr = (Pre*)realloc(pc, pc->capacity);
		if (NULL != ptr)
		{
			printf("���ݳɹ�\n");
			pc->data = ptr;
		}
		else
		{
			printf("����ռ�ʧ��\n");
			return;
		}
	}
}

//�����ϵ�˵���Ϣ
void AddPre(Contact* pc)
{
	//�������
	CheckCapacity(pc);
	//������Ϣ
	printf("��������ϵ�˵���Ϣ\n");
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�!\n");
}

//������ϵ�˵�λ��
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

//ɾ����ϵ�˵���Ϣ
void DelePer(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	else
	{
		printf("������Ҫɾ�����˵�����:.");
		char TmpName[20];
		scanf("%s", TmpName);
		int pos = FindPreLoc(TmpName, pc);//��ͨѶ¼����Ҫɾ�����˵����֣�������λ��
		if (pos == -1)
		{
			printf("�����ڴ�Ҫɾ������\n");
			return;
		}
		else
		{
			for (int i = pos; i < pc->sz; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�!\n");
		}
	}
}

//����ָ������ϵ�˵���Ϣ
void FindPre(Contact* pc)
{
	char TmpName[20];
	printf("�������ѯ�˵�����:>");
	scanf("%s", TmpName);
	int pos = FindPreLoc(TmpName, pc);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	else
	{
		printf("����\t����\t�Ա�\t�绰\t��ַ\n");
		printf("%s\t%d\t%s\t%s\t%s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex,
			pc->data[pos].tele, pc->data[pos].addr);
	}
}

//�޸�ָ����ϵ�˵���Ϣ
void ModifyPre(Contact* pc)
{
	printf("������Ҫ�޸ĵ��˵�����:>");
	char TmpName[20];
	scanf("%s", TmpName);
	int pos = FindPreLoc(TmpName, pc);

	printf("������Ҫ�޸ĵ���ϵ�˵���Ϣ\n");
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &pc->data[pos].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�!\n");
}

//��ʾ������ϵ�˵���Ϣ
void ShowPre(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��!");
	}
	else
	{
	printf("����\t����\t�Ա�\t�绰\t��ַ\n");
	for (int i = 0; i < pc->sz; i++)
	printf("%s\t%d\t%s\t%s\t%s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex,
		pc->data[i].tele, pc->data[i].addr);
	}

}

//���������ϵ�˵���Ϣ
void DestroyPre(Contact* pc)
{
	free(pc->data);
	pc->capacity = 0;
	pc->sz = 0;
	printf("�˳�����\n");
	return;
}

int cmp(const void *e1, const void *e2)
{
	return strcmp((*(Pre*)e1).name, (*(Pre*)e2).name);
}

//����������������
void SortPreByName(Contact* pc)
{
	//qsort(�������ʼλ�ã� ����Ԫ�صĸ�����һ��Ԫ�صĴ�С(һ���ṹ���С)�� cmp�ȽϺ���)
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp);
	printf("����ɹ�\n");
}

//������ϵ�˵��ļ���
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
	printf("����ɹ�\n");
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