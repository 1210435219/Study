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
//		system("cls");//system 函数是执行系统命令 
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//猜数字游戏：
//1.电脑生成随机数1-100；
//2猜数字给反馈，直到猜对为止；

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
	//.1生成随机数
	int ret = (rand()%10)+1;//用来生成随机数
	//printf("%d\n", ret);
	//2.猜数字
	int guess = 0;
	int luck = 0;
	while (1)
	{
		printf("请输入数字:>(1~10)");
		scanf("%d", &guess);
		luck++;
		if (guess > ret)
		{
			printf("猜大了哦");
		}
		else if (guess < ret)
		{
			printf("猜小了哦");
		}
		else if((guess==ret)&&(luck==1))
		{
			printf("恭喜你，欧气满满！！！\n");
			printf("恭喜你，欧气满满！！！\n");
			printf("恭喜你，欧气满满！！！\n");
			break;
		}
		else if ((guess == ret) && (luck>1)&&(luck<=5))
		{
			printf("恭喜你，运气不错！！！\n");
			printf("恭喜你，运气不错！！！\n");
			printf("恭喜你，运气不错！！！\n");
			break;
		}
		else if ((guess == ret) && (luck > 5) && (luck <= 9))
		{
			printf("哈哈哈，有点倒霉！！！\n");
			printf("哈哈哈，有点倒霉！！！\n");
			printf("哈哈哈，有点倒霉！！！\n");
			break;
		}
		else if ((guess == ret) && (luck >=10) )
		{
			printf("哈哈哈，酋长出现！！！\n");
			printf("哈哈哈，酋长出现！！！\n");
			printf("哈哈哈，酋长出现！！！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//time（）函数返回的就是时间戳
	srand((unsigned int)time(NULL));//电脑上时间是在变化的
	do
	{
		menu();
		printf("请选择（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}