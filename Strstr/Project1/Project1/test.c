#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//__cdecl ��һ�ֺ�������Լ��
//�����Ĵ���˳��
//������ջ֡�Ĵ�����ʽ

//KMP�㷨 ���Ӹ�Ч�Ĳ������ַ������㷨 �˽�һ��

char* my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);

	const char* cp = s1;

	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = s2;
		while ((*p1) && (*p1 == *p2) && (*p2 ))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char*)cp;
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcdgi";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);//��arr1�в���arr2�ַ�����һ�γ��ֵ�λ�ã���δ�ҵ����ؿ�ָ��
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("�Ҳ����ַ�����");


	return 0;
}