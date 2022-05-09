#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0
//把一个字符串拷贝到另一个字符串
//方法一:通过下标操作
void CopyString01(char* dest, char* source)
{
	int len = strlen(source);
	for (int i = 0; i < len; i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0';
}
//方法二:通过指针操作
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
//方法三:
void CopyString03(char* dest, char* source)
{
	while (*dest++ = *source++);
}

//把一个字符串翻转
//方法一通过下标的方式
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
//方法二通过指针的方式
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
	
	system("pause");//按任意键继续
	//return EXIT_SUCCESS;//返回正常退出值
}
#endif