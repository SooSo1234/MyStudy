/*
1.���� ������ r ���� �Է� �ް�, ���� ���̿� ���� �ѷ��� ����ϱ�
���� ���� : r*r*3.14
���� �ѷ� : 2*r*3.14

2.byte�� �Է¹ް� �׿� �ش��ϴ� bit�� ����ϱ�
�Է� : 1  �Է� : 5
��� : 8  ��� : 40

3. bit���� �Է¹ް� �׿� �ش��ϴ� byte�� ����ϱ�
��, �Ҽ����� ��� ���� ��
�Է� : 8  ��� : 1
�Է� : 40 ��� : 5

4. ���ڸ� �Է¹ް� �Ʒ��� ���� ����Ѵ�. (�� 3600 �̸����� �Է��Ѵٰ� �����Ѵ�.)
123 => 2�� 3��

5. �ڽ��� ��� ����(+ - 0 �� �ϳ�), mbti, ������ (RH +�� -�� �Է�),
Ű, ���� �̷� �������� �Է¹ް�, ���

*/


#include<stdio.h>
int main()
{
	//1.

	int r;
	printf("1. ���� �������� �Է��Ͻÿ�\n");
	scanf_s("%d", &r);
	printf("���� ���� : %lf\n���� �ѷ� : %lf\n", (double)r * r * 3.14, (double)2*r*3.14);


	int byte;
	printf("2. ��Byte������ �Է��Ͻÿ�\n");
	scanf_s("%d", &byte);
	printf("%d\n", byte*8);


	int bit;
	printf("3. ��Bit������ �Է��Ͻÿ�\n");
	scanf_s("%d", &bit);
	printf("%d\n", bit / 8);


	int num;
	printf("4. 0 ~ 3600 ������ ���ڸ� �Է��Ͻÿ�\n");
	scanf_s("%d", &num);
	printf("%d�� %d��\n", num / 60, num % 60);



	char feel;
	double tall;
	int age;

	printf("�������, Ű, ���� ������ �Է��Ͻÿ�\n");
	rewind(stdin);
	scanf_s("%c", &feel, 1);
	scanf_s("%lf",&tall);
	scanf_s("%d", &age);
	printf(" ��� : %c \n Ű : %lf \n ���� : %d \n", feel, tall, age);




	return 0;
}