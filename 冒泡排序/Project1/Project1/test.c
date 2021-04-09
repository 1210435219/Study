#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Bubble_sort(int* arr,int count)
{
	int i; 
	for (i = count; i > 0; i--)
	{
	int* j;
		for (j = arr; j < arr+i-1; j=j+1)
		{
			if ((*j) < (*(j + 1)))
			{
				int temp = *j;
				*j = *(j + 1);
				*(j + 1) = temp;
			}
		}
	}
}

int main()
{
	//int arr[10] = { 1,4,5,8,9,7,0,3,2,6 };
	int arr[1000] = {0};
	int i = 0;
	int count = 0;
	while (~(scanf("%d", &arr[i])))
	{
		i++;
		count++;
	}
	Bubble_sort(arr,count);
	for (i = 0; i < count; i++)
	{
	printf(" %d ", arr[i]);
	}
	return 0;
}