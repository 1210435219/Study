#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


       //�ݹ飡����
//void print_num(int num)
//{
//	if (num / 10 != 0)
//	{
//		printf("%d  ", num % 10);
//		return print_num(num / 10);
//	}
//	else
//		printf("%d", num);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print_num(num);
//	return 0;
//}


       //Ƕ�ף�����
//void print(int n)
//
//{
//
//    if (n > 9)
//
//    {
//
//        print(n / 10);
//
//    }
//
//    printf("%d ", n % 10);
//
//}
//
//int main()
//
//{
//
//    int num = 0;
//
//    scanf_s("%d", &num);
//
//    print(num);
//
//}


//�ݹ���׳ˣ�����
//int factorial(int n)
//{
//    if (n == 1)
//        return 1;
//    else if (n > 1)
//    {
//        return n*factorial(n - 1);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = factorial(n);
//    printf("%d", ret);
//    return 0;
//}



//ѭ����׳�
int main()
{
    int n = 0;
    int ret = 1;
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    printf("%d", ret);
    return 0;
}