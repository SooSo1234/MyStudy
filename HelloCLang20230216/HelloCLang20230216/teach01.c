#include<stdio.h>
int main()
{
	int a, b, c;
	printf("���� 3���� �Է��ϼ���.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int s = 0;
	if (a <= b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % c != 0)
			{
				printf("%d + %d = %d\n", s, i, s + i);
				s += i;
			}
			else
				printf("     %d�� %d�� ����̹Ƿ� ����\n", i, c);
		}
		printf("%d���� %d������ ��(%d ��� ����) : %d\n", a, b, c, s);
	}
	else
	{
		printf("CASE 1: \n");
		printf("a(%d)�� b(%d)���� Ů�ϴ�. ���� �ٲٰڽ��ϴ�.\n");

		printf("CASE 2: \n");

		int x = a;
		a = b;
		b = x;
		
		for (int i = a; i <= b; i++)
		{
			if (i % c != 0)
			{
				printf("%d + %d = %d\n", s, i, s + i);
				s += i;
			}
			else
				printf("    %d�� %d�� ����̹Ƿ� ����\n", i, c);
		}
		printf("%d���� %d������ ��(%d ��� ����) : %d\n", a,b, c, s);


	}



	return 0;
}