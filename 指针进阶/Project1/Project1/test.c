#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	char* p = "abcdef";//���ַ���ַ,����ġ�abcdef����һ�������ַ�����ֻ�ṩ���ݵ����ܸ��ġ�ps���ַ��������ݿ��޸�
//	return 0;
//}


int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";

    
    //�����ַ����Ƚ���strcmp(str1,str2)���˴� == �Ƚϵ���str1��str2����������
    if (str1 == str2)//1. ��������ʾ��Ԫ�ص�ַ����ͬ����ռ䲻ͬ����Ԫ�ص�ַ��ͬ��
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)//2. (�����ַ������޷����޸�)���ڴ��д�һ�ݼ��ɣ�
                     //str3 �� str4 ���Դ�ŵ�ַָ��ͬһ��ַ�����Դ�ŵ�ַ��ͬ��
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");
    return 0;
}