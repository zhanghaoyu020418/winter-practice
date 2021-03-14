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
	Pre *data;//存放学生的信息
	int sz;//记录当前contact中的人数
	int capacity;//contact中的最大人数
}Contact;

//初始化contact
void InitContact(Contact* pc);

//添加联系人的信息
void AddPre(Contact* pc);

//删除联系人的信息
void DelePer(Contact* pc);

//查找联系人的位置
int FindPreLoc(char* PreName, Contact* pc);

//查找指定的联系人的信息
void FindPre(Contact* pc);

//修改指定联系人的信息
void ModifyPre(Contact* pc);

//显示所有联系人的信息
void ShowPre(Contact* pc);

//清空所有联系人的信息
void DestroyPre(Contact* pc);

//以名字排序所有人
void SortPreByName(Contact* pc);

//打印菜单
void Menu();

//增容检查
void CheckCapacity(Contact* pc);

//保存联系人到文件中
void SavePre(Contact* pc);