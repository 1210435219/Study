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
	/*printf("三子棋\n");*/
	char board[ROW][COL];//初始化为空格
	//初始化棋盘；
	InitBoard(board, ROW, COL);
	//打印棋盘;
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}			
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);//随机下棋
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢了！\n");
	else if (ret == '#')
		printf("电脑赢了！\n");
	else if (ret == 'Q')
		printf("平局！\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} 	while (input);
	return 0;
}