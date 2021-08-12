#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//通讯录：
//可以保存1000人信息
//每个人的信息包含名字，年龄，性别，电话，住址，
//功能：
//1.增加一个人的信息
//2.删除一个指定人的信息
//3.查找一个指定人的信息
//4.修改一个指定人的信息
//5.显示通讯录中所有人的信息
//6.排序
//0.退出通讯录

//test.c   测试通讯录逻辑
//contact.h  通讯录相关功能函数声明
//contact.c  相关功能函数实现

void menu()
{
	printf("--------------------------------------------                                      \n");
	printf("                1. 新建联系人                                                                  \n");
	printf("                2. 删除联系人                                                                  \n");
	printf("                3. 查找联系人                                                                  \n");
	printf("                4. 修改联系人                                                                  \n");
	printf("                5. 显示全部联系人                                                           \n");
	printf("                6. 排序联系人                                                                  \n");
	printf("                0. exit                                                                              \n");
	printf("--------------------------------------------                                      \n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};



void test()
{
	int input = 0;

	struct Contact con;//创建一个通讯录
	InitContact(&con);//初始化通讯录（传地址才能修改，且提高时间空间效率）
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("已退出通讯录！\n");
			break;
		case SORT:

			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}