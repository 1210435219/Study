#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//memmove - void *memmove( void *dest, const void *src, size_t count );
//memmove根据dest和src前后位置选择使用
//dest<src  -  使用从前向后copy
//dest>src  -  使用从后向前copy



void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)//before -> after 
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else//after -> before
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 ,7,8,9,10};
	int arr2[20] = { 0 };
	my_memmove(arr1+2 , arr1, 16);

	return 0;
}
