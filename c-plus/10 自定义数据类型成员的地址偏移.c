#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#include <stddef.h>
#if 0
//int* func(int a, int b)
//{
//	return &a;
//}
//int main0()
//{
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;

//	int buff[10];
//	int* p2[10];
//	int(*p2)[10];
//	int(*p3)(int, int) = func;
//	int(* p4[10])(int, int);//����ָ������
//	system("pause");//�����������
//	return EXIT_SUCCESS;//���������˳�ֵ
//}



typedef struct Person
{
	char a;//0-3
	int b;//4-7
	char buff[128];//8-135
	char c;//136
}MyPerson;

int main01()
{

	MyPerson p1 = { 'w',24,"tangjinbo", 's' };
	char* p2 = (char *)&p1;
	printf("%d\n",offsetof(MyPerson,c));
	printf("%s\n", (p2 + 8));
	printf("%c\n",*(p2+136));
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif
void TurnAB(int* p2[2])
{
	int temp = *p2[0];
	*p2[0] = *p2[1];
	*p2[1] = temp;
}
int main02(void)
{
	int a = 100;
	int b = 200;
	int* p1[2] = { &a,&b };
	TurnAB(p1);
	printf("%d\t%d",*p1[0],*p1[1]);
}
int func1(int a,int b)
{
	return a + b;
}
int func2(int a, int b)
{
	return a - b;
}
int main03(void)
{
	int (*p1[2])(int, int) = { func1,func2 };
	printf("%d\n", p1[0](3, 2));
	printf("%d\n", p1[1](3, 2));
}
