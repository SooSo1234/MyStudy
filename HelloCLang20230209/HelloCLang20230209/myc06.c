#include<stdio.h>
int main()
{

	int a = 10;
	if (a > 0)
		printf("a�� ����Դϴ�.\n");

	if (a >= 10)
	{
		printf("a�� ���ڸ� �� �̻��Դϴ�.\n");
		printf("a�� 10���� Ŭ ���� �ְ� 10�� ���� �ִ�.\n");
	}

	if (a != 0)
	{
		if (a > 0)
		{
			printf("��");
		}
		else
		{
			printf("��");
		}
	}
	else
	{
		printf("0");
	}

	char c;
	if (a > 0)
		c = '+';
	else if (a < 0)
		c = '+';
	else
		c = '0';




	return 0;
}