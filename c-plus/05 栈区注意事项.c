#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

int* func()
{
	int a = 10;//栈上创建变量
	return &a;
}
void test01()
{
	int* p1;
	p1 = func();
	//结果早已不重要，因为上上面的a早已被释放，再去操作这块内存属于非法操作
	printf("%d\n", *p1);
	printf("%d\n", *p1);
}
char* GetString()
{
	char buff[]= "hdfsajkfh";
	return buff;//此函数结束时，buff这块内存上的数据已经被释放了，不要返回局部变量的地址，
	//因为局部变量在函数体执行完毕过后就被释放掉了，再次操作就是非法操作

}
void test02()
{
	char* p = NULL;
	p = GetString();
	printf("%s\n",p);
}
int main()
{
	//test01(); 
	test02();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif