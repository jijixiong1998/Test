#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//测试文件
//通讯录1000个人的信息：名字+ 年龄+ 电话 + 地址+ QQ + 性别 
//增 删 查 改 排序 退出
#define _CRT_SECURE_NO_WARNINGS 1


void menu()
{
	printf("*******************************\n");
	printf("****** 1. add     2. del  * ***\n");
	printf("****** 3. search  4. modify ***\n");
	printf("****** 5. sort    6. show   ***\n");
	printf("******       0. exit        ***\n");
	printf("*******************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};

//first_name
//FirstName

void test()
{
	//创建的通讯录
	Contact con = { 0 };
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case SORT:
			sort_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();//
	return 0;
}