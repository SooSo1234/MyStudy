#include<stdio.h>
int main()
{
	int a, b, c, d, e;


	printf("3�ڸ� ���� 2���� �Է�\n");

	scanf_s("%d %d", &a, &b);
	c = b % 10;
	d = (b % 100 - c)/10;
	e = (b - c - d)/100;

	printf("1. %d\n", a * c);
	printf("2. %d\n", a * d);
	printf("3. %d\n", a * e);
	printf("4. %d\n", a * b);


	return 0;
}
