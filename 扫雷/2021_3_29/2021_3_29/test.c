#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void meau()
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$    1.play    $$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$    0.exit    $$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}


void game()
{
//�������̶�Ӧ����
	char mine[ROWS][COLS];//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];//��ŵ����Ų���׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
//��ӡ����
	//DisplayBoard(mine ,ROW,COL);
	DisplayBoard(show, ROW, COL);
//������
	SetMine(mine, ROW, COL,EASY);
	//DisplayBoard(mine, ROW, COL);
//�Ų���
	FindMine(mine ,show,ROW,COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		meau();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("�������������ѡ��\n");
			break;

		}
	} while (input);
	return 0;
}