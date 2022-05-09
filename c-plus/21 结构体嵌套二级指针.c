#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 1

//创建一个老师的结构体,一个老师要带很多个学生,
typedef struct teacher
{
	char* name;
	char** students;//二级指针,每个二级指针指向一个一级指针的地址,也就是每一个学生的信息

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
	MyTeacher** p = malloc(sizeof(MyTeacher*) * 3);//在堆区开辟3块内存,
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
	
	//释放堆区空间
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
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif