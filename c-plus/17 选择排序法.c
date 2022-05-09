#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

void PrintArray(int buff[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", buff[i]);
	}
}
void PrintArray2(int** buff, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", buff[i]);
	}
}
void MySort(int buff[], int len)
{
	
	for (int i = 0; i < len; i++)
	{
		int min = i;
		for (int j = i+1; j < len; j++)
		{
			if (buff[min] >= buff[j])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			int temp = buff[min];
			buff[min] = buff[i];
			buff[i] = temp;
		}
	}
	PrintArray(buff,len);
	
}

void test01()
{
	int buff[10] = { 10,4,3,3,2,2,3,8,6,9 };
	int len = sizeof(buff) / sizeof(int);
	MySort(buff, len);
}

void MySort2(int* buff[], int len)
{

	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			int x = strcmp(buff[max], buff[j]);
			if (x== -1)
			{
				max = j;
			}
		}
		if (max != i)
		{
			
			char *temp = *(buff + max);
			buff[max] = buff[i];
			buff[i] = temp;
		}
	}
	PrintArray2(buff, len);

}
void test02()
{
	char* buff[] = { "aaa","bbb","ccc","ddd","fff","eee" };
	int len = sizeof(buff) / sizeof(char *);
	MySort2(buff, len);
}
int main()
{
	//test01();
	test02();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif