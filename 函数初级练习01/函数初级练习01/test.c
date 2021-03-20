#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int num_of_days(int y,int m)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		if ((m == 1) || (3 == m) || (5 == m) || (7 == m) || (8 == m) || (10 == m) || (12 == m))
//			return 31;
//		else if (m == 2)
//			return 29;
//		else
//			return 30;
//	}
//	else
//	{
//		if ((m == 1) || (3 == m) || (5 == m) || (7 == m) || (8 == m) || (10 == m) || (12 == m))
//			return 31;
//		else if (m == 2)
//			return 28;
//		else
//			return 30;
//	}
//}
//
//int main()
//{
//	int ret;
//	int year;
//	int month;
//	int day;
//	printf("ÇëÊäÈëÄê ÔÂ:>");
//	while (scanf("%d %d", &year, &month) != EOF)
//	{	
//	ret = num_of_days(year, month);
//	printf("%d\n", ret);
//	}
//	return 0;
//}
// 
// 
// 
// 
//int main()
//{
//	int arr[] = {0};
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//	{
//		int i;
//		int max_p = 0;
//		int min_p = 0;
//		int min = arr[0];
//		int max = arr[0];
//		int ret = 0;
//		for (i = 0; i <= 6; i++)
//		{
//			if (arr[i] >= max) 
//			{
//				max_p = i;
//				max = arr[i];
//			}
//		}
//
//		for (i = 0; i <= 6; i++)
//		{
//			if (arr[i] < min)
//			{
//				min_p = i;
//				min = arr[i];
//			}
//		}
//
//		arr[max_p] = 0;
//		arr[min_p] = 0;
//		for (i = 0; i <= 6; i++)
//		{
//			ret += arr[i];
//		}
//		printf("%.2f", (double)ret/5.0);
//	}
//	return 0;
//}




//
//int main()
//{
//
//	int arr[7] = { 0 };
//	int i;
//	int max_p = 0;
//	int min_p = 0;
//	int min = arr[0];
//	int max = arr[0];
//	int ret = 0;
//	for (i = 0; i <=6; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i <= 6; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max_p = i;
//			max = arr[i];
//		}
//	}
//
//	for (i = 0; i <= 6; i++)
//	{
//		if (arr[i] < min)
//		{
//			min_p = i;
//			min = arr[i];
//		}
//	}
//
//	arr[max_p] = 0;
//	arr[min_p] = 0;
//	for (i = 0; i <= 6; i++)
//	{
//		ret += arr[i];
//	}
//	printf("%.2f", (double)ret / 5.0);
//	return 0;
//}

//int main()
//{
//	char arr[6] = "asd";
//	int arr1[6] = { 1,2,3 };
//	return 0;
//}


int prime_number(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
		else
			return 1;
	}
	
}

int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		int ret = prime_number(i);
		if (ret == 1)
			printf(" %d ,", i);
	}
	return 0;
}