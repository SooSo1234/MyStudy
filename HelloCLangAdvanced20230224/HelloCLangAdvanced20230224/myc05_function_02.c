#include<stdio.h>
int sum_a_to_b(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	return sum;
}

int calc_a_to_b(int a, int b, int c)
{
	int sum = 0;
	switch (c)
	{
	case '+':
		//for (int i = a; i <= b; i++)
		//	sum += i;
		sum_a_to_b(a, b);
		break;
	case '*':
	case 'x':
	case 'X':
		sum = 1;
		for (int i = a; i <= b; i++)
			sum *= i;
		break;
	default:
		sum = 0;
		printf("�߸��� ����%c\n", c);
		break;
	}


	return sum;
}





int main()
{

	printf("�� : %d\n", sum_a_to_b(2, 5));
	printf("�� : %d\n", calc_a_to_b(2, 5,'X'));



	return 0;
}