#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	return 0;
//}


//��С��

//��һ������
//4�ֽ�
// 
//0x11 22 33 44
// 
//��               ->              ��
//	����ֽ���洢   
//		 11  22  33  44
//	��һ�����ݵ� ��λ�ֽڣ�44����λ�������ݴ���ڸߵ�ַ��
//			    ��λ�ֽ� �����ݴ���ڵ͵�ַ��			
//	С���ֽ���洢
//		 44  33  22  11
//	��һ�����ݵ� ��λ�ֽڣ�44����λ�������ݴ���ڵ͵�ַ��
//				��λ�ֽ� �����ݴ���ڸߵ�ַ��

//�жϵ�ǰ�����ֽ���



//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if ((*p) == 1)
//		printf("С��");
//	else
//		("���");
//	return 0;
//}

//int check_sys()
//{
//	int a =1;
//	char* p = (char*)&a;
//	//if ((*p) == 1)
//	//	return 1;//С��
//	//else
//	//	return 0;//���
//	return *p;
//
//}


int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{

	if (check_sys()== 1)
		printf("С��");
	else
		("���");
	return 0;
}
