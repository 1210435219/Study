#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));//16 - 数组名单独放在sizeof（）内部，数组名表示整个数组，计算的是整个数组大小，单位是字节
	printf("%d\n", sizeof(a + 0));//4 - 数组地址+0则是数组地址，地址大小32位为4,64位为8
	printf("%d\n", sizeof(*a));//4 - 首元素地址解引用 = a【0】
	printf("%d\n", sizeof(a + 1));//4 - 第二个元素地址4/8个字节
	printf("%d\n", sizeof(a[1]));//4 - 首元素大小
	printf("%d\n", sizeof(&a));//&数组地址依然是数组 地址 ，地址大小为4/8个字节
	printf("%d\n", sizeof(*&a));//16 - &数组名取出的是整个数组地址，解引用后访问整个数组，数组大小为16
	printf("%d\n", sizeof(&a + 1));//&a+1是一个地址，指向数组后的空间，地址大小为4/8字节
	printf("%d\n", sizeof(&a[0]));//依然是地址大小
	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址大小


	printf("-------------------------------------------------\n");

	printf("-----------------------------------------------\n");


	//字符数组
	char arr[] = { 'a','b','c','d','e','g' };

	printf("%d\n", sizeof(arr));//6 - 六个字节
	printf("%d\n", sizeof(arr + 0));//4 - arr+0表示地址，地址大小4/8
	printf("%d\n", sizeof(*arr));//1 - 首元素地址解引用即首元素大小，1个字节
	printf("%d\n", sizeof(arr[1]));//同上
	printf("%d\n", sizeof(&arr));//地址4/8
	printf("%d\n", sizeof(&arr + 1));//地址4/8
	printf("%d\n", sizeof(&arr[0] + 1));//地址4/8

	printf("%d\n", strlen(arr));//随机值，arr数组中无'\0'无法终止，随机终止计数
	printf("%d\n", strlen(arr + 0));//随机值，从首元素向后数找'\0'
	//printf("%d\n", strlen(*arr)); //stelen()参数为地址，此处传参传的是首元素地址解引用，即首元素a，
								    //值为97，函数会从地址97处开始计数，引发访问冲突，报错err
	//printf("%d\n", strlen(arr[1]));//参数为第二个元素，err，原因同上
	printf("%d\n", strlen(&arr));//随机值，数组地址从数组开头向后找'\0'
	printf("%d\n", strlen(&arr + 1));//整个数组地址+1开始找/0，随机值，且值为前面 随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//从第二个元素计数，随机值且为 前随机值-1

	return 0;
}