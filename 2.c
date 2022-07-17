#define _CRT_SECURE_NO_WARNINGS 1  //使得scanf可用
#include <stdio.h>

int a = 100;      //全局变量：{}外部定义的
int main()
{ 
	int a = 10;   //局部变量：{}内部定义的

	printf("%d\n", a);   //打印时会打印局部变量

	int c, d, sum;	
	scanf("%d %d", &c, &d);   //输入数据
	sum = c + d;
	printf("sum=%d\n", sum);

	return 0;
		
}