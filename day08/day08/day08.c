#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	char arr1[] = "abc";//a,b,c,\0
//	char arr2[] = { 'a','b','c' };//a,b,c
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *(p+i));
	}
	return 0;
}