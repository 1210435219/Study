#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void init(int* arr)
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		*(arr + i) = 0;
//	}
//}

void init(int arr[])
{
	int i;
	for (i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
}

void print(int* arr)
{
	int i;
	for (i = 0; i <100; i++)
	{
		printf(" %d %d \n", i, *(arr + i));
	}
}

void Reverse(int arr[],int sz)
{
	int low = 0;
	int hight = sz-1;
	if (low < hight)
	{
		arr[low] ^= arr[hight];
		arr[hight] ^= arr[low];
		arr[low] ^= arr[hight];
		low++;
		hight--;
	}
}

int main()
{
	int arr[100];
	init(arr);
	print(arr);
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr,sz);
}