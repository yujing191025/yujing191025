#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
int g_val = 2022;     //ȫ�ֱ��� ������Ϊ�������̣���Դ�ļ�ʹ��������extern��
int main()
{//���������������

	 printf("1:%d\n", g_val);
	int a = 10;

	{	 printf("2:%d\n", g_val);
		printf("%d\n", a);     //�ֲ�����a������ֻ���ڶ���ʱ��{}��
	
	}
	printf("3:%d\n", g_val);		

		
		//�������ڣ������Ĵ���������������֮���һ��ʱ���
		//�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ���
		//ȫ�ֱ������������ڣ������������������


  //����
		   //1.�������
		3.14;
		1000;
		"aaaa";
		'a';

			//2.const���εĳ�����

			/*const int num = 10;
			num = 20; */  //const����֮��Ϊ�����������г����ԣ����ɸı䣬��˱���

		//const int num = 10;
		//int arr[10] = { 0 };//10��Ԫ��
		//int arr2[num] = { 0 };      //������Ҫ��Ϊ������������������Ϊ����

            //3.#define����ı�ʶ������
             #define MAX 10000;
		     int n = MAX;
			 printf("n=%d\n", n);
			//4.ö�ٳ���������һһ�оٵĳ�����
			 enum Sex
			 {//����ö�����͵ı���δ���Ŀ���ȡֵ
				 MALE,
				 FEMALE,
				 SECRET
			};

			 enum Sex s = MALE;

			 printf("%d\n", MALE);
			 printf("%d\n", FEMALE);
			 printf("%d\n", SECRET);    //ö�ٳ���Ĭ�ϴ��㿪ʼ����������1
		return 0;
} 
