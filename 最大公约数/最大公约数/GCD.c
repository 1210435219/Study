#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		for (i = b; i > 0; i--)
		{
			if ((a % i == 0) && (b % i == 0))
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	else if (a < b)
	{
		i = 0;
		for (i = a; i > 0; i--)
		{
			if ((a % i == 0) && (b % i == 0))
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	else
		printf("%d\n", i);
	return 0;
}