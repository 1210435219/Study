#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main()
{
	//int ret = strcmp("abc", "abcd");//arr1<arr2 ret = -1
	//字符串比较函数：字符串的比较的不是长度,而是对应字符的ASCII值的比较
	//返回值：str1<str2,返回小于零的int值，等于返回等于大于返回大于
	int ret = my_strcmp("abcq", "abcdef");

	printf("%d", ret);
	return 0;
}

//strcpy
//strcat
//strcmp
//字符串操作长度 ------ 长度不受限制的字符串长度