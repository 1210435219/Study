#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>

//int main()
//{
//	char arr1[] = "Welcome to 146!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");//system ������ִ��ϵͳ���� 
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//��������Ϸ��
//1.�������������1-100��
//2�����ָ�������ֱ���¶�Ϊֹ��

#include <stdlib.h>
#include<time.h>

void menu()
{
	printf("                              \n");
	printf("            1.play            \n");
	printf("            0.exit            \n");
	printf("                              \n");
}

//RAND MAX 0x7fff=32767

void game()
{
	//.1���������
	int ret = (rand()%10)+1;//�������������
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	int luck = 0;
	while (1)
	{
		printf("����������:>(1~10)");
		scanf("%d", &guess);
		luck++;
		if (guess > ret)
		{
			printf("�´���Ŷ");
		}
		else if (guess < ret)
		{
			printf("��С��Ŷ");
		}
		else if((guess==ret)&&(luck==1))
		{
			printf("��ϲ�㣬ŷ������������\n");
			printf("��ϲ�㣬ŷ������������\n");
			printf("��ϲ�㣬ŷ������������\n");
			break;
		}
		else if ((guess == ret) && (luck>1)&&(luck<=5))
		{
			printf("��ϲ�㣬������������\n");
			printf("��ϲ�㣬������������\n");
			printf("��ϲ�㣬������������\n");
			break;
		}
		else if ((guess == ret) && (luck > 5) && (luck <= 9))
		{
			printf("���������е㵹ù������\n");
			printf("���������е㵹ù������\n");
			printf("���������е㵹ù������\n");
			break;
		}
		else if ((guess == ret) && (luck >=10) )
		{
			printf("���������������֣�����\n");
			printf("���������������֣�����\n");
			printf("���������������֣�����\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//time�����������صľ���ʱ���
	srand((unsigned int)time(NULL));//������ʱ�����ڱ仯��
	do
	{
		menu();
		printf("��ѡ��1/0��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}