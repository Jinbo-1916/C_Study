#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
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
		
		//计算开辟的每个字符串的大小
		int currentlen = strlen(buff) + 1;

		//字符串最后字符改为 \0
		
		buff[strlen(buff) - 1] = '\0';
		
		//开辟堆区的空间
		char* p = (char*)malloc(sizeof(char) * currentlen);

		
		//将文件中读取的内容,放到开辟的堆区空间中
		strcpy(p,buff);

		p1[sum++] = p;

		//清空buff
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
	while (!feof(*fp)) //文件没有结束，则执行循环
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
	//将文件光标置首
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

	//将文件中的数据放到P1中
	ReadFileData(fp,p1,len);

	//打印数组
	ShowFp(p1,len);

	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif