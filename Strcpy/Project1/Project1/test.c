#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//字符串拷贝strcpy模拟

char* my_strcpy(char*dest,const char*src)
{
	assert(src&&dest);
	char* ret = dest;
	while (*dest++ = *src++)//copy字符串包括 '\0'
	{
		;
	}
	return ret;//返回目标空间起始地址
}

int main()
{
	char arr1[20] = "wwwwwwwwwwwww";
	char arr2[] = "HELLO";

	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);
	return 0;
}