#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int soda_count(int bottle)
{
	int count =bottle/2 ;
	if (bottle >= 2&&(bottle%2)==0)
		return count + soda_count(bottle/2);
	else if(bottle >= 2 && (bottle %2)!= 0)
		return count + soda_count((bottle / 2)+1);
	else
		return 0;

}

int main()
{
	int money = 0;
	scanf("%d", &money);
	int ret = money;
	ret += soda_count(money);
	printf("%d", ret);
	return 0;
}


/*
思路：
1. 20元首先可以喝20瓶，此时手中有20个空瓶子
2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
3. 如果瓶子个数超过1个，可以继续换，即重复2
*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}