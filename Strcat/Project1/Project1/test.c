#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.Ŀ��ռ䡮\0��
	//2.׷��
	while (*dest)
	{
		dest++;
	}
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";//�ռ��㹻���ҿռ���޸�
	char arr2[] = "world!";

	//strcat(arr1, arr2);//arr2׷�ӵ�arr1����
	//strcat(arr1,arr1);//err,�Լ�׷���Լ��Ŀ���������'\0'�����ǣ�����ֹ����
	my_strcat(arr1, arr2);
	printf("%s\n", &arr1);
	return 0;
}