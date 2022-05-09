#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

#define MAX 1024
//宏函数使用场景,将频繁短小的函数,封装为宏函数
//优点:以空间换时间
#define Add(x,y)  x+y//最好表达式写好括号,比如这里  ((x)+(y))
int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b) * 20);//宏函数注意:保证运算的完整性  10+20*20
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif