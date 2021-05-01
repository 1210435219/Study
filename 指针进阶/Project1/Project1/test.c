#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	char* p = "abcdef";//首字符地址,这里的“abcdef”是一个常量字符串，只提供内容但不能更改。ps：字符数组内容可修改
//	return 0;
//}


int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";

    
    //两个字符串比较用strcmp(str1,str2)，此处 == 比较的是str1与str2数组名本身。
    if (str1 == str2)//1. 数组名表示首元素地址，不同数组空间不同，首元素地址不同。
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)//2. (常量字符串，无法被修改)在内存中存一份即可，
                     //str3 与 str4 各自存放地址指向同一地址，各自存放地址相同。
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");
    return 0;
}