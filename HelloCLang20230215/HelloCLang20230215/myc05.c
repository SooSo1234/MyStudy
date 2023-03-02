#include<stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("1부터 100까지 짝수 합은 %d입니다.\n", sum);
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