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
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
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
//	����2
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