#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int i;
//	int count = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//¹È¸è--
//1111 - n
//1110 - n-1

//1110 - n
//1101 - n-1


int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num;
	scanf("%d", &num);
	int count = count_one_bit(num);
	printf("%d\n", count);
	return 0;
}