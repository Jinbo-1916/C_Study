#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

//calloc

void test01()
{
	int* p1 = (int*)calloc(10, sizeof(int));
	//int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",*p1++);
	}
}

//realloc
void test02()
{
	int* p1 = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		p1[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p1[i]);
	}
	printf("%d\n",p1);
	p1 = (int*)realloc(p1, sizeof(int) * 40);
	printf("%d\n", p1);
	for (int i = 0; i < 40; i++)
	{
		printf("%d\n", p1[i]);
	}
}

int main()
{
	//test01();
	test02();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif