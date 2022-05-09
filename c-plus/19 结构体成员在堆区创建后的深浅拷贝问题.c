#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

struct student
{
	char* name;
	int age;
};

void test01()
{
	struct student p1;
	p1.name = malloc(sizeof(char) * 128);
	strcpy(p1.name, "TOM");
	p1.age = 19;
	struct student p2;
	p2.name = malloc(sizeof(char) * 128);
	strcpy(p2.name, "Jerry");
	p2.age = 18;

	p1.age = p2.age;
	strcpy(p1.name, p2.name);
	printf("%s\t%d\n", p1.name, p1.age);
	printf("%s\t%d\n", p2.name, p2.age);

	if (p1.name == NULL)
	{
		free(p1.name);
		p1.name = NULL;
	}
	if (p2.name == NULL)
	{
		free(p2.name);
		p2.name = NULL;
	}
}
int main()
{
	test01();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif