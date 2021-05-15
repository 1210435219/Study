#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)//检验指针有效性
//		*p = 20;
//	return 0;
//}

//二级指针

int main()
{
	int a = 10;
	int* p = &a;//p是一级指针
	int* *pp = &p;//pp是二级指针，定义方式为int** pp   存放p的地址
	int** *ppp = &pp;//三级指针
	**pp = 20;
	printf("%d\n", a);
	return 0;
}