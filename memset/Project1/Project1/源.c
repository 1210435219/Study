#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>



int main()
{
	char arr1[] = { 1,2,3,4,5 ,'\0'};
	memset(arr1,'*',5);//以字节为单位，无法直接设置int型
	printf("%s\n", arr1);
	return 0;
}