#include<stdio.h>
#define MAXSIZE 1024
int main()
{
	char name[MAXSIZE];
	int age;
	double tall;
	char bloodType[100];
	char mbti[10];
	
	printf("이름은?\n");
	gets(name);
	printf("나이는?\n");
	scanf_s("%d", &age);
	printf("키는?\n");
	scanf_s("%lf", &tall);
	printf("혈액형은?\n");
	rewind(stdin);
	gets(bloodType);
	printf("MBTI는?\n");
	gets(mbti);
	printf("%s %d %.1f %s %s\n", name, age,tall,bloodType,mbti);




	return 0;
}