#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void (*signal(int, void(*)(int))) (int);
//signal函数参数是一个int和一个函数指针
//signal返回类型是一个函数指针

//优化
typedef void(*pfun)(int);
pfun signal(int, pfun);

//函数指针数组
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	//函数指针数组
	int (*pfarr[2])(int, int) = { Add,Sub };
	return 0;
}