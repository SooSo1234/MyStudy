#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int pita(int a, int b)
{
	return (a * a) + (b * b);
}
int calculator(int a, int b, int c)
{
	int result = 0;
	switch (c)
	{
	case '+':
		result = a + b;
		break;
	case'-':
		result = a - b;
		break;
	case '*':
	case 'x':
	case 'X':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result= a % b;
		break;
	default:
		printf("%c�� �߸��� �����Դϴ�.\n", c);
		break;
	}
	return result;
}
int isEuler(int F, int V, int E)
{
	int result = F + V - E;
	if (result == 2)
		return 1;
	else
		return 0;
}

int SumAll(int StartNum, int EndNum)//StartNum ���� EndNum���� ���� ��
{
	int sum = 0;
	for (int i = StartNum; i <= EndNum; i++)
	{
		sum += i;
	}
	return sum;
}

int CalculatorAll(int StartNum, int EndNum, int PlusorTimes)
{
	int result = 0;
	switch (PlusorTimes)
	{
	case '+':
		result = 0;
		for (int i = StartNum; i <= EndNum; i++)
		{
			result += i;
		}
		break;
	case '*':
	case 'x':
	case 'X':
		result = 1;
		for (int i = StartNum; i <= EndNum; i++)
		{
			result *= i;
		}
		break;
	default:
		printf("�߸��� ��ȣ\n");
		return 0;
		break;
	}
	return result;
}





///////////////////////////////////////
int main()
{
	printf("%d\n", pita(4, 5));
	int c = pita(3, 4);
	printf("%d\n", c);
	int a = 1;
	int b = 2;
	c = pita(a, b);
	printf("%d\n", c);
	char in[8] = { '+','-','*','x','X','/','%' };
	for (int i = 0; in[i] != NULL; i++)
	{
		srand(time(NULL)+i);
		a = rand()%10;
		srand(i + rand());
		b = rand()%10;
		printf("%d %c %d = %d\n",a,in[i],b, calculator(a, b, in[i]));
	}
	int n = printf("�ȳ��ϼ���\n");
	printf("%d\n", n);
	printf("%d\n", printf("�ȳ��ϼ���"));

	int result = isEuler(10, 20, 30);
	if (result)
		printf("���Ϸ� ���� ����!\n");
	if (isEuler(2, 4, 4))
		printf("Euler ���� �����ؿ�\n");

	printf("%d\n", SumAll(3, 20));
	printf("%d\n", CalculatorAll(3, 20,'+'));


	return 0;
}