#include<stdio.h>
int main()
{
	if (0)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("�ȳ��ϼ���\n");
		}
		for (int i = 1; i <= 10; i++)
		{
			printf("i=%d\n", i);
			printf("�ȳ��ϼ���\n");
		}
	}



	int x;
	printf("1. 1���� n���� ���� ���� n�� �Է��Ͻÿ�.\n");
	scanf_s("%d", &x);

	int sum = 0;

	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}
	printf("1. 1���� %d���� ���� : %d\n",x, sum);

	for (int num = 1; num != 0;)
	{
		printf("2. ������ ���� ���� �Է��Ͻÿ�(0�� �Է��ϸ� ����)\n");
		scanf_s("%d", &num);
		if(num!=0)
			printf("%d�� ������ : %d\n", num, num * num);
	}
	int n;
	printf("3, 4. ���� �Է��Ͻÿ�\n");
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