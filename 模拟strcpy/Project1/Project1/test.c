#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.0
//void my_strcpy(char* dest, char* src)
//{
//	while ((*src)!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// 
// 
//2.0
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//	}
//}

//3.0

//assert - ����-�����б��ʽΪ�棬���·����� �����б��ʽΪ�٣�����
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*(dest++) = *(src++))
//	{
//		;
//	}
//	return ret;
//}
// 
// 
//4.0
char* my_strcpy(char* dest, const char* src)//while (*(src++)=*(dest++))������������ʱ�޷�ͨ������
//const����ָ�루����*��ߣ�ʱ�����ε���ָ��ָ��ı���������ͨ��ָ��ı䣻����ָ����������ǿ����޸ĵ�
//const����ָ�루����*�ұߣ�ʱ�����ε���ָ�뱾�����ܸı䣻����ָ��ָ��������ǿ����޸ĵ�
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*(dest++) = *(src++))//����
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "XXXXXXXXXXXXXXX";
	char arr2[] = "error���������!";
	char* p2 = arr2;
	//char* p2 = NULL;
	//my_strcpy(arr1, p2);
	//strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1, p2));
	return 0;
}