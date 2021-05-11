#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//      冒泡排序：    从base位置向后  sz个元素每个元素大小width 比较方式为函数cmp确定       
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻两个元素比较
			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) > 0)
			{
				//如果不满足就交换
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	int arr[] = { 32,45,98,51,65,75,15,35,25,56,21,32,74,95,35,54,15,25,35,65,498,15,32,65 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

int main()
{
	test3();
	return 0;
}