//引入头函数（包含绝大多数使用的函数）
#include <stdio.h>
//主函数（一个.c中只能有一个）
int main()
{
	printf("hello world\n");//打印
	char ch = 'a';

	//字符数据类型
	printf("%d\n", sizeof(char));
	//整形
	printf("%d\n", sizeof(int));
	//短整型
	printf("%d\n", sizeof(short));
	//长整型
	printf("%d\n", sizeof(long));
	//更长的整形
	printf("%d\n", sizeof(long long));
	//单精度浮点数
	printf("%d\n", sizeof(float));
	//双精度浮点数
	printf("%d\n", sizeof(double));

    //变量
	int age = 18;
	double weight = 54.3;
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);
	printf("%lf\n", weight);



	return 0;	
}