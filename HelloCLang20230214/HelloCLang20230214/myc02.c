#include<stdio.h>
int main()
{
	if (0)
	{
		int input;
		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &input);

#pragma region IF문

		if (input < 1 || input>6)
			printf("잘못된 값\n");
		else
		{
			if (input == 1)
				printf("1 5 4 6 2 3\n");
			else if (input == 2)
				printf("2 3 1 5 6 4\n");
			else if (input == 3)
				printf("3 1 5 6 4 2\n");
			else if (input == 4)
				printf("4 6 2 3 1 5\n");
			else if (input == 5)
				printf("5 4 6 2 3 1\n");
			else
				printf("6 2 3 1 5 4\n");
		}
#pragma endregion
#pragma region SWITCH문

		switch (input)
		{
		case 1:
			printf("1 5 4 6 2 3\n");
			break;
		case 2:
			printf("2 3 1 5 6 4\n");
			break;
		case 3:
			printf("3 1 5 6 4 2\n");
			break;
		case 4:
			printf("4 6 2 3 1 5\n");
			break;
		case 5:
			printf("5 4 6 2 3 1\n");
			break;
		case 6:
			printf("6 2 3 1 5 4\n");
			break;
		default:
			printf("잘못된 값\n");
			break;
		}

#pragma endregion
	}
#pragma region 태어난 달


	if (0)
	{
		int m;
		printf("몇월에 태어나셨어요?\n");
		scanf_s("%d", &m);
		if (m == 12 || m == 1 || m == 2)
			printf("겨울\n");
		else if (m == 3 || m == 4 || m == 5)
			printf("봄\n");
		else if (m >= 6 && m <= 8)
			printf("여름\n");
		else if (m >= 9 && m <= 11)
			printf("가을\n");
		else
			printf("잘못된 값입니다.\n");

		switch (m)
		{
		case 12:
		case 1:
		case 2:
			printf("winter is comming\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("spring\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("summer\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("autumn\n");
			break;

		default:
			printf("잘못된 값입니다.\n");
			break;
		}
	}

#pragma endregion
	if (0)
	{
		printf("밑변 A와 높이 B의 길이를 입력하시오.\n");
		int A, B, C;
		scanf_s("%d %d", &A, &B);
		C = (A * A) + (B * B);
		printf("%d^2 + %d^2 = %d\n", A, B, C);

		printf("A B를 입력하고 그에 맞는 해를 맞춰보세요.(c^2 갑을 맞추기)\n");
		scanf_s("%d %d %d", &A, &B, &C);

		if (C == ((A * A) + (B * B)))
			printf("O\n");
		else
			printf("X\n");

		if (C == ((A * A) + (B * B)))
			printf("O\n");
		else if (C > ((A * A) + (B * B)))
			printf("+\n");
		else
			printf("-\n");
	}

	int x, y;
	printf("x y값을 입력하세요.\n");
	scanf_s("%d %d", &x, &y);
	printf("n=3, x=%d, y=%d 일 경우, z^3=%d\n", x, y, x* x* x + y * y * y);
	int n,i;
REF2:
	printf("n값을 입력하시오.\n");
	scanf_s("%d", &n);
	if (n < 3)
	{
		printf("잘못된 값을 입력하였습니다.\n");
		goto REF2;
	}
	int x1=1, y1=1;
	i = 0;
REF1:
	x1 = x1 * x;
	y1 = y1 * y;
	i++;
	if (i != n)
		goto REF1;
	printf("n=%d, x=%d, y=%d일 경우, z^%d=%d\n", n, x, y, n, x1 + y1);

	return 0;
}