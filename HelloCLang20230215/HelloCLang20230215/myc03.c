#include<stdio.h>
int main()
{

	int n;
	printf("1. 1���� ����� ���� ���� ������ �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);
	int sum=0;
	for (int i = 1; i <= n; i++)
	{
		if (i > 1)
			printf("   %d + %d = %d\n", sum, i, sum + i);
		sum += i;
	}
	printf("sum = %d\n\n", sum);

	printf("2. 1���� ����� ���� ���� ������ �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);

	int times=1;
	for (int i = 1; i <= n; i++)
	{
		times *= i;
	}


		printf("��� 1) 1���� %d���� ���� = %d\n", n, times);


		printf("��� 2) %d! = 1", n);
		
		for (int i = 2; i <= n; i++)
		{
			printf(" x %d", i);
		}

		printf(" = %d\n", times);

		times = 1;

		printf("��� 3) 1���� %d���� ���� ����\n", n);
		for (int i = 2; i <= n; i++)
		{
			printf("	%d x %d = %d\n", times, i, times * (i));
			times *= i;
		}



	return 0;
}