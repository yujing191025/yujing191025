#define _CRT_SECURE_NO_WARNINGS 1  //ʹ��scanf����
#include <stdio.h>

int a = 100;      //ȫ�ֱ�����{}�ⲿ�����
int main()
{ 
	int a = 10;   //�ֲ�������{}�ڲ������

	printf("%d\n", a);   //��ӡʱ���ӡ�ֲ�����

	int c, d, sum;	
	scanf("%d %d", &c, &d);   //��������
	sum = c + d;
	printf("sum=%d\n", sum);

	return 0;
		
}