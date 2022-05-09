#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0
int* GetSpace()
{
	//在堆区开辟空间，只要你自己不手动释放，这块内存就不会释放，所以在这个函数体结束后，
	//我任然可以访问这块空间里面的内容
	int* a = (int)malloc(sizeof(int) * 5);//malloc返回值是void*，所以这里要强制类型转换
	if (NULL == a)
	{
		return 0;
	}
	for (int i = 0; i < 5; i++)
	{
		a[i] = 100+i;
	}
	return a;
}
void test01()
{
	int* p = GetSpace();
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);//释放堆区数据
	p = NULL;//将不用的指针指向空，变成空指针，以免成为野指针
}
//堆区注意事项	如果在主调函数中，一个空指针分配内存，利用同级的指针是分配失败的，
//被调函数需要使用高级指针去修饰低级指针
void AllocateSpace(char* p2)
{
	char* temp = (char*)malloc(100);
	memset(temp,0,100);//将temp地址对应的100个字节大小的内存空间初始化为0
	strcpy(temp, "dhfsjdfhjsfh");

	p2 = temp;
}
void AllocateSpace1(char** p2)
{
	char* temp = (char*)malloc(100);
	memset(temp, 0, 100);//将temp地址对应的100个字节大小的内存空间初始化为0
	strcpy(temp, "dhfsjdfhjsfh");

	*p2 = temp;
}
void test02()
{
	char* p1 = NULL;
	AllocateSpace(p1);
	printf("%s\n",p1);
}
void test03()
{
	char* p1 = NULL;
	AllocateSpace1(&p1);
	printf("%s\n", p1);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif