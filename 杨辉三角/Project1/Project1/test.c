#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
void YH_print(int line)
{
	int  yh[50][50] = { 1 };
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++)
	{
		yh[i][0] = 1;
		for (j = 1; j <= i; j++)
		{
			yh[i][j] = yh[i-1][j-1] + yh[i-1][j];
		}
	}
	for (i = 0; i < line; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", yh[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int line = 0;
	scanf("%d", &line);
	YH_print(line);
	return 0;
}