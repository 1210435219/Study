#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 5;
//	int b = 0;
//	b = ((a > 5) ?( 3) : (-3));
//	printf("%d",b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = (a>b) ? (a) : (b);
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ���һ�������ã�ǰ������ִ��
//	//if(a=b+1,c=a/2,d>0)�ж�����d>0;
//	printf("%d\n", a);//12
//	printf("%d\n", b);//12
//	printf("%d\n", c);//13
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct stu s = {"������",20,"��"};
//	printf("%s  %d   %s\n", s.name, s.age, s.sex);//  �ṹ����� . �ṹ���Ա   
//
//
//	//ͨ��ָ����ʽṹ��
//	struct stu* ps = &s;
//	//�õ�ps
//	printf("%s\n",(*ps).name);//����
//	printf("%s\n", ps->name);//��    �ṹ��ָ�� -> �ṹ���Ա
//
//
//
//	return 0;
//}

int main()
{
	int c = 2;
	printf("%d", c + --c);
	return 0;
}




