#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//__cdecl 是一种函数调用约定
//函数的传参顺序
//函数的栈帧的创建方式

//KMP算法 更加高效的查找字字符串的算法 了解一下

char* my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);

	const char* cp = s1;

	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = s2;
		while ((*p1) && (*p1 == *p2) && (*p2 ))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char*)cp;
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcdgi";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置，若未找到返回空指针
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到字符串！");


	return 0;
}