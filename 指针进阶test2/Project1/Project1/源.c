#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//sizeof() ������ �����������ռ�ռ��С
//���ͣ�����������
//�����Сʱ���ں��ڴ��ŵ�ֵ

//strlen() ���ַ��������ȣ�ֻ�������ַ������ַ�����
//�⺯��
//�󳤶�ʱ��ע'\0'

int main()
{
	char arr[] = "abcdef";// - a,b,c,d,e,f,\0 7Ԫ��

	printf("%d\n", sizeof(arr));// 7 - �����ܴ�С����'\0'
	printf("%d\n", sizeof(arr + 0));//δ����ʹ��Ҳδȡ��ַ&����ʾ��Ԫ�ص�ַ+0����ַ��С4/8
	printf("%d\n", sizeof(*arr));//1 arr������δ����ʹ��δ&����������ʾ��Ԫ�ص�ַ�������ñ�ʾ��Ԫ�ش�СΪ 1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//��ַ4/8
	printf("%d\n", sizeof(&arr + 1));//��ַ
	printf("%d\n", sizeof(&arr[0] + 1));//��ַ

	printf("%d\n", strlen(arr));// 6 ��������Ԫ�ؿ�ʼ��������'\0'ֹͣ
	printf("%d\n", strlen(arr + 0));//6 ͬ��
	//printf("%d\n", strlen(*arr));//err *arr = a��
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));// 6 ��Ԫ�ص�ַ
	printf("%d\n", strlen(&arr + 1));//���ֵ �����ַ+1�������ռ俪ʼ������'\0'
	printf("%d\n", strlen(&arr[0] + 1));// 5 �ڶ���Ԫ�ؿ�ʼ����
	printf("--------------------------------------------------\n");

	char* p = "abcdef";

	printf("%d\n", sizeof(p));// ��ַ��С4/8
	printf("%d\n", sizeof(p + 1));//�ڶ�Ԫ�ص�ַ
	printf("%d\n", sizeof(*p));// 1 - p���ַ�ָ�룬*p����һ���ֽ�
	printf("%d\n", sizeof(p[0]));//1 - p��0�� == *��p+0�� == *p
	printf("%d\n", sizeof(&p));//��ַ4/8
	printf("%d\n", sizeof(&p + 1));//��ַ
	printf("%d\n", sizeof(&p[0] + 1));//��ַ

	printf("%d\n", strlen(p));//6 - p����Ԫ�ص�ַ����'\0'������Ԫ��
	printf("%d\n", strlen(p + 1));//5 
	//printf("%d\n", strlen(*p));//*p���ַ����ǵ�ַ��err
	//printf("%d\n", strlen(p[0]));//err��ͬ��
	printf("%d\n", strlen(&p));//���ֵ - p�ĵ�ַ�����
	printf("%d\n", strlen(&p + 1));//���ֵ����ǰ���ֵ�޹أ� - p+1��ַ�����
	printf("%d\n", strlen(&p[0] + 1));//5 - &p[0] == p ==��Ԫ�ص�ַ��+1�����


	return 0;
}