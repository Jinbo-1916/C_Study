#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0

typedef struct Student
{
	char name[128];
	int age;
	float sorce;

}MyStudent;
//����ͨ����ַ��������ʡ�ռ�
//��Ϊֵ���ݾ��ǿ���,��������ֵ�ж��,�Ҿ�Ҫ���ٶ��Ŀռ�
//����const���κ����е��β�,��ֹ�����
void PrintStudent(const MyStudent* p2)
{
	printf("%d\n",p2->age);
}

void test01()
{
	MyStudent p1 = { "tangjinbo",23,99.99 };
	MyStudent* p3 = &p1;
	PrintStudent(p3);
}
int main()
{
	test01();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif