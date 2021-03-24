#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n = 0;
//int main()
//{
//	printf("?\n");
//	main();
//	return 0;
//}
//栈溢出


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str +1);
//	else
//		return 0;
//}
//
//int main()
//{
//	
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//计算量过大！！
//int count = 0;
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		count++;
//		printf("%d\n", count+1);
//		return fib(n - 1) + fib(n - 2);
//}

//迭代----循环
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i;
	for (i = n; i > 2; i--)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", & n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}