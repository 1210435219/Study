#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int Jud_str(const char* str1, const char* str2)
{
	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, str2); //�ȿ���һ��
	strcat(tmp, str2); //������һ��
	return strstr(tmp, str1) != NULL; //�����Ҳ��ҵõ�
}

int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";//��arr1��ת����
	int ret = 0;
	if (strlen(arr1) == strlen(arr2))
	{
		 ret = Jud_str(arr1,arr2);
	}
	if (ret == 0)
	{
		printf("����\n");
	}
	else
	{
		printf("��\n");
	}
	return 0;
}