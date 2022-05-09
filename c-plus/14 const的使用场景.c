#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

typedef struct Student
{
	char name[128];
	int age;
	float sorce;

}MyStudent;
//可以通过地址传递来节省空间
//因为值传递就是拷贝,传过来的值有多大,我就要开辟多大的空间
//加入const修饰函数中的形参,防止误操作
void PrintStudent(const MyStudent* p2)
{
	printf("%d\n",p2->age);
}

void test01()
{
	MyStudent p1 = { "tangjinbo",23,99.99 };
	MyStudent* p3 = &p1;
	PrintStudent(p3);
}
int main()
{
	test01();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif