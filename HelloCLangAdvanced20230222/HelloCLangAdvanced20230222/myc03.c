#include<stdio.h>

int main()
{
	char n[3];

	n[0] = '0';
	n[1] = 'a';
	n[2] = NULL;

	printf("%s\n", n);

	n[0] = '0';
	n[1] = 'a';
	n[2] = '1';

	printf("%s\n", n);

	char n2[3];
	gets(n2);
	printf("%s\n", n2);
	char n3[3];
	fgets(n3, sizeof(n2), stdin);
	printf("%s\n", n2);


	char numbers[100];
	while (1)
	{
		int swit = 1;
		printf("숫자 입력해\n");
		gets(numbers);
		for (int i = 0; numbers[i] != NULL; i++)
		{
			if (numbers[i] < '0' || numbers[i]>'9')
			{
				printf("숫자만 입력하라구~\n");
				swit = 0;
				break;
			}
		}
		if (swit)
		{
			printf("%s\n", numbers);
			break;
		}
	}
	return 0;
}