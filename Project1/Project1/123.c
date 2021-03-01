#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//
//	return 0;
//}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("Q请输入两个数：>");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}