#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

struct student
{
	char* name;
};
void ShowInfo(struct student** p1)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", (*p1[i]).name);
	}
}

struct student** AllocStrig()
{
	struct student** p2 = malloc(sizeof(struct student*) * 3);
	for (int i = 0; i < 3; i++)
	{
		p2[i] = malloc(sizeof(struct student));
		p2[i]->name = malloc(sizeof(char) * 64);
	}
	strcpy(p2[0]->name, "TOM");
	strcpy(p2[1]->name, "TANG");
	strcpy(p2[2]->name, "jinbo");
	//*p2[0]->name = "TOM";
	//*p2[1]->name = "TANG";
	//*p2[2]->name = "jinbo";
	return p2;
}
void test01()
{
	struct student** p1 = NULL;
	//p1 = (struct student *)malloc(sizeof(struct student*) * 3);
	p1 = AllocStrig();
	
	ShowInfo(p1);
	if (p1 != NULL)
	{
		for (int i = 0; i < 3; i++)
		{
			if (p1[i]->name != NULL)
			{
				free(p1[i]->name);
				p1[i]->name = NULL;
			}
			if (p1[i] != NULL)
			{
				free(p1[i]);
				p1[i] = NULL;
			}
		}
		free(p1);
		p1 = NULL;
	}
}

int main()
{
	test01();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif
