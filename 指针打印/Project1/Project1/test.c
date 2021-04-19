#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int* pa)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(pa + i));
	}
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	print(arr);
	return 0;
}