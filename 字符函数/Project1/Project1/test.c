#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//×Ö·û´®¿½±´strcpy
int main()
{
	char arr1[20] = "wwwwwwwwwwwww";
	char arr2[] = "HELLO";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}