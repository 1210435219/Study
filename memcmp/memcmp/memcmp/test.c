#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>



int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,6,7 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);
	return 0;
}