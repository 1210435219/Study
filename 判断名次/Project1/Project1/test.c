#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//B��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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
		if ((((a[1] == 2) + (a[0] == 3)) == 1) &&//Aѡ��˵��B�ڶ����ҵ�����
			(((a[1] == 2) + (a[4] == 4)) == 1) &&//B��˵���ҵڶ���E����
			(((a[2] == 1) + (a[3] == 2)) == 1) &&//Cѡ��˵���ҵ�һ��D�ڶ���
			(((a[2] == 5) + (a[3] == 3)) == 1) &&//Dѡ��˵��C����ҵ�����
			(((a[4] == 4) + (a[0] == 1)) == 1))//Eѡ��˵���ҵ��ģ�A��һ��
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%c�ǵ�%d��\n", 'A' + i, a[i]);
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

