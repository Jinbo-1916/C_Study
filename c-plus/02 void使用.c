#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯�� 
#if 0
//voidʹ��
//1�������� ������ͨ�������ʹ���������ԭ������Ϊ��������֪����������ڴ�ռ�
void test01()
{
	//void a = 10;
}
//2����;���޶���������ֵ �޶���������
void func(void)
{
	return 10;
}
void test02()
{
	//printf("%d\n",func());
}
//3��void* ����ָ��
void test03()
{
	void* p = NULL;

	int* pInt = NULL;
	char* pChar = NULL;
	pChar = (char *)pInt;//��ͬ����ָ��֮�䣬��Ҫǿ������ת���Ų��ᱨ��
	
	pChar = p;//����ָ�벻ͨ��ǿ������ת�����Ϳ���תΪ��������ָ��
}
int main()
{
	test02();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif