#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
int g_val = 2022;     //全局变量 作用域为整个工程（跨源文件使用须声明extern）
int main()
{//作用域和生命周期

	 printf("1:%d\n", g_val);
	int a = 10;

	{	 printf("2:%d\n", g_val);
		printf("%d\n", a);     //局部变量a作用域只在于定义时的{}中
	
	}
	printf("3:%d\n", g_val);		

		
		//生命周期：变量的创建到变量的销毁之间的一个时间段
		//局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束
		//全局变量的生命周期：整个程序的生命周期


  //变量
		   //1.字面变量
		3.14;
		1000;
		"aaaa";
		'a';

			//2.const修饰的常变量

			/*const int num = 10;
			num = 20; */  //const修饰之后为常变量，具有常属性，不可改变，因此报错

		//const int num = 10;
		//int arr[10] = { 0 };//10个元素
		//int arr2[num] = { 0 };      //数组中要求为常量，而常变量本质为变量

            //3.#define定义的标识符常量
             #define MAX 10000;
		     int n = MAX;
			 printf("n=%d\n", n);
			//4.枚举常量（可以一一列举的常量）
			 enum Sex
			 {//这种枚举类型的变量未来的可能取值
				 MALE,
				 FEMALE,
				 SECRET
			};

			 enum Sex s = MALE;

			 printf("%d\n", MALE);
			 printf("%d\n", FEMALE);
			 printf("%d\n", SECRET);    //枚举常量默认从零开始，依次增加1
		return 0;
} 
