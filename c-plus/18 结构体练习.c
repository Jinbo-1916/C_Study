#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0

typedef struct Student 
{
	int id;
	char* name;
	char sex;
	float score;
}MyStudent;

void show_info(MyStudent(*p1)[30],int len)
{
	printf("ID\tNAME\tSEX\tSCORE\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d\t%s\t%c\t%f\n", (*p1)[i].id, (*p1)[i].name, (*p1)[i].sex, (*p1)[i].score);
	}
	return;
}

void test01()
{
	MyStudent JACK = 
	{ 
		.id = 1,
		.name="JACK",
		.sex = 'm',
		.score = 90.5
	};
	MyStudent TOM = 
	{ 
		.id = 2,
		.name = "TOM",
		.sex = 'm',
		.score = 87.6
	};
	MyStudent ROSE = 
	{  
		.id = 3,
		.name = "ROSE",
		.sex = 'w',
		.score = 81.2
	};

	MyStudent array[30] = { JACK, TOM ,ROSE };

	MyStudent(*p)[30] = array;//����ָ��
	
	//int len = strlen(array) / sizeof(MyStudent);
	show_info(p,3);
}

int main()
{
	test01();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif


