#include<stdio.h>
int main()
{
	//1. 구구단
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	//2. 피라미드
	int a;
	printf("숫자를 입력하시오.\n");
	scanf_s("%d", &a);
	int x=0;
	for (int i = 1; i <= a; i++)
	{
		x = 2 * i - 1;
		for (int j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= x; j++)
		{
			printf("*");
		}
		puts("");
	}

	//3. 다이아몬드
	a = 0;
	printf("숫자를 입력하시오.\n");
	scanf_s("%d", &a);
	x = 0;
	for (int i = 1; i <= a; i++)
	{
		x = 2 * i - 1;
		for (int j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= x; j++)
		{
			printf("*");
		}
		puts("");
	}
	for (int i = a-1; i >0; i--)
	{
		x = 2 * i - 1;
		for (int j = a-i; j >0; j--)
		{
			printf(" ");
		}
		for (int j = x; j >0; j--)
		{
			printf("*");
		}
		puts("");
	}
	printf("4. ");
	for (int i = 'A'; i <= 'Z'; i++)
	{
		printf("%c", i);
	}
	puts("");
	printf("5. ");
	for (int i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}
	puts("");
	printf("6. ");
	for (int i = 'A'; i <= 'Z'; i++)
	{
		printf("%c", i);
		printf("%c", i+32);
	}
	puts("");

	printf("7. 숫자를 입력하시오.\n");
	scanf_s("%d", &a);

	
		for (int i = 0; i < (2 * a); i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if ((j+i) % 2 != 0)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			puts("");
		}
	




	return 0;
}