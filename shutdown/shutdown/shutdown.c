#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char input[20] = "";
	system("shutdown -s -t 60");
	printf("��ĵ��Խ���60���ڹػ�\n���롰縮���ȡ���ػ���>");//縮�
again:
	scanf("%s", &input);
	if (strcmp(input, "縮�") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("����������������룡");
		goto again;
	}
	return 0;
}