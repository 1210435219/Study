#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d , %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];//pΪ����ָ�룬ָ��һ���ĸ�Ԫ�ص����飻��p+1ʱ�������������鼴�ĸ�Ԫ��
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

#include <stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	//ָ�����飬�ڲ���ŵ���char*����ָ�룬�ֱ�ָ��ÿ���ַ�������ĸ
	char** pa = a;
	//����ָ�����ָ������
	pa++;
	printf("%s\n", *pa);//ֻ������һ���ó�a[1]��ַ���Ӵ˵�ַ��ʼ��ӡ�ַ���
	return 0;
}