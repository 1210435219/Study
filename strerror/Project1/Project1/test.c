#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

//strerror - ���󱨸溯��
//char* strerror(int errnum);

int main()
{
	printf("hehe\n");
	printf("%s\n", strerror(errno));//�Ѵ�����ת��Ϊ��Ӧ�Ĵ�����Ϣ,�����ش�����Ϣ��ʼ��ַ��errno��ȫ�ֱ�����������룬������ͷ�ļ�
	perror("hehe");//������ǰ����Զ�����Ϣ�����Ǳ���ֱ�Ӵ�ӡ
	return 0;
}
