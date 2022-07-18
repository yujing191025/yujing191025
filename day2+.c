#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//字符数组：数组是一组同类型的元素
	char arr[] = "hello\0";   //字符串在结尾的位置隐藏了一个“\0”的字符  作为字符串结束的标志

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);   //证明字符串结束的标志'\0'

	int len = strlen("abc");
	printf("%d\n", len);     //字符串的长度

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));   //求字符串长度时\0不参与计算

	//转义字符
	printf("(are you ok??)\n");
	printf("\'\n");
	printf("a\n");
	printf("\"\n");  //打出作为字符的"   ?  '加转义字符
		
	printf("%d\n", 100);
	printf("%c\n", 'a');
	printf("%s\n", "abc");
	printf("'\n");
	printf("c:\\test\\test.c\n");    //双斜杠作为转义字符用于表示一个反斜杠，防止他被解释为一个转义序列符
	printf("\a\a\a\a\a\a\a\a\a\a\a\a");	

	printf("%d\n", strlen("c:\test\328\test.c"));  //  \328不能被看作转义字符，因为八进制中不能出现8   \32可以
	  
	//   //是C++的注释风格
	//    /**/是C的注释风格，但是不适用与嵌套注释（当遇到第一个*/即视为注释结束）
			
	return 0;
}
