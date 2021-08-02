#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
// malloc 函数

//堆区：动态内存分配（malloc   free  realloc  calloc）
//栈区：（局部变量   函数形参）
//静态区：（全局变量  静态变量）


//动态内存的回收：
//1.程序结束自动回收
//2.手动回收（free函数）(一般情况下都要手动释放空间)

//malloc开辟空间不初始化,参数只有一个，开辟的大小
//calloc开辟的空间是初始化为0的，两个参数，第一个是开辟多少单位个，第二个是每个单位的大小


//可能出现的错误：
//1.对空指针的解引用
//2.对动态内存的越界访问
//3.对非动态开辟的内存使用free释放
//4.使用free释放动态内存的一部分（起始位置指针被修改）
//5.对同一块动态开辟空间多次释放
//6.忘记释放开辟的动态空间（内存泄漏问题，被开辟的内存无法使用，一直开辟不释放会导致内存不足）




//malloc free
//int main()
//{
//	int arr[10] = { 0 };//在栈区上申请40个字节的空间
//
//
//	//动态内存开辟
//	//整形指针      强制转换为整形指针类型    
//	     int* p      =     (int*)malloc(40);//希望把40个字节当成一个十个整形的数组（在堆区上开辟）
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		//开辟成功
//		int i = 0;
//		//存入
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//读取
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	    //手动释放动态内存
//		free(p);
//		//让p不再指向那块空间
//		p = NULL;
//	}
//
//	return 0;
//}





//calloc
//int main()
//{
//
//	//                           开辟数量(10)   每个单位大小（4字节）
//	int*p = (int*)calloc(10                   , sizeof(int));//开辟空间
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//使用空间
//		{
//			printf("%d ", p[i]);
//		}
//		free(p);//释放空间
//		p = NULL;
//	}
//	return 0;
//}



//realloc:调整空间大小(若增加空间，且后续空间不足，则重新找足够大的地址拷贝之前数据，并返回新空间地址，若后续空间足够，则返回原地址)
//所以realloc函数一定要接收返回地址
int main()
{
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		//增加空间
		//最好先用新指针接收，以防调整失败
		int* ptr = (int*)realloc(p, 80);//调整空间大小
		if (ptr != NULL)
		{
			p = ptr;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d-", p[i]);
		}

		free(p);
		p = NULL;
	}
	return 0;
}