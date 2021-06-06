#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

//strerror - 错误报告函数
//char* strerror(int errnum);

int main()
{
	printf("hehe\n");
	printf("%s\n", strerror(errno));//把错误码转换为对应的错误信息,并返回错误信息起始地址，errno是全局变量保存错误码，需引用头文件
	perror("hehe");//可以在前面加自定义信息，但是必须直接打印
	return 0;
}
