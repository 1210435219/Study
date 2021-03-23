#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//µ¼Èë¾²Ì¬¿â


#pragma comment(lib,"add.lib")
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("sum = %d", sum);

	return 0;
}