#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 20
#define ADDR_MAX 20
#define CAPACITY_MAX 20

enum IN
{
	Exit,
	Add,
	Dele,
	Find,
	Modify,
	Destroy,
	Sort,
	Show,
	Save
};

typedef struct Pre
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}Pre;

typedef struct Contact
{
	Pre *data;//���ѧ������Ϣ
	int sz;//��¼��ǰcontact�е�����
	int capacity;//contact�е��������
}Contact;

//��ʼ��contact
void InitContact(Contact* pc);

//�����ϵ�˵���Ϣ
void AddPre(Contact* pc);

//ɾ����ϵ�˵���Ϣ
void DelePer(Contact* pc);

//������ϵ�˵�λ��
int FindPreLoc(char* PreName, Contact* pc);

//����ָ������ϵ�˵���Ϣ
void FindPre(Contact* pc);

//�޸�ָ����ϵ�˵���Ϣ
void ModifyPre(Contact* pc);

//��ʾ������ϵ�˵���Ϣ
void ShowPre(Contact* pc);

//���������ϵ�˵���Ϣ
void DestroyPre(Contact* pc);

//����������������
void SortPreByName(Contact* pc);

//��ӡ�˵�
void Menu();

//���ݼ��
void CheckCapacity(Contact* pc);

//������ϵ�˵��ļ���
void SavePre(Contact* pc);