#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//void swap1(int x,int y)
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}

// x , y��ַ��a�� b��ַ��ͬ������x��y��Ӱ��a��b


//void swap2(int* px,int* py)//ͨ��������ַ&a��&b Զ�̲���a��b
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("%d %d\n", a, b);
//	//swap1(&a, &b);
//	//��ֵ����
//	//�������ε�ʱ��
//	//ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ����
//	//���βεĸı䣬����Ӱ��ʵ��
//	swap2(pa, pb);
//	//��ַ��ָ�룩����
//	//���ݵ��ǵ�ַ���βο�ͨ����ַ�һ�ʵ�Σ��Ӷ�Ӱ��ʵ��
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j ++)
//	{
//		if (i % j == 0)
//			return 0;
//		else
//			return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("  %d  ,", i);
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	
//	int right = sz;
//	int mid = (left / 2) + (right / 2);
//	while (left<=right)
//	{
//		mid=(left/2)+(right/2);
//		if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] == k)
//		{ return mid;}				
//		 	
//	}
//	return -1;	
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int sz = (sizeof(arr) / sizeof(arr[0]))-1;
//	//���鴫�δ��ݵ���������Ԫ�ص�ַ
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{ printf("�ҵ��ˣ��±���%d\n", ret);}
//		
//	return 0;
//}

int add(int* p)
{
	(*p)++;

}

int main()
{
	int num = 0;
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	return 0;
}