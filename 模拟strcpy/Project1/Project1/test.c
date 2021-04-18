#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.0
//void my_strcpy(char* dest, char* src)
//{
//	while ((*src)!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// 
// 
//2.0
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//	}
//}

//3.0

//assert - 断言-括号中表达式为真，无事发生； 括号中表达式为假，报错；
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*(dest++) = *(src++))
//	{
//		;
//	}
//	return ret;
//}
// 
// 
//4.0
char* my_strcpy(char* dest, const char* src)//while (*(src++)=*(dest++))发生这种问题时无法通过编译
//const修饰指针（放在*左边）时，修饰的是指针指向的变量，不能通过指针改变；但是指针变量本身是可以修改的
//const修饰指针（放在*右边）时，修饰的是指针本身，不能改变；但是指针指向的内容是可以修改的
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*(dest++) = *(src++))//拷贝
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "XXXXXXXXXXXXXXX";
	char arr2[] = "error：程序错误!";
	char* p2 = arr2;
	//char* p2 = NULL;
	//my_strcpy(arr1, p2);
	//strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1, p2));
	return 0;
}