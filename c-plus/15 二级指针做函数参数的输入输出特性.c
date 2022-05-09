#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0 

void printfArray(int** p1, int len)
{
	for (int i = 0; i < len; i++)
	{
	
		printf("%d\n",*p1[i]);
	}
}
//二级指针的输入特性

//在堆区开辟内存
void test01()
{
	int** pArray = (int*)malloc(sizeof(int*) * 5);
	//memset(pArray, 0, sizeof(pArray));

	//在栈上开辟数据
	int a1 = 100; 
	int a2 = 200;
	int a3 = 300;
	int a4 = 400;
	int a5 = 500;

	//堆区数组维护 栈上的数据的地址,建立关系
	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;
	//int len = sizeof(pArray) / sizeof(int*);
	//打印数组
	printfArray(pArray, 5);

	free(pArray);
	pArray = NULL;
}

//在栈上开辟空间
void test02()
{
	
	int* pArray[5];

	for (int i = 0; i < 5; i++)
	{
		//栈上的每个数据 维护 堆区开辟的内存
		pArray[i] = (int*)malloc(sizeof(int) * 5);
		*pArray[i] = (100 * (i + 1));
		
	}
	int len = sizeof(pArray) / sizeof(int*);
	//打印数组
	printfArray(pArray, len);
	for (int i = 0; i < 5; i++)
	{
		if (pArray[i] == NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}
}
int main()
{
	//test01();
	test02();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
} 
#endif
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int(* p)[5] = &arr;
//	printf("%d\n",(*p)[1]);
//	system("pause");//按任意键继续
//	return EXIT_SUCCESS;//返回正常退出值
//}