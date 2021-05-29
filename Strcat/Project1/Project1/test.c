#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.目标空间‘\0’
	//2.追加
	while (*dest)
	{
		dest++;
	}
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";//空间足够大，且空间可修改
	char arr2[] = "world!";

	//strcat(arr1, arr2);//arr2追加到arr1后面
	//strcat(arr1,arr1);//err,自己追加自己的拷贝过程中'\0'被覆盖，无终止条件
	my_strcat(arr1, arr2);
	printf("%s\n", &arr1);
	return 0;
}