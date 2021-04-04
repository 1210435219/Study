#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	if ((a > 11) && (b = 1))
	{
	}
	printf("a=%d b=%d\n", a, b);
	return 0;
}