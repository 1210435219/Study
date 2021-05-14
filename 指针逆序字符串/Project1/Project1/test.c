#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Reverse(char* ps)
{
	char* left = ps;
	char* right = ps + strlen(ps) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left += 1;
		right -= 1;
	}
}

int main()
{
	//char str[100]="abc 123";
	char str[100];
	gets(str);
	Reverse(str);
	printf("%s\n", &str);

	return 0;
}


//���ո������ַ���
//1.�� gets() �������Խ��մ��ո���ַ����� ֱ���س��Ž�������
//
//char buf[80] = { 0 };
//gets(buf);   //���Զ�ȡ�ո� �س���������
//
//2.ʹ��"%[^\n]" Ҳ�ǿ��Խ�������һ�����ո���ַ�����ֱ���س���������
//
//char buf[10] = { 0 };
//
//scanf("%[^\n]", buf); //���Զ�ȡ�ո񣬻س���������