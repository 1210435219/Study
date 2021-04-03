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
	printf("_____________________扫雷游戏_____________________\n");
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
	printf("_____________________扫雷游戏_____________________\n");
}





void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//x，y处没有雷
			mine[x][y] = '1';
			count--;
		}
	}
}

//统计mine数组的x，y坐标周围有几个雷
int GetMineCont(char mine[ROWS][COLS],int x,int y)
{
	int count = 0;
	if (mine[x - 1][y - 1] == '1')
		count++;
	if (mine[x - 1][y] == '1')
		count++;
	if (mine[x - 1][y + 1] == '1')
		count++;
	if (mine[x][y - 1] == '1')
		count++;
	if (mine[x][y + 1] == '1')
		count++;
	if (mine[x + 1][y - 1] == '1')
		count++;
	if (mine[x + 1][y] == '1')
		count++;
	if (mine[x + 1][y + 1] == '1')
		count++;
	return count;
}

void automatic(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y,int row,int col,int win)
{
	if (mine[x][y] == 0,x >= 1 && x <= row && y >= 1 && y <= col && show[x][y] == '*')
	{
		show[x][y] = GetMineCont(mine, x, y) + '0';
		win++;
	}

	if (mine[x][y+1] == 0, x >= 1 && x <= row && y+1 >= 1 && y+1 <= col && show[x][y+1] == '*')
	{
		show[x][y + 1] = GetMineCont(mine, x, y+1) + '0';
		win++;
		if (GetMineCont(mine, x, y + 1) == 0)
		{
			automatic(mine, show, x, y + 1, row, col,win);
		}
	}
			
	if (mine[x][y-1] == 0, x >= 1 && x <= row && y - 1 >= 1 && y -1 <= col && show[x][y - 1] == '*')
	{
		show[x][y - 1] = GetMineCont(mine, x, y - 1) + '0';
		win++;
		if (GetMineCont(mine, x, y - 1) == 0)
		{
			automatic(mine, show, x, y - 1, row, col, win);
		}
	}

	if (mine[x+1][y+1] == 0, x+1 >= 1 && x+1 <= row && y + 1 >= 1 && y + 1 <= col && show[x+1][y + 1] == '*')
	{
		show[x+1][y + 1] = GetMineCont(mine, x+1, y + 1) + '0';
		win++;
		if (GetMineCont(mine, x+1, y + 1) == 0)
		{
			automatic(mine, show, x+1, y + 1, row, col, win);
		}
	}

	if (mine[x-1][y+1] == 0, x-1 >= 1 && x-1 <= row && y + 1 >= 1 && y + 1 <= col && show[x-1][y + 1] == '*')
	{
		show[x-1][y + 1] = GetMineCont(mine, x-1, y + 1) + '0';
		win++;
		if (GetMineCont(mine, x-1, y + 1) == 0)
		{
			automatic(mine, show, x-1, y + 1, row, col, win);
		}
	}

	if (mine[x+1][y] == 0, x+1 >= 1 && x+1 <= row && y >= 1 && y  <= col && show[x+1][y] == '*')
	{
		show[x+1][y] = GetMineCont(mine, x+1, y) + '0';
		win++;
		if (GetMineCont(mine, x+1, y ) == 0)
		{
			automatic(mine, show, x+1, y , row, col, win);
		}
	}

	if (mine[x-1][y] == 0, x-1 >= 1 && x-1 <= row && y >= 1 && y <= col && show[x-1][y] == '*')
	{
		show[x-1][y] = GetMineCont(mine, x-1, y) + '0';
		if (GetMineCont(mine, x-1, y) == 0)
		{
			automatic(mine, show, x-1, y, row, col, win);
		}
	}

	if (mine[x+1][y-1] == 0, x+1 >= 1 && x+1 <= row && y - 1 >= 1 && y - 1 <= col && show[x+1][y - 1] == '*')
	{
		show[x+1][y - 1] = GetMineCont(mine, x+1, y - 1) + '0';
		if (GetMineCont(mine, x+1, y + 1) == 0)
		{
			automatic(mine, show, x+1, y - 1, row, col, win);
		}
	}

	if (mine[x-1][y-1] == 0, x-1 >= 1 && x-1 <= row && y - 1 >= 1 && y - 1 <= col && show[x-1][y -1] == '*')
	{
		show[x-1][y - 1] = GetMineCont(mine, x-1, y -1) + '0';
		if (GetMineCont(mine, x-1, y - 1) == 0)
		{
			automatic(mine, show, x-1, y - 1, row, col,win);
		}
	}		
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win<row*col-EASY)
	{
		printf("请输入要排查的坐标：>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//1.坐标合法性
		//2.判断改坐标是不是雷？不是雷统计周围雷的个数
		int count = GetMineCont(mine, x, y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("YOU LOSE!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else if (mine[x][y] == '0' && count == 0)
			{
				automatic(mine,show,x,y,row,col,win);
				DisplayBoard(show, row, col);
			}
			else 
			{
				/*count = GetMineCont(mine, x, y);*/
				//if (count == 0)
				//{
				//	
				//}
				show[x][y] = count+'0';//数字字符（字符数字‘4’-字符‘0’=数字4；数字5+字符‘0’=字符‘5’）
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！");
		}
	}
	if (win == row * col - EASY)
	{
		printf("YOU WIN!\n");
	}
}




