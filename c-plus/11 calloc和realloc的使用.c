#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
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
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif