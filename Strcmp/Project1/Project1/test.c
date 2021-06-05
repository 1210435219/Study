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
	//�ַ����ȽϺ������ַ����ıȽϵĲ��ǳ���,���Ƕ�Ӧ�ַ���ASCIIֵ�ıȽ�
	//����ֵ��str1<str2,����С�����intֵ�����ڷ��ص��ڴ��ڷ��ش���
	int ret = my_strcmp("abcq", "abcdef");

	printf("%d", ret);
	return 0;
}

//strcpy
//strcat
//strcmp
//�ַ����������� ------ ���Ȳ������Ƶ��ַ�������