#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//                    要分割的字符串     分割符
//char * strtok(char* str, const char* sep);

int main()
{
	char arr[] = "1210435219@qq.com";//@和.分割符
	char* p = "@.";//分割符的集合字符串

	//printf("%s\n",strtok(arr,p));//第一次调用将@改为'\0'返回第一个字符1的地址，第二次使用并传空指针将.改为\0返回q的地址，第三次返回c的地址
	//printf("%s\n", strtok(NULL, p));//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
													//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
													//如果字符串中不存在更多的标记，则返回 NULL 指针。
	//printf("%s\n", strtok(NULL, p));
	
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//strrok 会操作字符串，一般使用临时拷贝字符串
	return 0;
}