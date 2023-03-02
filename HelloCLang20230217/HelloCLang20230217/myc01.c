#include<stdio.h>
int main()
{
	int n;
	printf("수를 입력하시오.\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}

		puts("");
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j >= n - i; j--)
		{
			printf(" ");
		}
		for (int j = n; j >= 2 * i-1; j--)
		{
			printf("*");
		}

		puts("");
	}

	return 0;
}