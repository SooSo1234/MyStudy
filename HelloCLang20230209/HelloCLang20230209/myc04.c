#include<stdio.h>
int main()
{
	int a;
	printf("1. ���ڸ� �Է��Ͻÿ�\n");
	scanf_s("%d", &a);

	a != 2022 ? printf("������\n") : printf("�ѹݵ�\n");

	int age;
	printf("2. ���̸� �Է��Ͻÿ�\n");
	scanf_s("%d", &age);
	age >= 20 ? printf("����\n") : printf("����\n");

	a < 0 ? printf("3. 0 �̸��� ���� ���� �߸��� ���Դϴ�.\n") : printf("3.\n");
	age >= 20 ? printf("����\n") : (age < 0 ? printf("�߸��� ����\n") : printf("����\n"));

	int b;

	printf("4. ������ ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &b);

	b != 0 ? (b > 0 ? printf("���\n") : printf("����\n")) : printf("0\n");


	int num;

	printf("5. ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &num);
	
	char c = num != 0 ? (num > 0 ? '+' : '-') : '0';
	printf("%c\n",c);









	return 0;
}