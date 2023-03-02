#include<stdio.h>
int main()
{
	char name[20];
	
	printf("Hello! What's your name?\n");
	scanf_s("%s", name);
	printf(" Welcome! %s!\n", name);



	return 0;
}