#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{ 
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	scanf("%d %d", &num1, &num2);
	while (num1!=num2)
	{
		int i = num1;
		int j = num2;
		if ((i % 2) != (j % 2))
		{
			count++;
		}
		num1 = num1 >> 1;
		num2 = num2 >> 1;
	}
	printf("%d", count);
	return 0;
}