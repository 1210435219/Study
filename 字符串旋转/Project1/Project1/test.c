#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int Jud_str(const char* str1, const char* str2)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, str2); //先拷贝一遍
	strcat(tmp, str2); //再连接一遍
	return strstr(tmp, str1) != NULL; //看看找不找得到
}

int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";//由arr1旋转而来
	int ret = 0;
	if (strlen(arr1) == strlen(arr2))
	{
		 ret = Jud_str(arr1,arr2);
	}
	if (ret == 0)
	{
		printf("不是\n");
	}
	else
	{
		printf("是\n");
	}
	return 0;
}