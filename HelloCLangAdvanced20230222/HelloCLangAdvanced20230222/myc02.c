#include<stdio.h>
int main()
{
	char name[100];
	int age;
	char bType[100];
	printf("�̸��� ������?\n");
	gets(name);	
	printf("���̴�?\n");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("��������?\n");
	gets(bType);
	printf("%s %d %s\n", name, age, bType);

	return 0;
}