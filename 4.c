#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//�ַ����飺������һ��ͬ���͵�Ԫ��
	char arr[] = "hello\0";   //�ַ����ڽ�β��λ��������һ����\0�����ַ�  ��Ϊ�ַ��������ı�־

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);   //֤���ַ��������ı�־'\0'

	int len = strlen("abc");
	printf("%d\n", len);     //�ַ����ĳ���

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));   //���ַ�������ʱ\0���������

	//ת���ַ�
	printf("(are you ok??)\n");
	printf("\'\n");
	printf("a\n");
	printf("\"\n");  //�����Ϊ�ַ���"   ?  '��ת���ַ�
		
	printf("%d\n", 100);
	printf("%c\n", 'a');
	printf("%s\n", "abc");
	printf("'\n");
	printf("c:\\test\\test.c\n");    //˫б����Ϊת���ַ����ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
	printf("\a\a\a\a\a\a\a\a\a\a\a\a");	

	printf("%d\n", strlen("c:\test\328\test.c"));  //  \328���ܱ�����ת���ַ�����Ϊ�˽����в��ܳ���8   \32����
	  
	//   //��C++��ע�ͷ��
	//    /**/��C��ע�ͷ�񣬵��ǲ�������Ƕ��ע�ͣ���������һ��*/����Ϊע�ͽ�����
			
	return 0;
}