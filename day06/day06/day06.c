#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a >= b && a >= c)
//		{
//			printf("%d\n", a);
//		}
//		else if (b >= a && b >= c)
//		{
//			printf("%d\n", b);
//		}
//		else
//			printf("%d\n", c);
//	}
//	return 0;
//}


//int main()
//{
//	char ch;
//	
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '\n')
//			continue;
//		printf("%c\n",ch > 91 ? ch - 32 : ch + 32 );
//	}
//	return 0;
//}

//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch == '\n')//忽略回车
//            continue;
//        if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", ch + 32);
//        else if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//        else
//            printf("%c\n", ch);
//    }
//    return 0;
//}

#include<time.h>
#include<stdlib.h>

void meau()
{
	printf("##########################\n");
	printf("########  0.play  ########\n");
	printf("########  1.exit  ########\n");
	printf("##########################\n");
}

void game()
{
	int num;
	int n=0;
	num = rand()%100;
	while (n != num)
	{
		printf("请输入一个数字>");
		scanf("%d", &n);
		if (n > num)
			printf("猜大了\n");
		else if (n < num)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}

int main()
{
	int input;
	srand(time(NULL));
	while (1)
	{
		meau();
		scanf("%d", &input);
		if (input == 0)
			game();
		else
			break;
	}
	return 0;
}
