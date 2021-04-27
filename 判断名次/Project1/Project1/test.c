#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

void swap(int* a, int* b)
{
	int tem = (*a);
	(*a) = (*b);
	(*b) = tem;
}

void diveRank(int* a, int layer)
{
	if (layer >= 5)
	{
		if ((((a[1] == 2) + (a[0] == 3)) == 1) &&//A选手说：B第二，我第三；
			(((a[1] == 2) + (a[4] == 4)) == 1) &&//B手说：我第二，E第四
			(((a[2] == 1) + (a[3] == 2)) == 1) &&//C选手说：我第一，D第二；
			(((a[2] == 5) + (a[3] == 3)) == 1) &&//D选手说：C最后，我第三；
			(((a[4] == 4) + (a[0] == 1)) == 1))//E选手说：我第四，A第一；
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%c是第%d名\n", 'A' + i, a[i]);
				//printf("%d ", a[i]);
			}
			putchar('\n');
		}
		return;
	}

	int i;
	for (i = layer; i < 5; i++)
	{
		swap(a + i, a + layer);
		diveRank(a, layer + 1);
		swap(a + i, a + layer);
	}
}

int main()
{
	int ath[5] = { 1,2,3,4,5 };
	diveRank(ath, 0);
	return 0;
}

