#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ�ģ��strlen
//int my_strlen(char* p)
//{
//	if ((*p) != '\0')
//		return my_strlen(p + 1) + 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[10] = {0};
//	scanf("%s", &arr);
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}



//�ǵݹ�ģ��strlen
int main()
{
	char arr[10] = "0";
	scanf("%s", &arr);
	char* p = arr;
	int count = 0;
	while (*p != '\0')
	{
		p += 1;
		count++;
	}
	printf("%d", count);
	return 0;
}
