#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//memcpy - �ڴ濽��  void *memcpy( void *dest, const void *src, size_t count );
//memcpy - ������������ص��ڴ�飬�������ڴ��ص�ʱ��ʹ��memmove
//��׼�涨memcpy�����ܹ�ʵ�ֲ��ص���������
//��ʵ����VS�е�memcpy��������ʵ���ص�copy

void* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[20] = { 0 };

	my_memcpy(arr2, arr1, 16);

	return 0;
}
