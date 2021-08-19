#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADRR_MAX 30
#define MAX 1000
#define DEFAULT_SZ 3

//ÿ������Ϣ�Ľṹ��
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adrr[ADRR_MAX];
};


//��̬ͨѶ¼�Ľṹ��
//struct Contact
//{
//	struct PeoInfo data[MAX];//���1000����Ϣ
//	int sz;//��ʾͨѶ¼�е�ǰ��ŵ���Ϣ����
//};

//��̬������
struct Contact
{
	struct PeoInfo *data;//���1000����Ϣ
	int sz;//��ʾͨѶ¼�е�ǰ��ŵ���Ϣ����
	int capacity;//��ʾͨѶ¼��ǰ�������
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//����һ���˵���Ϣ
void AddContact(struct Contact* pc);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��һ���˵���Ϣ
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(const struct Contact*pc);

//�޸���ϵ��
void ModifyContact(const struct Contact* pc);

//����ͨѶ¼
void DestroyContact(struct Contact* pc);