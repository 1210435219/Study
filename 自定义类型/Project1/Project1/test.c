#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	int price;
//}b2;

//typedef struct book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	int price;
//}book;
////book ��ǰ���b2��ͬ
////���涨��ʱ��ʡ��struct
//
//typedef struct Node//��������
//{
//	int data;//������
//	struct Node* next;//ָ����
//}Node;

struct S
{
	int a;
	int b;
	double d;
};

struct B//�ṹ����Ƕ�׽ṹ��
{
	char c;
	struct S s;
	short ss;
};

int main()
{
	//struct book b1 = { "c���Գ������","̷��ǿ",55 };
	//book b1 = { "c���Գ������","̷��ǿ",55 };
	//printf("%s %s %d", b1.name, b1.author, b1.price);

	struct B b = { 'a',{100,200,2.3},5 };//�ں�  �ṹ��  �Ľṹ��   �ĳ�ʼ��
	printf("%lf\n", b.s.d);//���ʽṹ���ڵ�  �ṹ���  ��Ա
	return 0;
}
