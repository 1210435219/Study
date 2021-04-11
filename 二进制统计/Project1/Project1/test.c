#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int i;
	int count = 0;
	for (i = 31; i >= 0; i--)
	{
		if (((num >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}