#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Exchange(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {10,9,8,7,6,5,4,3,2,1};
	//int i = 0;
	//printf("请输入第一个数组>\n");
	//while (scanf("%d", &arr1[i])!=EOF)
	//{
	//	printf("%d ", arr1[i]);
	//	i++;
	//}
	//printf("请输入第二个数组>\n");
	//i = 0;
	//while (scanf("%d", &arr2[i]) != EOF)
	//{
	//	printf("%d ", arr2[i]);
	//	i++;
	//}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d, ",arr1[i]);
	}
	printf("\n ");
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", arr2[i]);
	}
	printf("\n ");
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Exchange(arr1, arr2, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", arr1[i]);
	}
	printf("\n ");
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", arr2[i]);
	}
	printf("\n ");
	return 0;
}