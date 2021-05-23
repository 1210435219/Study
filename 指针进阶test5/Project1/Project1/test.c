#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	//++是运算，可以改变变量值，a++ == ( a = a + 1 )
	printf("%s\n", **++cpp);//point
	printf("%s\n", *-- * ++cpp + 3);//er
	printf("%s\n", *cpp[-2] + 3);//st
	printf("%s\n", cpp[-1][-1] + 1);//ew
	return 0;
}
