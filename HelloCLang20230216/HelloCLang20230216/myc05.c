#include<stdio.h>
int main()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d x %d = %d\n", i, j, i * j);
	}
	puts("");


	int a, b, c, d;
	while (1)
	{
		printf("1. a�ܺ��� b�ܱ��� x c���� x d ����\n");
		scanf_s("%d %d %d %d", &a, &b, &c, &d);
	
		if ((a<1 || a>b) || (b < a || b>9) || (c<1 || c>d) || (d < c || d>9))
			printf("�߸� �Է��Ͽ����ϴ�.\n");
		else
			break;
	}
	for (int i = a; i <= b; i++)
	{
		for (int j = c; j <= d; j++)
			printf("%d x %d = %d\n", i, j, i * j);
	}

	puts("");
	
	
	printf("2. \n");

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
			printf("%d x %d = %d\t", j, i, i * j);
		puts("");
	}
	return 0;
}