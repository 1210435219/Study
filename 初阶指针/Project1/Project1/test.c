#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int i;//全局变量默认为0
int main()
{
    i--;
    if (i > sizeof(i))//i为有符合整形，sizeof（i）为无符号整形，相互运算时i被转换为无符号整形（一个很大的正整数）
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}