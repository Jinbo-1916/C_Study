#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0
int* GetSpace()
{
	//�ڶ������ٿռ䣬ֻҪ���Լ����ֶ��ͷţ�����ڴ�Ͳ����ͷţ���������������������
	//����Ȼ���Է������ռ����������
	int* a = (int)malloc(sizeof(int) * 5);//malloc����ֵ��void*����������Ҫǿ������ת��
	if (NULL == a)
	{
		return 0;
	}
	for (int i = 0; i < 5; i++)
	{
		a[i] = 100+i;
	}
	return a;
}
void test01()
{
	int* p = GetSpace();
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);//�ͷŶ�������
	p = NULL;//�����õ�ָ��ָ��գ���ɿ�ָ�룬�����ΪҰָ��
}
//����ע������	��������������У�һ����ָ������ڴ棬����ͬ����ָ���Ƿ���ʧ�ܵģ�
//����������Ҫʹ�ø߼�ָ��ȥ���εͼ�ָ��
void AllocateSpace(char* p2)
{
	char* temp = (char*)malloc(100);
	memset(temp,0,100);//��temp��ַ��Ӧ��100���ֽڴ�С���ڴ�ռ��ʼ��Ϊ0
	strcpy(temp, "dhfsjdfhjsfh");

	p2 = temp;
}
void AllocateSpace1(char** p2)
{
	char* temp = (char*)malloc(100);
	memset(temp, 0, 100);//��temp��ַ��Ӧ��100���ֽڴ�С���ڴ�ռ��ʼ��Ϊ0
	strcpy(temp, "dhfsjdfhjsfh");

	*p2 = temp;
}
void test02()
{
	char* p1 = NULL;
	AllocateSpace(p1);
	printf("%s\n",p1);
}
void test03()
{
	char* p1 = NULL;
	AllocateSpace1(&p1);
	printf("%s\n", p1);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif