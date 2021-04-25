#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	return 0;
//}


//大小端

//给一个整数
//4字节
// 
//0x11 22 33 44
// 
//低               ->              高
//	大端字节序存储   
//		 11  22  33  44
//	把一个数据的 低位字节（44，个位）的内容存放在高地址处
//			    高位字节 的内容存放在低地址处			
//	小段字节序存储
//		 44  33  22  11
//	把一个数据的 低位字节（44，个位）的内容存放在低地址处
//				高位字节 的内容存放在高地址处

//判断当前机器字节序



//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if ((*p) == 1)
//		printf("小端");
//	else
//		("大端");
//	return 0;
//}

//int check_sys()
//{
//	int a =1;
//	char* p = (char*)&a;
//	//if ((*p) == 1)
//	//	return 1;//小端
//	//else
//	//	return 0;//大端
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
		printf("小端");
	else
		("大端");
	return 0;
}
