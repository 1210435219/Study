#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int Reorder(int* string,int sz)
{
	assert(sz>0);
	assert(string!=NULL);
	int i = 0;
	int* str = string;
	int *dividing = str;
	while (str<(string+sz))
	{
		if ((*str) % 2 == 1)
		{
			int tem = *str;
			*str = *dividing;
			*dividing = tem;
			dividing++;
		}
		str++;
	}
}

int main()
{
	int arr[] = { 3,2,4,5,654,12,97,5,65,12,3,45,6,8,65,12,32,45,6,32,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reorder(arr,sz);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}