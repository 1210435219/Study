#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//memcpy - 内存拷贝  void *memcpy( void *dest, const void *src, size_t count );
//memcpy - 拷贝两个不相关的内存块，当出现内存重叠时，使用memmove
//标准规定memcpy函数能够实现不重叠拷贝就行
//但实际上VS中的memcpy函数可以实现重叠copy

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
