#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数 
#if 0
//1、typedef使用 可以简化struct关键字
#if 0//这里过于麻烦，可以优化
struct Person
{
	//姓名
	char name[64];
	//年龄
	int age;
};
typedef struct Person MyPerson;
#endif

#if 1//优化版本
typedef struct Person
{
	//姓名
	char name[64];
	//年龄
	int age;
}MyPerson;
#endif

//2、区分数据类型
void test02()
{
	//char* p1, p2;//这里p1是char *类型，p2是char类型
	typedef char* PUCHAR;
	PUCHAR p1, p2;//这里p1是char *类型，p2也是char *类型

}
//3、提高移植性
typedef int int32; 
void test03()
{
	int32 p1;
	int32 p2;
}

void test01()
{
	//struct Person p1 = { "唐金波",22 };
	MyPerson p1 = { "唐金波",22 };
	MyPerson p2 = { "唐运真",22 };
}
int main01()
{
	char buff[1024];
	strcpy(buff,"HELLO WORLD!");


	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif
