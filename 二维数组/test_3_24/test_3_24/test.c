#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%-3d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = 6;
//		}
//	}
//for (i = 0; i < 3; i++)
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%-3d", arr[i][j]);
//	}
//	printf("\n");
//}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int* p = &arr[0][0];
//	int i;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%2d ", *(p + i));
//	}
//


	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
	//	}
	//}



//void bubble_sort(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)//冒泡排序趟数
//	{
//		int j = 0;
//		int flag = 1;//优化：若第一次排序发现无需交换位置，跳出函数；
//		for (j = 0; j < sz - 1 - i; j++)//每一趟排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//优化：发现无序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{	
//	int arr[10] = { 12,123,654,321,86464,1651,56465,32116,65484,321 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//数组传参的时候，数组名是首元素地址
//	int j;
//	for (j = 0; j < sz - 1; j++)
//	{
//		printf("%-2d ", arr[j]);
//	}
//
//	return 0;
//}




//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//数组名是首元素地址（有两个例外）
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//例外：
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	int sz = sizeof(arr) / sizeof(arr[0]);//10
	/*
	数组名是数组首元素的地址
		但是有两个例外
		1.sizeof（数组名）-数组名表示整个数组，计算的是整个数组大小
		2.&数组名，数组名表示整个数组，这里取出的是整个数组
	除此之外数组名都是首元素地址
	*/

	return 0;
}