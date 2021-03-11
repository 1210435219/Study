#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//&:取地址操作符
//	//%p:按照地址格式打印；
//	int* pa = &a;//pa是专门用来存放地址的，把pa叫做指针变量，定义方式为——int* 
//	//*说明pa是指针变量 int说明pa 指向 的是整形变量
//	char c = 'w';
//	char* pc = &c;
//	*pa = 20;//*pa解引用操作，*pa=a
//	printf("%d\n", a);
//	return 0;
//}
//
//struct stu
//{
//	//描述学生时的属性
//	char name[20];//名字-字符串-字符数组
//	short age;//年龄-int
//	char sex[8];//性别-字符串
//};
//
//int main()
//{
//	//结构体的创建和初始化
//	struct stu s1 = {"吴刚",20,"男"};//对象-吴刚
//	struct stu s2 = { "张梦龙",26,"男" };//对象-张梦龙
//	struct stu* ps = &s1;
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);//1‘.’结构成员访问操作符 结构体变量. 结构体成员
//	printf("%s %d %s",ps->name,ps->age ,ps->sex);//2‘->’结构成员访问操作符 结构体变量-> 结构体成员
//	//ps->name 通过ps找到所指向对象的 成员 name
//	return 0;
//}

//struct book
//{
//	char name[20];
//	double price;
//	char id[20];
//};

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 140)
			printf("Genius\n");
	}

	return 0;
}