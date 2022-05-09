#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数 
#if 0
//void使用
//1、无类型 不可以通过无类型创建变量，原因是因为编译器不知到分配多少内存空间
void test01()
{
	//void a = 10;
}
//2、用途：限定函数返回值 限定函数参数
void func(void)
{
	return 10;
}
void test02()
{
	//printf("%d\n",func());
}
//3、void* 万能指针
void test03()
{
	void* p = NULL;

	int* pInt = NULL;
	char* pChar = NULL;
	pChar = (char *)pInt;//不同类型指针之间，需要强制类型转换才不会报错
	
	pChar = p;//万能指针不通过强制类型转换，就可以转为任意类型指针
}
int main()
{
	test02();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif