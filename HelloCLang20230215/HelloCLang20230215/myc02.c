#include<stdio.h>
int main()
{
	if (0)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("안녕하세요\n");
		}
		for (int i = 1; i <= 10; i++)
		{
			printf("i=%d\n", i);
			printf("안녕하세요\n");
		}
	}



	int x;
	printf("1. 1부터 n까지 합을 구할 n을 입력하시오.\n");
	scanf_s("%d", &x);

	int sum = 0;

	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}
	printf("1. 1부터 %d까지 합은 : %d\n",x, sum);

	for (int num = 1; num != 0;)
	{
		printf("2. 제곱을 구할 수를 입력하시오(0을 입력하면 종료)\n");
		scanf_s("%d", &num);
		if(num!=0)
			printf("%d의 제곱은 : %d\n", num, num * num);
	}
	int n;
	printf("3, 4. 수를 입력하시오\n");
	scanf_s("%d", &n);
	printf("3.\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("4.\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}