#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//                    Ҫ�ָ���ַ���     �ָ��
//char * strtok(char* str, const char* sep);

int main()
{
	char arr[] = "1210435219@qq.com";//@��.�ָ��
	char* p = "@.";//�ָ���ļ����ַ���

	//printf("%s\n",strtok(arr,p));//��һ�ε��ý�@��Ϊ'\0'���ص�һ���ַ�1�ĵ�ַ���ڶ���ʹ�ò�����ָ�뽫.��Ϊ\0����q�ĵ�ַ�������η���c�ĵ�ַ
	//printf("%s\n", strtok(NULL, p));//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
													//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
													//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
	//printf("%s\n", strtok(NULL, p));
	
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//strrok ������ַ�����һ��ʹ����ʱ�����ַ���
	return 0;
}