#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯�� 
#if 0
//1��typedefʹ�� ���Լ�struct�ؼ���
#if 0//��������鷳�������Ż�
struct Person
{
	//����
	char name[64];
	//����
	int age;
};
typedef struct Person MyPerson;
#endif

#if 1//�Ż��汾
typedef struct Person
{
	//����
	char name[64];
	//����
	int age;
}MyPerson;
#endif

//2��������������
void test02()
{
	//char* p1, p2;//����p1��char *���ͣ�p2��char����
	typedef char* PUCHAR;
	PUCHAR p1, p2;//����p1��char *���ͣ�p2Ҳ��char *����

}
//3�������ֲ��
typedef int int32; 
void test03()
{
	int32 p1;
	int32 p2;
}

void test01()
{
	//struct Person p1 = { "�ƽ�",22 };
	MyPerson p1 = { "�ƽ�",22 };
	MyPerson p2 = { "������",22 };
}
int main01()
{
	char buff[1024];
	strcpy(buff,"HELLO WORLD!");


	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif
