#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int	N;
	int odd_num=0;
	int even_num=0;
	int i;
	scanf("%d", &N);
	for (i = N; i > 0; i--)
	{
		if (i % 2 == 1)
			odd_num++;
		else
			even_num++;
		N--;		
	}
	printf("%d %d\n", odd_num, even_num);
	return 0;
}