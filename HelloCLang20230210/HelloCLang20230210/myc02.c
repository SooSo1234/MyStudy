#include<stdio.h>
int main()
{

	printf("���� 2���� �Է��غ�����.\n");
	int b;
	scanf_s("%d %d", &a, &b);
	printf("a=%d, b=%d\n", a, b);

	rewind(stdin);
	
	printf("������ RH +���� -���� ���� ���̵� ����\n");
	char rh;
	int age;
	scanf_s("%c %d", &rh, 1, &age);
	printf("������ Rh + - ���� : %c\n���� : %d", rh, age);


	return 0;
}