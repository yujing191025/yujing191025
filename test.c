//����ͷ�����������������ʹ�õĺ�����
#include <stdio.h>
//��������һ��.c��ֻ����һ����
int main()
{
	printf("hello world\n");//��ӡ
	char ch = 'a';

	//�ַ���������
	printf("%d\n", sizeof(char));
	//����
	printf("%d\n", sizeof(int));
	//������
	printf("%d\n", sizeof(short));
	//������
	printf("%d\n", sizeof(long));
	//����������
	printf("%d\n", sizeof(long long));
	//�����ȸ�����
	printf("%d\n", sizeof(float));
	//˫���ȸ�����
	printf("%d\n", sizeof(double));

    //����
	int age = 18;
	double weight = 54.3;
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);
	printf("%lf\n", weight);



	return 0;	
}