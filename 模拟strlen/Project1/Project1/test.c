#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

unsigned int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while ((*str++)!='\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char ch[] = "qwertyuiop";
	int ret = my_strlen(ch);
	//int ret = strlen(ch);
	printf("%d", ret);
	return 0;
}