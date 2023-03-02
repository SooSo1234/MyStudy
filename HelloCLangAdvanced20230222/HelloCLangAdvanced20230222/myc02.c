#include<stdio.h>
int main()
{
	char name[100];
	int age;
	char bType[100];
	printf("이름이 뭐에요?\n");
	gets(name);	
	printf("나이는?\n");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("혈액형은?\n");
	gets(bType);
	printf("%s %d %s\n", name, age, bType);

	return 0;
}