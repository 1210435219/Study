#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int DigitSum(int n)
{
	if ((n / 10) != 0)
		return DigitSum(n / 10) + (n % 10);
	else;
	return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d", ret);
	return 0;
}