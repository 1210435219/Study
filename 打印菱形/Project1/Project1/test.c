#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);
	//ÿ��2*line - 1
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
˼·��
��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
�����ǣ�������ո񣬺����*��ÿ����
  �ո񣺴������£�һ�м���һ��
  *��2*i+1�ķ�ʽ����

�����ǣ�������ո񣬺����*��ÿ����
  �ո񣺴������£�ÿ�ж�һ���ո�
  *�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣����У�line��ʾ�ܹ��ж�����
����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�
*/

//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
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