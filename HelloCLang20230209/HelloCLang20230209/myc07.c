#include<stdio.h>
int main()
{
	int a, b;
	int c;
	printf("1. x y ��ǥ�� �Է��Ͻÿ�\n");
	scanf_s("%d %d", &a, &b);
	if (a > 0)
	{
		if (b > 0)
		{
			c = 1;
		}
		else
		{
			c = 4;
		}
	}
	else 
	{
		if (b > 0)
		{
			c = 2;
		}
		else
		{
			c = 3;
		}
	}
	printf("�ش� ��ǥ�� %d��и鿡 �ֽ��ϴ�.\n", c);

	int age;
	printf("2. ���̸� �Է��Ͻÿ�\n");
	scanf_s("%d", &age);

	if (age < 0 || age > 200)
	{
		printf("����� Ÿ�뽺�Դϱ�?\n");
	}
	else if (age < 20)
	{
		printf("����� �̼������Դϴ�.\n");
	}
	else if (age <= 50)
	{
		printf("����� ��ȸ�� �� �������Դϴ�.\n");
	}
	else if (age <= 70)
	{
		printf("����� �������Դϴ�.\n");
	}
	else
	{
		printf("����� ������ �������Դϴ�.\n");
	}


	int h, m;
	int h2, m2;
	printf("3. �� �� �� �Է��Ͻÿ�\n");
	scanf_s("%d %d", &h, &m);
	if (m >= 45)
	{
		h2 = h;
		m2 = m - 45;
	}
	else
	{
		if (h > 0)
		{
			h2 = h - 1;
			m2 = m - 45 + 60;
		}
		else
		{
			h2 = h - 1 + 24;
			m2 = m - 45 + 60;
		}
	}
	printf("%d�� %d������ �˶��� ���߰ڽ��ϴ�.\n", h2, m2);

	return 0;

}