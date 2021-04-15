#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	for (i = 0; i < 100000; i++)
	{
		int count = 1;
		int num = i;
		
		while ((num / 10) != 0)
		{
			count++;
			num /= 10;
		}
		num = i;
		int sum = 0;
		while (num)
		{
			sum += pow((num % 10), count);	
			//sum += (num % 10)^count;
			num /= 10;
		}
		if (sum  == i)
		{
			printf("%d  ", i);
		}	
	}
	return 0;
}