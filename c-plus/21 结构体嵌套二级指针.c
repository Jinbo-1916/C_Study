#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 1

//����һ����ʦ�Ľṹ��,һ����ʦҪ���ܶ��ѧ��,
typedef struct teacher
{
	char* name;
	char** students;//����ָ��,ÿ������ָ��ָ��һ��һ��ָ��ĵ�ַ,Ҳ����ÿһ��ѧ������Ϣ

}MyTeacher;


void ShowInfo(MyTeacher** p)
{
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]->name);
		for (int j = 0; j < 3; j++)
		{
			printf("\t%s\n", (p[i]->students)[j]);//(*p)[i].students
		}
	}
}

void test01()
{
	MyTeacher** p = malloc(sizeof(MyTeacher*) * 3);//�ڶ�������3���ڴ�,
	for (int i = 0; i < 3; i++)
	{
		p[i] = malloc(sizeof(MyTeacher));
		p[i]->name = malloc(sizeof(char) * 64);
		p[i]->students = malloc(sizeof(char*) * 3);
		sprintf(p[i]->name, "Teacher_%d", i + 1);

		for (int j = 0; j < 3; j++)
		{	
			p[i]->students[j] = malloc(sizeof(char) * 64);
			sprintf((p[i]->students)[j], "%s_studnt_%d", p[i]->name,j + 1);
		}
	}
	ShowInfo(p);
	
	//�ͷŶ����ռ�
	if (p != NULL)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (p[i]->students[j] != NULL)
				{
					free(p[i]->students[j]);
					p[i]->students[j] = NULL;
				}
			}	
			if (p[i]->students != NULL)
			{
				free(p[i]->students);
				p[i]->students = NULL;
			}
			if (p[i]->name != NULL)
			{
				free(p[i]->name);
				p[i]->name = NULL;
			}
			if (p[i] != NULL)
			{
				free(p[i]);
				p[i] = NULL;
			}
		}
		free(p);
		p = NULL;
	}
}

int main()
{
	test01();
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif