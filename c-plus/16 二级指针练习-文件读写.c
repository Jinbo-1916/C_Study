#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0

void ReadFileData(FILE* fp, char** p1, int len)
{
	if (fp == NULL)
	{
		perror("");
		return;
	}
	if (p1 == NULL)
	{
		perror("");
		return;
	}
	if (len <= 0)
	{
		return;
	}
	char buff[1024] = { 0 };
	int sum = 0;
	while (fgets(buff, 1024, fp) != NULL)
	{
		/*
		aaaaaaaaaa
		bbbb
		ccc*/
		
		//���㿪�ٵ�ÿ���ַ����Ĵ�С
		int currentlen = strlen(buff) + 1;

		//�ַ�������ַ���Ϊ \0
		
		buff[strlen(buff) - 1] = '\0';
		
		//���ٶ����Ŀռ�
		char* p = (char*)malloc(sizeof(char) * currentlen);

		
		//���ļ��ж�ȡ������,�ŵ����ٵĶ����ռ���
		strcpy(p,buff);

		p1[sum++] = p;

		//���buff
		memset(buff, 0, 1024);
	}
}

int GetFileLines(FILE** fp)
{
	char ch;
	int count = 0;
	if (*fp == NULL)
	{
		return -1;
	}
	while (!feof(*fp)) //�ļ�û�н�������ִ��ѭ��
	{
		ch = fgetc(*fp);
		//printf("%c", ch);
		if (ch == '\n')
		{
			count++;
		}
	}
	if (count > 0)
	{
		count += 1;
	}
	printf("%d\n",count);
	//���ļ��������
	fseek(*fp,0,SEEK_SET);
	return count;
}

void ShowFp(char** p3,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", p3[len]);
	}
}
int main()
{
	FILE* fp = fopen("./a.txt", "r");
	if (fp == NULL)
	{
		perror("");
		return;
	}
	int len = GetFileLines(&fp);
	char** p1 = (char*)malloc(sizeof(char*) * len);

	//���ļ��е����ݷŵ�P1��
	ReadFileData(fp,p1,len);

	//��ӡ����
	ShowFp(p1,len);

	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif