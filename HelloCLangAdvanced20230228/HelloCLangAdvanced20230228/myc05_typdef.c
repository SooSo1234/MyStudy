#include<stdio.h>
struct Student {
	char name[100];
	int age;
}typedef Student;


int main()
{
	Student bsso;
	strcpy(bsso.name, "�Һ���");
	bsso.age = 33;

	Student djlee = { "�̵���",35 };

	Student dhshin = { .age = 20,.name = "�ŵ���" };

	Student sslee;
	printf("�̸��� ����?\n");
	gets(sslee.name);
	printf("���̴�?\n");
	scanf_s("%d", &sslee.age);

	printf("%s %d\n", bsso.name, bsso.age);
	printf("%s %d\n", djlee.name, djlee.age);
	printf("%s %d\n", dhshin.name, dhshin.age);
	printf("%s %d\n", sslee.name, sslee.age);


	return 0;
}