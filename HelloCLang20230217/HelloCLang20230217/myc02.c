#include<stdio.h>
int main()
{
	for (char c = 'A'; c <= 'Z'; c++)
		printf("%c", c);
	puts("");

	for (char c = 'a'; c <= 'z'; c++)
		printf("%c", c);
	puts("");
	

	for (char c = 'A'; c <= 'z'; c++)
	{
		if (c <= 'Z' || c >= 'a')
			printf("%c", c);
		else if (c > 'Z' && c < 'a')
			printf(" ");
	}
	puts("");

	printf("\n층 수를 입력하세요\n");
	int floor;
	scanf_s("%d", &floor);

	for (int i = 0; i < 2 * floor; i++)
	{
		int onoffSwitch = i;
		for (int j = 0; j < floor; j++)
		{
			if (onoffSwitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onoffSwitch++;


		}
		printf("\n");




	}



	return 0;
}