#include<stdio.h>
#include<stdbool.h>
int main()
{
	char numbers[100];
	int i = 0;
	int isnum = true;
	while (1)
	{
		char c = getchar();
		rewind(stdin);
		if (c == '-')
			break;
		if (c == '\n')
			continue;
		if (c < '0' || c>'9')
		{
			printf("again!\n");
			continue;
		}
		numbers[i] = c;
		i++;
	}
	numbers[i] = NULL;

	printf("%s\n", numbers);

	char numbers2[100];
	char* num=numbers2;
	int i1 = 0;
	while (1)
	{
		char c = getchar();
		rewind(stdin);
		if (c == '-')
			break;
		if (c == '\n')
			continue;
		if (c < '0' || c>'9')
		{
			printf("again!\n");
			continue;
		}
		*(num+i1) = c;
		i1++;
	}
	*(num+i1) = NULL;

	printf("%s\n", num);
	return 0;



}