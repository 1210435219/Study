#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("                                        \n");
	printf("                  1.play                \n");
	printf("                  0.exit                \n");
	printf("                                        \n");
}

void game()
{
	char ret = 0;
	/*printf("������\n");*/
	char board[ROW][COL];//��ʼ��Ϊ�ո�
	//��ʼ�����̣�
	InitBoard(board, ROW, COL);
	//��ӡ����;
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}			
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board, ROW, COL);//�������
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("���Ӯ�ˣ�\n");
	else if (ret == '#')
		printf("����Ӯ�ˣ�\n");
	else if (ret == 'Q')
		printf("ƽ�֣�\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} 	while (input);
	return 0;
}