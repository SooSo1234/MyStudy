#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Buffer()
{
	int t = time(NULL);
	while (1)
	{
		if (time(NULL) - t > 1)
		{
			system("cls");
			return;
		}
	}
}

int randomNum(int *a)
{
	srand(time(NULL));
	*a= rand()%49+1;
}

int minNum(int *num,int *answer,int *min)
{
	if (*num < *answer)
	{
		*min = *num;
		return 1;
	}
	else
		return 0;
}

int maxNum(int* num, int* answer, int* max)
{
	if (*num > *answer)
	{
		*max = *num;
		return 1;
	}
	else
		return 0;
}

int com(int* num, int* answer, int* min, int* max)
{
	int a=minNum(num, answer, min);
	int b=maxNum(num, answer, max);

	if (a)
	{
		printf("%d���� ū ���Դϴ�.\n", *num);
		return 0;
	}
	else if (b)
	{
		printf("%d���� ���� ���Դϴ�.\n", *max);
		return 0;
	}
	else
	{
		printf("�����Դϴ�.\n");
		return 1;
	}

}

int replay()
{
	printf("�ѹ� �� �Ͻðڽ��ϱ�?(Yes : 1    No : 0)\n");
	int a;
	scanf_s("%d", &a);
	if (a == 1)
		system("cls");
	return a;
}

int randomNum_1()
{
	srand(time(NULL));
	return rand() % 7 + 2;
}

int randomNum_2()
{
	srand(time(NULL)+rand());
	return rand() % 8 + 1;
}

int gugucheck(int a, int b)
{
	if (a == b)
	{
		printf("�����Դϴ�.\n");
		return 0;
	}
	else if (a == 0)
	{
		printf("�������� �����մϴ�.\n");
		return 1;
	}
	else
	{
		printf("������ %d�Դϴ�.\n", b);
		return 0;
	}
}

void FindNumber()
{
	while (1)
	{
		int num, answer = 0, min = 1, max = 50;
		randomNum(&answer);
		while (1)
		{
			printf("%d���� %d������ �� �� �ϳ��� �Է��ϼ���.\n", min, max);
			scanf_s("%d", &num);

			if (com(&num, &answer, &min, &max))
				break;
		}
		if (replay() == 0)
			break;
	}
}

void MultiplicationTable()
{
#pragma region ������ ���߱�
	while (1)
	{
		while (1)
		{
			int gugu;
			int num1 = randomNum_1();
			int num2 = randomNum_2();
			int answer2 = num1 * num2;
			int timeSt = time(NULL);
			printf("%d X %d = ???\n", num1, num2);
			scanf_s("%d", &gugu);
			int timeEn = time(NULL);
			if (timeEn - timeSt > 5)
			{
				printf("�ð��ʰ�\n");
				continue;
			}
			else if (gugucheck(gugu, answer2))
			{
				break;
			}
		}
		if (replay() == 0)
			break;
	}
#pragma endregion

}

int Choice()
{
	int a;
	printf("�÷��� �� ������ ��ȣ�� �Է��ϼ���.\n1. ���ڸ��߱�\n2. ������\n0. ����\n");
	scanf_s("%d", &a);
	
	return a;
}


int main()
{
	while (1)
	{
		int a=0;
		switch (Choice())
		{
		case 1:
			FindNumber();
			break;
		case 2:
			MultiplicationTable();
			break;
		case 0:
			a = 1;
			break;
		default:
			printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�.\n");
			Buffer();
			break;
		}
		if (a)
			return 0;
	}


	return 0;
}