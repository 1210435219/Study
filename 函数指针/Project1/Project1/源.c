#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void (*signal(int, void(*)(int))) (int);
//signal����������һ��int��һ������ָ��
//signal����������һ������ָ��

//�Ż�
typedef void(*pfun)(int);
pfun signal(int, pfun);

//����ָ������
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
	//����ָ������
	int (*pfarr[2])(int, int) = { Add,Sub };
	return 0;
}