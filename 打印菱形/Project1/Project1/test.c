#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);
	//每行2*line - 1
	int i = 0;
	int j = 0;
	int sp_num;
	int x_num;
	for (i = 1; i <= ((2 * line) + 1); i++)
	{
		if (i <= (line + 1))
		{
			x_num = (2 * i) - 1;
			sp_num = (line+1) - i;
			while (1)
			{
				if (sp_num != 0 && x_num != 0)
				{
					printf(" ");
					sp_num--;
				}
				else if (sp_num == 0 && x_num != 0)
				{
					printf("*");
					x_num--;
				}
				else
				{
					printf("\n");
					break;
				}
			}
		}
		if (i > line + 1)
		{
			x_num = ((2 * (line+1)) - 1)-(2*(i-(line+1)));
			sp_num = i-(line+1);
			while (1)
			{
				if (sp_num != 0 && x_num != 0)
				{
					printf(" ");
					sp_num--;
				}
				else if (sp_num == 0 && x_num != 0)
				{
					printf("*");
					x_num--;
				}
				else
				{
					printf("\n");
					break;
				}
			}
		}
		
	}

}



/*
思路：
仔细观察图形，可以发现，此图形中是由空格和*按照不同个数的输出组成的。
上三角：先输出空格，后输出*，每行中
  空格：从上往下，一行减少一个
  *：2*i+1的方式递增

下三角：先输出空格，后输出*，每行中
  空格：从上往下，每行多一个空格
  *： 从上往下，按照2*(line-1-i)-1的方式减少，其中：line表示总共有多少行
按照上述方式，将上三角和下三角中的空格和*分别输出即可。
*/

//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}