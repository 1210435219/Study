#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d , %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];//p为数组指针，指向一个四个元素的数组；当p+1时，跳过整个数组即四个元素
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

#include <stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	//指针数组，内部存放的是char*类型指针，分别指向每个字符串首字母
	char** pa = a;
	//二级指针操作指针数组
	pa++;
	printf("%s\n", *pa);//只解引用一次拿出a[1]地址，从此地址开始打印字符串
	return 0;
}