#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//pa是一个指向数组的指针<数组指针>
//	int* pb[10] = &arr;//pb是一个存放指针的数组<指针数组>
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p1 = arr;//数组首元素地址
//	int(*p2)[10] = &arr;//数组的地址
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);//整形指针+1跳过一个整形
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);//数组指针+1跳过一个数组
//
//	//&数组名
//	//sizeof(数组名)
//	//除上面两种情况之外 - 所有遇到的数组名都是数组首元素的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", (*p)[i]);
//		printf("%d ", *((*p)+i));
//	}
//	return 0;
//}

//数组指针常用于二维数组

void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//          二维接收降为一维  
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		//*(p+i) -> p直接加上i，加的是一整行，再解引用得出的是整行首元素地址（相当于这一行数组名）；
		//*(p+i)+j -> 整行首元素地址再加上j，得出的是第i行第j个元素的地址；
		//*(*(p + i) + j) -> 第i行第j个元素的地址再次解引用，得出的是该元素的值；
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}

		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

	//print1(arr, 3, 5);
	//二维数组传参，数组名也是首元素地址，二维数组首元素是‘第一行’，传过去的是第一行整行地址；用数组指针接收
	print2(arr,3,5);

	return 0;
}


// int (*pa[10])[5] - 存 放 数组指针 的 数组