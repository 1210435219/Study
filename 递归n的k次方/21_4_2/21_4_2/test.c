#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Power(int n, int k)
{
	if (k > 1)
	{
		return n * (Power(n, k - 1));
	}
	else
	{
		return n;
	}	
}

int main()
{
	int n = 0;
	int k = 0;
	printf("计算n的k次方，请依次输入n，k\n");
	scanf("%d%d", &n, &k);
	int ret = Power(n, k);
	printf("%d", ret);
	return 0;
}