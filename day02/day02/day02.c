#include<stdio.h>

//int main()
//{
//	printf("Hello world\n");
//	return 0;
//}

//register:������Լ������ı�������Ĵ���

//int main()
//{
//	register int a = 10;
//	//&a;   err�Ĵ��������޷�ȡ��ַ
//	return 0;
//}

//define :���峣���ͺ�

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

