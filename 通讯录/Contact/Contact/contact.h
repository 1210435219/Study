#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADRR_MAX 30
#define MAX 1000


//每个人信息的结构体
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adrr[ADRR_MAX];
};


//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX];//存放1000人信息
	int sz;//表示通讯录中当前存放的信息个数
};

//初始化通讯录
void InitContact(struct Contact* pc);

//增加一个人的信息
void AddContact(struct Contact* pc);

//打印通讯录中的信息
void ShowContact(const struct Contact* pc);

//删除一个人的信息
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact*pc);

//修改联系人
void ModifyContact(const struct Contact* pc);