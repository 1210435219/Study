#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	int price;
//}b2;

//typedef struct book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	int price;
//}book;
////book 与前面的b2不同
////后面定义时可省略struct
//
//typedef struct Node//不可匿名
//{
//	int data;//数据域
//	struct Node* next;//指针域
//}Node;

struct S
{
	int a;
	int b;
	double d;
};

struct B//结构体内嵌套结构体
{
	char c;
	struct S s;
	short ss;
};

int main()
{
	//struct book b1 = { "c语言程序设计","谭浩强",55 };
	//book b1 = { "c语言程序设计","谭浩强",55 };
	//printf("%s %s %d", b1.name, b1.author, b1.price);

	struct B b = { 'a',{100,200,2.3},5 };//内含  结构体  的结构体   的初始化
	printf("%lf\n", b.s.d);//访问结构体内的  结构体的  成员
	return 0;
}
