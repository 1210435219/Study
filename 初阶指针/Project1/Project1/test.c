#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int i;//ȫ�ֱ���Ĭ��Ϊ0
int main()
{
    i--;
    if (i > sizeof(i))//iΪ�з������Σ�sizeof��i��Ϊ�޷������Σ��໥����ʱi��ת��Ϊ�޷������Σ�һ���ܴ����������
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}