#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0

int  test01()
{
	char* source = "abcdefgdnfadf";
	char* dest = "dnf";

	while (*dest)
	{
		
		if (*dest == *source)
		{
			int i = 0;
			char *p1 = source;
			for (; i < sizeof(dest); i++)
			{
				if (*(dest + i) != *(p1 + i))
				{
					break;
				}
			}
			if (i == 3)
			{
				printf("%s\n",source);
				return &source;
			}
		}
		source++;
		if (*source == '\0')
		{
			return -1;

		}
		dest;
	}
}

int main()
{
	int p2 = test01();
	char* p1 = p2;
	if (p2 == -1)
	{
		printf("û�е�!\n");
	}
	else
	{
		printf("�ҵ���!\n");
	}
	
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif