#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ���ڴ���� - �ṹ���ڼ����С��ʱ�򣬻ᷢ������

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////offsetof - ������ǽṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
#include<stddef.h>
//
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", offsetof(struct S1, c1));//0
//	printf("%d\n", offsetof(struct S1, i));//4
//	printf("%d\n", offsetof(struct S1, c2));//8
//	printf("%d\n", sizeof(s1));//��СΪ12��
//	return 0;
//}

//�������
//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������
//��������������Ƕ�׽ṹ��Ķ�����������������

//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

struct S3
{
	double d;
	char c;
	int i;
};


struct S4
{
	char c1;
	struct S3 s3;
	double d;
};


int main()
{
	struct S4 s1;
	printf("%d\n",sizeof(struct S4));
	return 0;
}