#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0
//��һ���ַ�����������һ���ַ���
//����һ:ͨ���±����
void CopyString01(char* dest, char* source)
{
	int len = strlen(source);
	for (int i = 0; i < len; i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0';
}
//������:ͨ��ָ�����
void CopyString02(char* dest, char* source)
{
	while (*source)
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';
}
//������:
void CopyString03(char* dest, char* source)
{
	while (*dest++ = *source++);
}

//��һ���ַ�����ת
//����һͨ���±�ķ�ʽ
void TurnString01(char* source)
{
	int start = 0;
	int end = strlen(source)-1;
	while(start < end)
	{
		char temp = source[start];
		source[start] = source[end];
		source[end] = temp;
		start++;
		end--;
	}
}
//������ͨ��ָ��ķ�ʽ
void TurnString02(char* source)
{
	int len = strlen(source) - 1;
	char* start = source;
	char* end = source + len;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	char buff[] = "tangjinbo";
	char dest[] = {0};
	//CopyString01(dest, buff);
	//CopyString02(dest, buff);
	//CopyString03(dest, buff);
	//printf("%s\n", dest);


	//TurnString01(buff);
	TurnString02(buff);
	printf("%s\n",buff);
	
	system("pause");//�����������
	//return EXIT_SUCCESS;//���������˳�ֵ
}
#endif