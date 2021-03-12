#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num=0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = num; i > 0; i--)
//	{
//		if (i % 2 == 1)
//			printf(" %d, ", i);
//	}
//	return 0;
//}


//continue;跳过当前循环语句，执行循环判断语句
//break;跳出当前循环

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		//getchar():从键盘读取一个字符
//		//putchar(字符)：打印一个字符
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码：");
//	scanf("%s",password);
//	//变量需要取地址&，password是数组，数组不需要取地址
//	int ch = 0;
//	//需要清空一下缓存区         scanf、getchar——>缓存区<——键盘
//	while ((ch = getchar()) != '\n') {};
//	printf("请确认密码（Y/N）");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败！");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	int j;
//	for (j = 1; j <= 10; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	int j;
//	//优化1！+2！+......+10！     2！=1！*2     3！=2！*3 ........ 10！=9！*10
//	for (j = 1; j <= 10; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a = -4 % 3;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//
//{
//
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//
//	{
//
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//
//		{
//
//			printf("%d ", year);
//
//		}
//
//	}
//
//	printf("\n");
//
//	return 0;
//
//}

#include<stdio.h>

int main()

{

	int i = 0;

	int j = 0;

	for (i = 1; i <= 9; i++)

	{

		for (j = 1; j <= i; j++)

		{

			printf("%d*%d=%-2d ", i, j, i * j);//-2d左对齐

		}

		printf("\n");

	}

	return 0;
}