#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Reverse(char* ps)
{
	char* left = ps;
	char* right = ps + strlen(ps) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left += 1;
		right -= 1;
	}
}

int main()
{
	//char str[100]="abc 123";
	char str[100];
	gets(str);
	Reverse(str);
	printf("%s\n", &str);

	return 0;
}


//带空格输入字符串
//1.用 gets() ，它可以接收带空格的字符串， 直到回车才结束输入
//
//char buf[80] = { 0 };
//gets(buf);   //可以读取空格， 回车结束输入
//
//2.使用"%[^\n]" 也是可以接收输入一个带空格的字符串，直到回车结束接收
//
//char buf[10] = { 0 };
//
//scanf("%[^\n]", buf); //可以读取空格，回车结束输入