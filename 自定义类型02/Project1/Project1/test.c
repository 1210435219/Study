#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体内存对齐 - 结构体在计算大小的时候，会发生对齐

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量
#include<stddef.h>
//
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", offsetof(struct S1, c1));//0
//	printf("%d\n", offsetof(struct S1, i));//4
//	printf("%d\n", offsetof(struct S1, c2));//8
//	printf("%d\n", sizeof(s1));//大小为12，
//	return 0;
//}

//对齐规则：
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
//有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

struct S3
{
	double d;
	char c;
	int i;
};


struct S4
{
	char c1;
	struct S3 s3;
	double d;
};


int main()
{
	struct S4 s1;
	printf("%d\n",sizeof(struct S4));
	return 0;
}