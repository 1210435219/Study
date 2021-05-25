#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//×Ö·û´®¿½±´strcpy
int main()
{
	char arr1[20] = "wwwwwwwwwwwww";
	char arr2[] = "HELLO";
	strcpy(arr1, arr2);
<<<<<<< HEAD
	printf("%s \n", arr1);
=======
	printf("%s\n", arr1);
>>>>>>> 9217098f9c762b9d51b4f6279f581465e577e68d
	return 0;
}