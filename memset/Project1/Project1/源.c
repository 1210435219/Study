#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>



int main()
{
	char arr1[] = { 1,2,3,4,5 ,'\0'};
	memset(arr1,'*',5);//���ֽ�Ϊ��λ���޷�ֱ������int��
	printf("%s\n", arr1);
	return 0;
}