#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	int z = x + y;
	return z;

}
int main()
{
	int coding = 0;
	printf("你会好好学习敲代码吗（1or0）");
	scanf("%d", &coding);
	if (coding = 1)
	{
		printf("坚持下去，你会走上人生巅峰");
	}
	else
	{
		printf("回家卖红薯");
	}
	

	int line = 0;
	while (line < 3000);
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line == 3000)
	{
		printf("走向人生巅峰");
	}
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = add(num1, num2);
	printf("%d\n", sum);

	return 0;
}