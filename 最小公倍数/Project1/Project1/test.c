#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
    int a = 0;
    int b = 0;
    int i = 2;
    scanf("%d%d", &a, &b);
    int m = b;
    if (a > b) 
        m = a;
    int num = m;
    while (m % a != 0 || m % b != 0)
    {
        m = num*i;
        i++;
    }
    printf("%d", m);
    return 0;
}