#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//&:ȡ��ַ������
//	//%p:���յ�ַ��ʽ��ӡ��
//	int* pa = &a;//pa��ר��������ŵ�ַ�ģ���pa����ָ����������巽ʽΪ����int* 
//	//*˵��pa��ָ����� int˵��pa ָ�� �������α���
//	char c = 'w';
//	char* pc = &c;
//	*pa = 20;//*pa�����ò�����*pa=a
//	printf("%d\n", a);
//	return 0;
//}
//
//struct stu
//{
//	//����ѧ��ʱ������
//	char name[20];//����-�ַ���-�ַ�����
//	short age;//����-int
//	char sex[8];//�Ա�-�ַ���
//};
//
//int main()
//{
//	//�ṹ��Ĵ����ͳ�ʼ��
//	struct stu s1 = {"���",20,"��"};//����-���
//	struct stu s2 = { "������",26,"��" };//����-������
//	struct stu* ps = &s1;
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);//1��.���ṹ��Ա���ʲ����� �ṹ�����. �ṹ���Ա
//	printf("%s %d %s",ps->name,ps->age ,ps->sex);//2��->���ṹ��Ա���ʲ����� �ṹ�����-> �ṹ���Ա
//	//ps->name ͨ��ps�ҵ���ָ������ ��Ա name
//	return 0;
//}

//struct book
//{
//	char name[20];
//	double price;
//	char id[20];
//};

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 140)
			printf("Genius\n");
	}

	return 0;
}