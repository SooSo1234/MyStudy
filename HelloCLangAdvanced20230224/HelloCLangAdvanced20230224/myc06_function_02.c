#include<stdio.h>
void Introduce()
{
	char name[100];
	printf("�̸���?\n");
	gets(name);
	printf("�ȳ��ϼ���\n");
	printf("�� �̸��� %s�Դϴ�.\n",name);
}

void printPower(int num)
{
	printf("%d�� ���� : %d\n", num, num * num);
}

int sign()
{
	int a, b;
	printf("�� 2�� �Է��ϼ���.\n");
	scanf_s("%d %d", &a, &b);
	if (a - b > 0)
		return 1;
	else if (a - b == 0)
		return 0;
	else
		return -1;
}

void signc()
{
	int a = sign();
	if (a < 0)
		printf("'����'�Դϴ�.\n");
	else if (a > 0)
		printf("'���'�Դϴ�.\n");
	else
		printf("'0'�Դϴ�.\n");
}

void change(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("a : %d b : %d\n", a, b);
	printf("*a : %d *b : %d\n", *a, *b);
}


/////////////////////////////////////// ���� ���� ////////////////////////////////////////////////// 
int main()
{
	if (0)
	{
		Introduce();
		printPower(8);


		printf("%d\n", sign());
		signc();


		int a;
		printf("������ ���� ���� �Է��ϼ���.\n");
		scanf_s("%d", &a);
		printPower(a);
	}


	int x = 3, y = 8;
	change(&x, &y);
	printf("%d %d\n",x, y);
	


	return 0;
}