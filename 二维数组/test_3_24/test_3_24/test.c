#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%-3d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = 6;
//		}
//	}
//for (i = 0; i < 3; i++)
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%-3d", arr[i][j]);
//	}
//	printf("\n");
//}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int* p = &arr[0][0];
//	int i;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%2d ", *(p + i));
//	}
//


	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
	//	}
	//}



//void bubble_sort(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)//ð����������
//	{
//		int j = 0;
//		int flag = 1;//�Ż�������һ�����������轻��λ�ã�����������
//		for (j = 0; j < sz - 1 - i; j++)//ÿһ������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//�Ż�����������
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{	
//	int arr[10] = { 12,123,654,321,86464,1651,56465,32116,65484,321 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//���鴫�ε�ʱ������������Ԫ�ص�ַ
//	int j;
//	for (j = 0; j < sz - 1; j++)
//	{
//		printf("%-2d ", arr[j]);
//	}
//
//	return 0;
//}




//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//����������Ԫ�ص�ַ�����������⣩
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//���⣺
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	int sz = sizeof(arr) / sizeof(arr[0]);//10
	/*
	��������������Ԫ�صĵ�ַ
		��������������
		1.sizeof����������-��������ʾ�������飬����������������С
		2.&����������������ʾ�������飬����ȡ��������������
	����֮��������������Ԫ�ص�ַ
	*/

	return 0;
}