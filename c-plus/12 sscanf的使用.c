#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
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
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
}
#endif