#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i<rows;i++)
	{
		for (j = 0;j<cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("_____________________ɨ����Ϸ_____________________\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("_____________________ɨ����Ϸ_____________________\n");
}





void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//x��y��û����
			mine[x][y] = '1';
			count--;
		}
	}
}

//ͳ��mine�����x��y������Χ�м�����
int GetMineCont(char mine[ROWS][COLS],int x,int y)
{
	return	mine[x-1][y]   +
		mine[x-1][y-1] +
		mine[x-1][y+1] +
		mine[x][y-1]   +
		mine[x][y+1]   +
		mine[x+1][y]   +
		mine[x+1][y-1] +
		mine[x+1][y+1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win<row*col-EASY)
	{
		printf("������Ҫ�Ų�����꣺>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//1.����Ϸ���
		//2.�жϸ������ǲ����ף�������ͳ����Χ�׵ĸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("YOU LOSE!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count+'0';//�����ַ����ַ����֡�4��-�ַ���0��=����4������5+�ַ���0��=�ַ���5����
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룡");
		}
	}
	if (win == row * col - EASY)
	{
		printf("YOU WIN!\n");
	}
}




