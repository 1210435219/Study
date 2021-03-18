#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char input[20] = "";
	system("shutdown -s -t 60");
	printf("你的电脑将在60秒内关机\n输入“绺畱”取消关机：>");//绺畱
again:
	scanf("%s", &input);
	if (strcmp(input, "绺畱") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入！");
		goto again;
	}
	return 0;
}