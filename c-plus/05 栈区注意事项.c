#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0

int* func()
{
	int a = 10;//ջ�ϴ�������
	return &a;
}
void test01()
{
	int* p1;
	p1 = func();
	//������Ѳ���Ҫ����Ϊ�������a���ѱ��ͷţ���ȥ��������ڴ����ڷǷ�����
	printf("%d\n", *p1);
	printf("%d\n", *p1);
}
char* GetString()
{
	char buff[]= "hdfsajkfh";
	return buff;//�˺�������ʱ��buff����ڴ��ϵ������Ѿ����ͷ��ˣ���Ҫ���ؾֲ������ĵ�ַ��
	//��Ϊ�ֲ������ں�����ִ����Ϲ���ͱ��ͷŵ��ˣ��ٴβ������ǷǷ�����

}
void test02()
{
	char* p = NULL;
	p = GetString();
	printf("%s\n",p);
}
int main()
{
	//test01(); 
	test02();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif