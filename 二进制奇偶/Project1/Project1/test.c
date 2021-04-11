#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num;
	int i;
	scanf("%d", &num);
	for (i = 31; i >= 1; i -= 2)
	{
		printf(" %d", (num >> i) & 1);
	}
	printf("\n");
	printf(" ");
	for (i = 30; i >= 1; i -= 2)
	{
		printf(" %d", (num >> i) & 1);
	}
	return 0;
}