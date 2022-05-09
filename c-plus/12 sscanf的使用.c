#include <stdio.h>//标准输入输出
#include <string.h>//字符串处理函数
#include <stdlib.h>//标准库函数
#if 0

void test01()
{
	//char dst[100] = ".123abcd$myname@000qwe.";
	char dst[100] = "helloworld@itcast.cn,";
	char buff[1024] = { 0 };
	char buf[1024] = { 0 };
	//sscanf(dst, "%*[^$]$%[^@]", buff);
	//sscanf(dst, "%[^@]", buff);
	//sscanf(dst, "%*[^@]%[^,]", buff);
	sscanf(dst, "%[a-z]%*[@]%s", buff, buf);
	printf("%s\n",buff);
	printf("%s\n", buf);
}

int main()
{
	test01();
	system("pause");//按任意键继续
	return EXIT_SUCCESS;//返回正常退出值
}
#endif