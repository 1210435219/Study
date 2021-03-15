#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b, c = 0;
	int n = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(n=0;n<2;n++)
	{
		if (c > a && c > b)
		{
			a = a ^ c;
			c = a ^ c;
			a = a ^ c;
		}
		else if (c > b && c < a)
		{
			b = c ^ b;
			c = c ^ b;
			b = c ^ b;
		}
		else if (b > a && b > c)
		{
			b = a ^ b;
			a = a ^ b;
			b = a ^ b;
		}
		
	} 
	printf("%d >%d >%d", a, b, c);
	return 0;
}



