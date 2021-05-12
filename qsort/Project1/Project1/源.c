#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//库函数 - qsort

//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}

print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test1()
{
	int arr[] = { 49,5,94,56,12,3,45,0,18,35,98,48,51,34,19,95,54,66 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr,sz);
}


struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//qsort - 排序结构体
	struct Stu arr[] = { { "b年谷小猪",20 }, { "c小白兔",22 }, { "a小猫",21 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//按照年龄排	
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//按照名字排序
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	test2();
	return 0;
}