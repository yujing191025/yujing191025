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
	printf("���ú�ѧϰ�ô�����1or0��");
	scanf("%d", &coding);
	if (coding = 1)
	{
		printf("�����ȥ��������������۷�");
	}
	else
	{
		printf("�ؼ�������");
	}
	

	int line = 0;
	while (line < 3000);
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line == 3000)
	{
		printf("���������۷�");
	}
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = add(num1, num2);
	printf("%d\n", sum);

	return 0;
}