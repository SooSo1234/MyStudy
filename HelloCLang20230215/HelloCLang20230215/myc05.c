#include<stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("1���� 100���� ¦�� ���� %d�Դϴ�.\n", sum);
	sum = 0;
	for (int i = 0; i <= 100; i += 2)
		sum += i;
	printf("sum=%d\n", sum);
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
			continue;
		sum += i;
	}
	printf("sum=%d\n", sum);









	return 0;
}