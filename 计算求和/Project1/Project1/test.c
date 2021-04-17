#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int i;
	int temp = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		temp = 10 * temp + a;
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}