#include<stdio.h>
int main()
{

	if (0)
	{
		for (int num = 1; num != 0;)
		{
			printf("숫자를 입력하세요.\n");
			scanf_s("%d", &num);
			if (num != 0)
				printf("%d\n", num * num);
		}
		for (int num = 1; num != 0;)
		{
			printf("수 입력\n");
			scanf_s("%d", &num);
			if (num == 0)
				break;
			printf("%d", num * num);

		}
	}
	printf("1. 1 부터 100까지 숫자중 짝수의 합\n");
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("  %d\n", sum);

	int a, b;
	printf("2. 0:가위 1:바위 2:보 중 2번 입력하시오\n");
	scanf_s("%d %d", &a, &b);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("1p : 가위 , 2p : 가위     결과 : 비김\n");
		}
		else if( b==1)
			printf("1p : 가위 , 2p : 바위     결과 : 2p 승\n");
		else
			printf("1p : 가위 , 2p : 보     결과 : 1p 승\n");
	}
	else if (a == 1)
	{
		if(b==0)
			printf("1p : 바위 , 2p : 가위     결과 : 1p 승\n");
		else if(b==1)
			printf("1p : 바위 , 2p : 바위     결과 : 비김\n");
		else
			printf("1p : 바위 , 2p : 보     결과 : 2p 승\n");

	}
	else
	{
		if(b==0)
			printf("1p : 보 , 2p : 가위     결과 : 2p 승\n");
		else if(b==1)
			printf("1p : 보 , 2p : 바위     결과 : 1p 승\n");
		else
			printf("1p : qh , 2p : 보     결과 : 비김\n");
	}
	printf("3. 가위바위보 1p가 이길때까지\n");

	for (int i=1; i != 0;)
	{
		scanf_s("%d %d", &a, &b);

		switch (a)
		{
		case 0:
			switch (b)
			{
			case 0:
				printf("비김\n");
				i = 1;
				break;
			case 1:
				printf("1p 패\n");
				i = 1;
				break;
			case 2:
				printf("1p 승\n");
				i = 0;
				break;
			default:
				printf("잘못된 값\n");
				break;
			}
			break;
		case 1:
			switch (b)
			{
			case 0:
				printf("1p 승\n");
				i = 0;
				break;
			case 1:
				printf("비김\n");
				i = 1;
				break;
			case 2:
				printf("1p 패\n");
				i = 1;
				break;
			default:
				printf("잘못된 값\n");
				break;
			}
			break;
		case 2:
			switch (b)
			{
			case 0:
				printf("1p 패\n");
				i = 1;
				break;
			case 1:
				printf("1p 승\n");
				i = 0;
				break;
			case 2:
				printf("비김\n");
				i = 1;
				break;
			default:
				printf("잘못된 값\n");
				break;
			}
			break;
		default:
			printf("잘못된 값\n");
			break;
		}
	}
	
	printf("4. 가위바위보 1p가 이길때까지\n");

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
				printf("비김\n");
				i = 1;
				break;
			case 1:
				printf("1p 패\n");
				i = 1;
				break;
			default:
				printf("1p 승\n");
				i = 0;
				break;
			}
			break;
		case 1:
			switch (b)
			{
			case 0:
				printf("1p 승\n");
				i = 0;
				break;
			case 1:
				printf("비김\n");
				i = 1;
				break;
			default:
				printf("1p 패\n");
				i = 1;
				break;
			}
			break;
		default:
			switch (b)
			{
			case 0:
				printf("1p 패\n");
				i = 1;
				break;
			case 1:
				printf("1p 승\n");
				i = 0;
				break;
			default:
				printf("비김\n");
				i = 1;
				break;
			}
			break;
		}
	}

	printf("5. 1부터 100까지 중 3의 배수의 합\n");
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("    %d\n", sum);
	int n, m;
	printf("6. 1부터 n까지 더하되 m의 배수를 제외함 n m값 입력하시오\n");
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