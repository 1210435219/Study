#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//ͨѶ¼��
//���Ա���1000����Ϣ
//ÿ���˵���Ϣ�������֣����䣬�Ա𣬵绰��סַ��
//���ܣ�
//1.����һ���˵���Ϣ
//2.ɾ��һ��ָ���˵���Ϣ
//3.����һ��ָ���˵���Ϣ
//4.�޸�һ��ָ���˵���Ϣ
//5.��ʾͨѶ¼�������˵���Ϣ
//6.����
//0.�˳�ͨѶ¼

//test.c   ����ͨѶ¼�߼�
//contact.h  ͨѶ¼��ع��ܺ�������
//contact.c  ��ع��ܺ���ʵ��

void menu()
{
	printf("--------------------------------------------                                      \n");
	printf("                1. �½���ϵ��                                                                  \n");
	printf("                2. ɾ����ϵ��                                                                  \n");
	printf("                3. ������ϵ��                                                                  \n");
	printf("                4. �޸���ϵ��                                                                  \n");
	printf("                5. ��ʾȫ����ϵ��                                                           \n");
	printf("                6. ������ϵ��                                                                  \n");
	printf("                0. exit                                                                              \n");
	printf("--------------------------------------------                                      \n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};



void test()
{
	int input = 0;

	struct Contact con;//����һ��ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼������ַ�����޸ģ������ʱ��ռ�Ч�ʣ�
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("���˳�ͨѶ¼��\n");
			break;
		case SORT:

			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}