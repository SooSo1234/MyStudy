#include<stdio.h>
int main()
{

	if (0)
	{
		for (int num = 1; num != 0;)
		{
			printf("���ڸ� �Է��ϼ���.\n");
			scanf_s("%d", &num);
			if (num != 0)
				printf("%d\n", num * num);
		}
		for (int num = 1; num != 0;)
		{
			printf("�� �Է�\n");
			scanf_s("%d", &num);
			if (num == 0)
				break;
			printf("%d", num * num);

		}
	}
	printf("1. 1 ���� 100���� ������ ¦���� ��\n");
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("  %d\n", sum);

	int a, b;
	printf("2. 0:���� 1:���� 2:�� �� 2�� �Է��Ͻÿ�\n");
	scanf_s("%d %d", &a, &b);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("1p : ���� , 2p : ����     ��� : ���\n");
		}
		else if( b==1)
			printf("1p : ���� , 2p : ����     ��� : 2p ��\n");
		else
			printf("1p : ���� , 2p : ��     ��� : 1p ��\n");
	}
	else if (a == 1)
	{
		if(b==0)
			printf("1p : ���� , 2p : ����     ��� : 1p ��\n");
		else if(b==1)
			printf("1p : ���� , 2p : ����     ��� : ���\n");
		else
			printf("1p : ���� , 2p : ��     ��� : 2p ��\n");

	}
	else
	{
		if(b==0)
			printf("1p : �� , 2p : ����     ��� : 2p ��\n");
		else if(b==1)
			printf("1p : �� , 2p : ����     ��� : 1p ��\n");
		else
			printf("1p : qh , 2p : ��     ��� : ���\n");
	}
	printf("3. ���������� 1p�� �̱涧����\n");

	for (int i=1; i != 0;)
	{
		scanf_s("%d %d", &a, &b);

		switch (a)
		{
		case 0:
			switch (b)
			{
			case 0:
				printf("���\n");
				i = 1;
				break;
			case 1:
				printf("1p ��\n");
				i = 1;
				break;
			case 2:
				printf("1p ��\n");
				i = 0;
				break;
			default:
				printf("�߸��� ��\n");
				break;
			}
			break;
		case 1:
			switch (b)
			{
			case 0:
				printf("1p ��\n");
				i = 0;
				break;
			case 1:
				printf("���\n");
				i = 1;
				break;
			case 2:
				printf("1p ��\n");
				i = 1;
				break;
			default:
				printf("�߸��� ��\n");
				break;
			}
			break;
		case 2:
			switch (b)
			{
			case 0:
				printf("1p ��\n");
				i = 1;
				break;
			case 1:
				printf("1p ��\n");
				i = 0;
				break;
			case 2:
				printf("���\n");
				i = 1;
				break;
			default:
				printf("�߸��� ��\n");
				break;
			}
			break;
		default:
			printf("�߸��� ��\n");
			break;
		}
	}
	
	printf("4. ���������� 1p�� �̱涧����\n");

	for (int i=1;i!=0;)
	{
		scanf_s("%d %d", &a, &b);
		a %= 3;
		b %= 3;
		switch (a)
		{
		case 0:
			switch (b)
			{
			case 0:
				printf("���\n");
				i = 1;
				break;
			case 1:
				printf("1p ��\n");
				i = 1;
				break;
			default:
				printf("1p ��\n");
				i = 0;
				break;
			}
			break;
		case 1:
			switch (b)
			{
			case 0:
				printf("1p ��\n");
				i = 0;
				break;
			case 1:
				printf("���\n");
				i = 1;
				break;
			default:
				printf("1p ��\n");
				i = 1;
				break;
			}
			break;
		default:
			switch (b)
			{
			case 0:
				printf("1p ��\n");
				i = 1;
				break;
			case 1:
				printf("1p ��\n");
				i = 0;
				break;
			default:
				printf("���\n");
				i = 1;
				break;
			}
			break;
		}
	}

	printf("5. 1���� 100���� �� 3�� ����� ��\n");
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("    %d\n", sum);
	int n, m;
	printf("6. 1���� n���� ���ϵ� m�� ����� ������ n m�� �Է��Ͻÿ�\n");
	scanf_s("%d %d", &n, &m);
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % m != 0)
			sum += i;
	}
	printf("    %d\n", sum);







			return 0;
}