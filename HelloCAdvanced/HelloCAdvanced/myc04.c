#include<stdio.h>
#define MAXSIZE 1024
int main()
{
	char name[MAXSIZE];
	int age;
	double tall;
	char bloodType[100];
	char mbti[10];
	
	printf("�̸���?\n");
	gets(name);
	printf("���̴�?\n");
	scanf_s("%d", &age);
	printf("Ű��?\n");
	scanf_s("%lf", &tall);
	printf("��������?\n");
	rewind(stdin);
	gets(bloodType);
	printf("MBTI��?\n");
	gets(mbti);
	printf("%s %d %.1f %s %s\n", name, age,tall,bloodType,mbti);




	return 0;
}