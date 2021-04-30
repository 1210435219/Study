#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//整形数组--存放整形的数组
//字符数组--存放字符的数组
//指针数组
//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[10] = { 'b','a' };
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//int* arr[3] = { &a,&b,&c };//存放整形指针的数组
//	//char* ch[5];//存放字符指针的数组
//	
//	//用法
//
//	//char* p = "abcdef";
//	char* arr[] = { "abcdef","aaaaaa","ssssss" };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	/*printf("%s\n", p);*/
//	return 0;
//}


//结构体



//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char call[12];
//	char sex[5];
//
//}s1 ,s2;
////s1 s2是全局变量
//
//struct stu s3;//s3是全局变量
//
//int main()
//{
//	struct stu s1;
//	struct stu s2;
//	//s1 s2是局部变量
//	return 0;
//}

//结构体传参尽量传地址

int main()
{
	int* arr[10];
	char** ch[10];//二级指针数组
	return 0;
}
