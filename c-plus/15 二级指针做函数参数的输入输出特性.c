#include <stdio.h>//��׼�������
#include <string.h>//�ַ���������
#include <stdlib.h>//��׼�⺯��
#if 0 

void printfArray(int** p1, int len)
{
	for (int i = 0; i < len; i++)
	{
	
		printf("%d\n",*p1[i]);
	}
}
//����ָ�����������

//�ڶ��������ڴ�
void test01()
{
	int** pArray = (int*)malloc(sizeof(int*) * 5);
	//memset(pArray, 0, sizeof(pArray));

	//��ջ�Ͽ�������
	int a1 = 100; 
	int a2 = 200;
	int a3 = 300;
	int a4 = 400;
	int a5 = 500;

	//��������ά�� ջ�ϵ����ݵĵ�ַ,������ϵ
	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;
	//int len = sizeof(pArray) / sizeof(int*);
	//��ӡ����
	printfArray(pArray, 5);

	free(pArray);
	pArray = NULL;
}

//��ջ�Ͽ��ٿռ�
void test02()
{
	
	int* pArray[5];

	for (int i = 0; i < 5; i++)
	{
		//ջ�ϵ�ÿ������ ά�� �������ٵ��ڴ�
		pArray[i] = (int*)malloc(sizeof(int) * 5);
		*pArray[i] = (100 * (i + 1));
		
	}
	int len = sizeof(pArray) / sizeof(int*);
	//��ӡ����
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
	system("pause");//�����������
	return EXIT_SUCCESS;//���������˳�ֵ
} 
#endif
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int(* p)[5] = &arr;
//	printf("%d\n",(*p)[1]);
//	system("pause");//�����������
//	return EXIT_SUCCESS;//���������˳�ֵ
//}