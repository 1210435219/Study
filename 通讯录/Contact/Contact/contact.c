#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include"contact.h"

static FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset - �����ڴ�
	memset(pc->data, 0,sizeof(pc->data) );
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pc->sz].adrr);

		pc->sz++;
		printf("��ӳɹ���\n");
	}
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	printf("%-10s \t %-5s \t %-5s \t %-12s \t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-10s \t %-5d \t %-5s \t %-12s \t %-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].adrr);
		}
	}
	

}


void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		//1.�ҵ�Ҫɾ������
		printf("������Ҫɾ���˵����֣�\n");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("���˲�����\n");
		}

		//2.ɾ��
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}	
			pc->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
}

void SearchContact(const struct Contact* pc)
{
	printf("������Ҫ�����˵�����\n");
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-10s \t %-5s \t %-5s \t %-12s \t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s \t %-5d \t %-5s \t %-12s \t %-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].adrr);
	}
}

void ModifyContact(const struct Contact* pc)
{
	printf("������Ҫ�޸���ϵ�˵�����\n");
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", (char*)pc->data[pos].name);
		printf("���������䣺");
		scanf("%d", (int*)(pc->data[pos].age));
		printf("�������Ա�");
		scanf("%s", (char*)pc->data[pos].sex);
		printf("������绰��");
		scanf("%s", (char*)pc->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", (char*)pc->data[pos].adrr);

		printf("�޸ĳɹ�\n");
	}
}