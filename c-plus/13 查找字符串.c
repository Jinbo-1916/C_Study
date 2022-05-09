#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
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
		printf("没招到!\n");
	}
	else
	{
		printf("找到了!\n");
	}
	
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif