#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)//����ָ����Ч��
//		*p = 20;
//	return 0;
//}

//����ָ��

int main()
{
	int a = 10;
	int* p = &a;//p��һ��ָ��
	int* *pp = &p;//pp�Ƕ���ָ�룬���巽ʽΪint** pp   ���p�ĵ�ַ
	int** *ppp = &pp;//����ָ��
	**pp = 20;
	printf("%d\n", a);
	return 0;
}