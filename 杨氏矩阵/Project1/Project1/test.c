#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5][5] = { {1  ,  5,  9,56,57}
						  ,{2  , 6 ,10,60,61}
						  ,{50,51,62,63,64}
						  ,{70,71,72,73,74}
						  ,{80,81,82,83,84} };
	int k = 50;
	int i = 0;
	int j = 4;

	//��Ӧ���Ͼ���ֻ�����Ϻ����µ�����δȷ����
	//�����Ͽ�ʼ�����±�������

	while (i < 5 && j >= 0)
	{
		if (arr[i][j] < k)
		{
			i++;
		}
		else if (arr[i][j] > k)
		{
			j--;
		}
		else
		{
			printf("�ҵ��ˣ��±���[%d][%d]", i, j);
			break;
		}
	}

	if (arr[i][j]!= k)
		printf("δ�ҵ�");
	return 0;
}