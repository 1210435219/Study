#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void Lef_rot_str(char* str, int k)
{
	int len = strlen(str);
	char tmp[500] = { 0 };
	strcpy(tmp,str);
	strcat(tmp, str);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		*(str + i) = *(tmp + k + i);
	}
}

int main()
{
	int k = 2;
	char ch[] = "ABBCDE";
	Lef_rot_str(ch, k);
	printf("%s\n", &ch);
	return 0;
}