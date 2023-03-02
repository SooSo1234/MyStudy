#include<stdio.h>
struct Student {
	char name[100];
	int age;
}typedef Student;


int main()
{
	Student bsso;
	strcpy(bsso.name, "소병수");
	bsso.age = 33;

	Student djlee = { "이동준",35 };

	Student dhshin = { .age = 20,.name = "신동훈" };

	Student sslee;
	printf("이름이 뭐야?\n");
	gets(sslee.name);
	printf("나이는?\n");
	scanf_s("%d", &sslee.age);

	printf("%s %d\n", bsso.name, bsso.age);
	printf("%s %d\n", djlee.name, djlee.age);
	printf("%s %d\n", dhshin.name, dhshin.age);
	printf("%s %d\n", sslee.name, sslee.age);


	return 0;
}