#include<stdio.h>
int main()
{
	if (0)
	{
		int sum = 0;
		for (int i = 1; i <= 100; i++)
		{
			if (i % 3 == 0)
				sum += i;
		}
		printf("3의 배수만 더한 것(1~100) : %d\n", sum);


		printf("n,m 입력하세요\n");
		int n, m;
		scanf_s("%d %d", &n, &m);
		sum = 0;
		if (n >= 1 && m >= 1);
		{
			for (int i = 1; i <= n; i++)
			{
				if (i % m != 0)
					sum += i;

			}
			printf("결과 : %d", sum);
		}
	}

	printf("몇 층을 쌓겠느냐?\n");
	int f;
	scanf_s("%d", &f);
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");

		puts("");
	}

	for (int i = 1; i <= f; i++)
	{
		for (int j = 1; j <= f - i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");

		puts("");
	}



	return 0;
}