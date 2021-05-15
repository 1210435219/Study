#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//sizeof() 操作符 计算操作数所占空间大小
//类型，变量，数组
//计算大小时不在乎内存存放的值

//strlen() 求【字符串】长度，只适用于字符串或字符数组
//库函数
//求长度时关注'\0'

int main()
{
	char arr[] = "abcdef";// - a,b,c,d,e,f,\0 7元素

	printf("%d\n", sizeof(arr));// 7 - 数组总大小包含'\0'
	printf("%d\n", sizeof(arr + 0));//未单独使用也未取地址&，表示首元素地址+0，地址大小4/8
	printf("%d\n", sizeof(*arr));//1 arr数组名未单独使用未&数组名，表示首元素地址，解引用表示首元素大小为 1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//地址4/8
	printf("%d\n", sizeof(&arr + 1));//地址
	printf("%d\n", sizeof(&arr[0] + 1));//地址

	printf("%d\n", strlen(arr));// 6 从数组首元素开始计数遇到'\0'停止
	printf("%d\n", strlen(arr + 0));//6 同上
	//printf("%d\n", strlen(*arr));//err *arr = a，
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));// 6 首元素地址
	printf("%d\n", strlen(&arr + 1));//随机值 数组地址+1从数组后空间开始计数找'\0'
	printf("%d\n", strlen(&arr[0] + 1));// 5 第二个元素开始计数
	printf("--------------------------------------------------\n");

	char* p = "abcdef";

	printf("%d\n", sizeof(p));// 地址大小4/8
	printf("%d\n", sizeof(p + 1));//第二元素地址
	printf("%d\n", sizeof(*p));// 1 - p是字符指针，*p访问一个字节
	printf("%d\n", sizeof(p[0]));//1 - p【0】 == *（p+0） == *p
	printf("%d\n", sizeof(&p));//地址4/8
	printf("%d\n", sizeof(&p + 1));//地址
	printf("%d\n", sizeof(&p[0] + 1));//地址

	printf("%d\n", strlen(p));//6 - p是首元素地址，到'\0'有六个元素
	printf("%d\n", strlen(p + 1));//5 
	//printf("%d\n", strlen(*p));//*p是字符不是地址，err
	//printf("%d\n", strlen(p[0]));//err，同上
	printf("%d\n", strlen(&p));//随机值 - p的地址向后数
	printf("%d\n", strlen(&p + 1));//随机值（与前随机值无关） - p+1地址向后数
	printf("%d\n", strlen(&p[0] + 1));//5 - &p[0] == p ==首元素地址，+1向后数


	return 0;
}