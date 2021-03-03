#include<stdio.h>

//int main()
//{
//	printf("Hello world\n");
//	return 0;
//}

//register:建议把自己创建的变量放入寄存器

//int main()
//{
//	register int a = 10;
//	//&a;   err寄存器变量无法取地址
//	return 0;
//}

//define :定义常量和宏

//#define MAX 100
//#define STR "HELLO WORLD"
//#define CH "W"
//
//
//int main()
//{
//	int m = MAX;
//	printf("%d\n", m);
//	printf("%s\n", STR);
//	return 0;
//}

#define ADD(X,Y)(X+Y)


int main()
{
	int a = 10;
	int b = 20;
	int ret = ADD(a,b);
	printf("%d\n", ret);
	return 0;
}

